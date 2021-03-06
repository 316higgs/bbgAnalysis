#include "QQbarMCOperator.hh"
using std::vector;
using std::string;
using EVENT::LCCollection;
using EVENT::MCParticle;
using IMPL::MCParticleImpl;


namespace QQbarProcessor
{
  QQbarMCOperator:: QQbarMCOperator (LCCollection* col)
  {
    myCollection = col; //myCollection is LCCollection object
    myNeutrino = NULL;
  }

  vector<MCParticle*> QQbarMCOperator::GetBBbarQuarksPS(){
    //LCCollection* myCollection = evt -> getCollection("MCParticlesSkimmed");
    int number = myCollection->getNumberOfElements();
    vector<MCParticle*> bbbar_ps;

    // find the process simulated (which quark is in the ps)
    int pdg = 0;
    if(number<3) return bbbar_ps;
    std::cout << "" << std::endl;
    //std::cout << "##################################" << std::endl;
    //std::cout << "##      Parton Shower level     ##" << std::endl;
    //std::cout << "##################################" << std::endl;
    //std::cout << "    LCCollection number >= 3" << std::endl;
    //3rd and 4th are original reproduced quark pair comes from e+e- collision
    //1st and 2nd are ISR photon
    MCParticle* quark1 = dynamic_cast<MCParticle*>(myCollection->getElementAt(2));
    MCParticle* quark2 = dynamic_cast<MCParticle*>(myCollection->getElementAt(3));
    pdg = quark1->getPDG();
    //std::cout << "----------------------------------" << std::endl;
    //std::cout << "    2nd MC quark flavor : " << pdg << std::endl;
    //std::cout << "    3rd MC quark flavor : " << quark2->getPDG() << std::endl;
    //std::cout << "----------------------------------" << std::endl;
    std::cout << "" << std::endl;

    // find the quarks and parton shower
    MCParticle* b = NULL;
    MCParticle* bbar = NULL;
    vector<MCParticle*> ps;
    bool bool_bbbar[2];
    bool_bbbar[0]=false; //default is false
    bool_bbbar[1]=false; //default is false

    for (int i=0; i<number; i++) {
      //Act getElementAt() to ith element of myCollection and Extract MCParticle class objects
      MCParticle* particle = dynamic_cast<MCParticle*>(myCollection->getElementAt(i));
      vector<MCParticle*> init_parents = particle->getParents();
      //if(init_parents.size()==0) std::cout << "  [" << i << "]  MC Particle ID : " << particle->getPDG() << " : Origin" << std::endl;
      //else std::cout << "  [" << i << "]  MC Particle ID : " << particle->getPDG() << std::endl;
      //pid=91 : Parton system in cluster fragmentation
      //pid=92 : Parton system in string fragmentation
      //You can check it from https://home.fnal.gov/~mrenna/lutp0613man2/node44.html
      if (particle->getPDG() == 92 || particle->getPDG() == 91) {
        //Obtain the parent(array) of (intermediate) particle
        vector<MCParticle*> parents = particle->getParents();
        for(int j=0; j<parents.size(); j++) {
          //Extract each parent particles as MCParticle class object from array parents
          MCParticle* parent = parents.at(j);
          if(parent->getPDG()==pdg) { //here, pdg=quark1->getPDG() Quark case.
            b=parent; //add quark as b
            bool_bbbar[0]=true;
	        } else if(parent->getPDG()==-pdg) { //Anti-Quark case.
	          bbar=parent; //add anti-quark as bbbar
	          bool_bbbar[1]=true;
	        } else ps.push_back(parent); //glueon and other quarks? add to ps
	      }//parents loop
      }//flagmentation particles if
      if(bool_bbbar[0]==true && bool_bbbar[1]==true) break; //If recover both quarks which same as original quark's flavor, escape from loop
    }//LCCollection loop

    bbbar_ps.push_back(b);
    bbbar_ps.push_back(bbar);

    /*std::cout << "=== Extracted Parton shower ===" << std::endl;
    for(int i=0; i<ps.size(); i++) {
      std::cout << "  [" << i << "] : " << ps[i]->getPDG() << std::endl;
    }*/
    int nps = ps.size();

    //remove all repeated particles in the PS
    vector<MCParticle*>::iterator end = ps.end();
    for (vector<MCParticle*>::iterator it = ps.begin(); it != end; ++it) {
      end = std::remove(it+1, end, *it);
    }
    ps.erase(end, ps.end());
    //if(nps-ps.size()==0) std::cout << "   No removed particle" << std::endl;
    // save the PS particles
    for(int k=0; k< ps.size(); k++) bbbar_ps.push_back(ps.at(k));
  	  
    return bbbar_ps;
  }



  //Added by Seidai in 2020.Sep.16
  vector<MCParticle*> QQbarMCOperator::GetBBbarHadrons() {
    //std::cout << "##################################" << std::endl;
    //std::cout << "##         Hadron level         ##" << std::endl;
    //std::cout << "##################################" << std::endl;

    int number = myCollection -> getNumberOfElements();
    vector<MCParticle*> stable_hadrons;
    if(number<3) return stable_hadrons; //return empty
    int ihadron;// the border of hadronization

    for(int i=0; i<number; i++) {
      MCParticle* particle = dynamic_cast<MCParticle*>(myCollection->getElementAt(i));
      if(particle->getPDG()==91 || particle->getPDG()==92 || particle->getPDG()==93) {
        ihadron = i;
        break;
      } 
    }

    for(int i=ihadron; i<number; i++) {
      MCParticle* particle = dynamic_cast<MCParticle*>(myCollection->getElementAt(i));
      vector<MCParticle*> daughters = particle->getDaughters();
      if(daughters.size()==0) {
        stable_hadrons.push_back(particle);
      }
    }

    /*std::cout << "### stable_hadrons ###" << std::endl;
    for(int i=0; i<stable_hadrons.size(); i++) {
      std::cout << "[" << i << "]  Stable particle: " << stable_hadrons.at(i)->getPDG() << std::endl;
    }*/
    return stable_hadrons;
  }//GetBBbarHadrons()



  ///DO NOT USE THAT ON T-QUARKS!!!
  bool QQbarMCOperator::IsEvent() {
  
    //    std::cout<<"GetPairParticles("<<pdg<<")"<< "\n";
    int number = myCollection->getNumberOfElements();
    MCParticle * p1 = NULL;
    MCParticle * p2 = NULL;

    bool event=true;
    for (int i = 0; i < 2; i++) {
      MCParticle * particle = dynamic_cast<MCParticle*>( myCollection->getElementAt(i) );
      if(particle->getPDG() !=22) event=false;
    }
 
    for (int i = 2; i < 4; i++) { 
      MCParticle * particle = dynamic_cast<MCParticle*>( myCollection->getElementAt(i) );                                                                
      if(fabs(particle->getPDG()) >5) event=false;                                                                                                             
    } 
    return event;
  }

  //DO NOT USE THAT ON T-QUARKS!!!
  vector< MCParticle * > QQbarMCOperator::GetPairParticles(int pdg) {
    pdg = abs(pdg);
    vector< MCParticle * > pair;
    if (pdg < 1) {
      return pair;
    }
    //    std::cout<<"GetPairParticles("<<pdg<<")"<< "\n";
    int number = myCollection->getNumberOfElements();
    MCParticle * b = NULL;
    MCParticle * bbar = NULL;

    bool recorded=false;
    for (int i = 2; i < number; i++) {
      MCParticle * particle = dynamic_cast<MCParticle*>( myCollection->getElementAt(i) );
      if(pdg<20) {
	if (particle->getPDG() == pdg && !b) b = particle;
	if (particle->getPDG() == -pdg  && !bbar) bbar =  particle;
      } else {
	if (particle->getPDG() == pdg && pair.size()<2) pair.push_back(particle);
      }
    }

    if(pdg<20) {
      if (b) pair.push_back(b);
      if (bbar) pair.push_back(bbar);
    }
    
    //    std::cout<<pair.size()<<"\n";
    return pair;
  }
  vector< MCParticle * > QQbarMCOperator::GetTopPairParticles(float & topBangle, float & topcosWb)
  {
    vector< MCParticle * > pair;
    
    // particle declaration
    MCParticle * b = FindParticle(5);
    MCParticle * bbar = FindParticle(-5);
    MCParticle * wplus = FindParticle(24);
    MCParticle * wminus = FindParticle(-24);
    
    // B Hadron
    /*
      MCParticle * B0 = FindParticle(511);
      MCParticle * Bplus = FindParticle(521);
      MCParticle * B0s = FindParticle(531);
      MCParticle * B0c = FindParticle(541);
      MCParticle * BLambda0b = FindParticle(5122);
      MCParticle * BXiminusb = FindParticle(5132); 
      MCParticle * BXi0b = FindParticle(5232);
      MCParticle * BOmegaminusb = FindParticle(5332);
      
      MCParticle * B0bar = FindParticle(-511);
      MCParticle * Bplusbar = FindParticle(-521);
      MCParticle * B0sbar = FindParticle(-531);
      MCParticle * B0cbar = FindParticle(-541);
      MCParticle * BLambda0bbar = FindParticle(-5122);
      MCParticle * BXiminusbbar = FindParticle(-5132); 
      MCParticle * BXi0bbar = FindParticle(-5232);
      MCParticle * BOmegaminusbbar = FindParticle(-5332);
    */
    
    if (!b || !bbar ) 
      {
	return pair;
      }
    if (!wplus || !wminus) 
      {
	vector< MCParticle * > final = GetFinalState();
	std::cout << "Nfinal - bbbar: " << final.size() << "\n";
	if (final.size() < 4) 
	  {
	    std::cout << "CRUNCH\n";
	    return pair; // CRUNCH
	  }
	for (int i = 0; i < final.size(); i++) 
	  {
	    for (int j = 0; j < i; j++) 
	      {
		if (i == j) 
		  {
		    continue;
		  }
		MCParticle * candidate = CombineParticles(final[i],final[j]);
		if (std::abs(candidate->getCharge()) > 0.99 && std::abs(candidate->getCharge()) < 1.01 ) 
		  {
		    if (candidate->getCharge() > 0) 
		      {
			wplus = candidate;
			std::cout << "W+ found: q " << candidate->getCharge() << " m " << candidate->getMass() << "\n";
		      }
		    else 
		      {
			wminus = candidate;
			std::cout << "W- found: q " << candidate->getCharge() << " m " << candidate->getMass() << "\n";
		      }
		  }
	      }
	  }
      }
    myBquarkPair.push_back(b);
    myBquarkPair.push_back(bbar);
    myWPair.push_back(wplus);
    myWPair.push_back(wminus);
    MCParticle * top = CombineParticles(b, wplus);
    topBangle = MathOperator::getAngle(top->getMomentum(), b->getMomentum());
    MCParticle * topbar = CombineParticles(bbar, wminus);
    topcosWb = std::cos( MathOperator::getAngle(wplus->getMomentum(), b->getMomentum()));
    pair.push_back(top);
    pair.push_back(topbar);
    return pair;
  }
  vector< MCParticle * > QQbarMCOperator::GetWPair()
  {
    return myWPair;
  }
  vector< MCParticle * > QQbarMCOperator::GetBquarkPair()
  {
    return myBquarkPair;
  }
  MCParticle * QQbarMCOperator::CombineParticles(EVENT::MCParticle * b, EVENT::MCParticle * w)
  {
    MCParticleImpl * result = new MCParticleImpl();
    double energy = b->getEnergy() + w->getEnergy();
    double momentum[3];
    for (int i = 0; i < 3; i++) 
      {
	momentum[i] = b->getMomentum()[i] + w->getMomentum()[i];
      }
    double charge = b->getCharge() + w->getCharge();
    double mass = std::sqrt(energy * energy - momentum[0] * momentum[0] - momentum[1]*momentum[1] - momentum[2] * momentum[2] );
    int pdg = charge / std::abs(charge) * 6;
    //result->setEnergy(energy);
    result->setMass(mass);
    result->setMomentum(momentum);
    result->setCharge(charge);
    result->setPDG(pdg);
    return result;
  }
  vector <MCParticle *> QQbarMCOperator::GetFinalStateBkg()
  {
    vector <MCParticle *> result;
    /*for (unsigned int i = 0; i < 4; i++) 
      {
      MCParticle * particle = dynamic_cast<MCParticle*>( myCollection->getElementAt(i+2) );
      result.push_back(particle);
      }*/
    result.push_back(dynamic_cast<MCParticle*>( myCollection->getElementAt( 2)));
    result.push_back(dynamic_cast<MCParticle*>( myCollection->getElementAt( 3)));
    
    MCParticle * higgs = FindParticle(25);
    if (higgs->getDaughters().size() == 2) 
      {
	result.push_back(higgs->getDaughters()[0]);
	result.push_back(higgs->getDaughters()[1]);
      }
    if (higgs->getDaughters().size() == 1) 
      {
	if (higgs->getDaughters()[0]->getDaughters().size() == 2) 
	  {
	    result.push_back(higgs->getDaughters()[0]->getDaughters()[0]);
	    result.push_back(higgs->getDaughters()[0]->getDaughters()[1]);
	    
	  }
      }
    return result;
  }
  vector <MCParticle *> QQbarMCOperator::GetFinalState()
  {
    vector <MCParticle *> result;
    MCParticle * particle = dynamic_cast<MCParticle*>( myCollection->getElementAt(2) );
    if (abs(particle->getPDG()) == 11) 
      {
	const vector< MCParticle * > daughters = particle->getDaughters();
	for (unsigned int i = 0; i < daughters.size(); i++) 
	  {
	    if (abs(daughters[i]->getPDG()) != 5) 
	      {
		result.push_back(daughters[i]);
	      }
	    if (abs(daughters[i]->getPDG()) == 12 ||
		abs(daughters[i]->getPDG()) == 14 ||	
		abs(daughters[i]->getPDG()) == 16) 
	      {
		myNeutrino = daughters[i];
	      }
	  }
      }
    else 
      {
	std::cout << "ERROR: Particle has " << particle->getPDG() << ", e- not found!\n";
      }
    return result;
  }
  MCParticle * QQbarMCOperator::FindParticle(int pdg)
  {
    int number = myCollection->getNumberOfElements();
    MCParticle * result = NULL;
    for (int i = 0; i < number; i++) 
      {
	MCParticle * particle = dynamic_cast<MCParticle*>( myCollection->getElementAt(i) );
	if (particle->getPDG() == pdg) 
	  {
	    result = particle;
	    break;
	  }
      }
    if (!result) 
      {
	std::cout << "Particle " << pdg << " not found!\n";
      }
    return result;
  }
  MCParticle * QQbarMCOperator::GetNeutrino()
  {
    return myNeutrino;
  }
  MCParticle * QQbarMCOperator::GetTauLepton()
  {
    MCParticle * tau = FindParticle(15);
    MCParticle * taubar = FindParticle(-15);
    MCParticle * particle = (tau)? tau : taubar;
    if (!particle) 
      {
	return NULL;
      }
    MCParticle * result = NULL;
    if (particle->getDaughters().size() == 1 && abs(particle->getDaughters()[0]->getPDG()) == 15) 
      {
	particle = particle->getDaughters()[0];
      }
    if (particle->getDaughters().size() == 3) 
      {
	for (unsigned int i = 0; i < particle->getDaughters().size(); i++) 
	  {
	    if (abs(particle->getDaughters()[i]->getPDG()) == 13) 
	      {
		std::cout << "Particle tau found!\n";
		result = particle->getDaughters()[i];
		break;
	      }
	  }
      }
    return result;
  }
}
