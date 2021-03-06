// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIhomedIilcdIsedidIMarlindIBBG_AnalysisdILCFIPlusdIbuilddIrootdictdIdict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/EventStore.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/LCIOStorer.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TreeStorer.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/JetFinder.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/process.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/FlavorTag.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/MakeNtuple.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TrainMVA.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/ReadMVA.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/testproc.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TrackNtuple.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/VertexMassRecovery.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/VertexNtuple.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_lcfipluscLcLEventStoreObserver(void *p = 0);
   static void *newArray_lcfipluscLcLEventStoreObserver(Long_t size, void *p);
   static void delete_lcfipluscLcLEventStoreObserver(void *p);
   static void deleteArray_lcfipluscLcLEventStoreObserver(void *p);
   static void destruct_lcfipluscLcLEventStoreObserver(void *p);
   static void streamer_lcfipluscLcLEventStoreObserver(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::EventStoreObserver*)
   {
      ::lcfiplus::EventStoreObserver *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::EventStoreObserver >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::EventStoreObserver", ::lcfiplus::EventStoreObserver::Class_Version(), "include/EventStore.h", 17,
                  typeid(::lcfiplus::EventStoreObserver), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::EventStoreObserver::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::EventStoreObserver) );
      instance.SetNew(&new_lcfipluscLcLEventStoreObserver);
      instance.SetNewArray(&newArray_lcfipluscLcLEventStoreObserver);
      instance.SetDelete(&delete_lcfipluscLcLEventStoreObserver);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLEventStoreObserver);
      instance.SetDestructor(&destruct_lcfipluscLcLEventStoreObserver);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLEventStoreObserver);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::EventStoreObserver*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::EventStoreObserver*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::EventStoreObserver*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *lcfipluscLcLEventStore_Dictionary();
   static void lcfipluscLcLEventStore_TClassManip(TClass*);
   static void delete_lcfipluscLcLEventStore(void *p);
   static void deleteArray_lcfipluscLcLEventStore(void *p);
   static void destruct_lcfipluscLcLEventStore(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::EventStore*)
   {
      ::lcfiplus::EventStore *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::lcfiplus::EventStore));
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::EventStore", "include/EventStore.h", 42,
                  typeid(::lcfiplus::EventStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &lcfipluscLcLEventStore_Dictionary, isa_proxy, 0,
                  sizeof(::lcfiplus::EventStore) );
      instance.SetDelete(&delete_lcfipluscLcLEventStore);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLEventStore);
      instance.SetDestructor(&destruct_lcfipluscLcLEventStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::EventStore*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::EventStore*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::EventStore*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *lcfipluscLcLEventStore_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::EventStore*)0x0)->GetClass();
      lcfipluscLcLEventStore_TClassManip(theClass);
   return theClass;
   }

   static void lcfipluscLcLEventStore_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_lcfipluscLcLAlgorithm(void *p);
   static void deleteArray_lcfipluscLcLAlgorithm(void *p);
   static void destruct_lcfipluscLcLAlgorithm(void *p);
   static void streamer_lcfipluscLcLAlgorithm(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::Algorithm*)
   {
      ::lcfiplus::Algorithm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::Algorithm >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::Algorithm", ::lcfiplus::Algorithm::Class_Version(), "include/lcfiplus.h", 274,
                  typeid(::lcfiplus::Algorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::Algorithm::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::Algorithm) );
      instance.SetDelete(&delete_lcfipluscLcLAlgorithm);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLAlgorithm);
      instance.SetDestructor(&destruct_lcfipluscLcLAlgorithm);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::Algorithm*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::Algorithm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::Algorithm*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLTrack(void *p = 0);
   static void *newArray_lcfipluscLcLTrack(Long_t size, void *p);
   static void delete_lcfipluscLcLTrack(void *p);
   static void deleteArray_lcfipluscLcLTrack(void *p);
   static void destruct_lcfipluscLcLTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::Track*)
   {
      ::lcfiplus::Track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::Track >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::Track", ::lcfiplus::Track::Class_Version(), "include/lcfiplus.h", 389,
                  typeid(::lcfiplus::Track), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::Track::Dictionary, isa_proxy, 4,
                  sizeof(::lcfiplus::Track) );
      instance.SetNew(&new_lcfipluscLcLTrack);
      instance.SetNewArray(&newArray_lcfipluscLcLTrack);
      instance.SetDelete(&delete_lcfipluscLcLTrack);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLTrack);
      instance.SetDestructor(&destruct_lcfipluscLcLTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::Track*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::Track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::Track*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLNeutral(void *p = 0);
   static void *newArray_lcfipluscLcLNeutral(Long_t size, void *p);
   static void delete_lcfipluscLcLNeutral(void *p);
   static void deleteArray_lcfipluscLcLNeutral(void *p);
   static void destruct_lcfipluscLcLNeutral(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::Neutral*)
   {
      ::lcfiplus::Neutral *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::Neutral >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::Neutral", ::lcfiplus::Neutral::Class_Version(), "include/lcfiplus.h", 594,
                  typeid(::lcfiplus::Neutral), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::Neutral::Dictionary, isa_proxy, 4,
                  sizeof(::lcfiplus::Neutral) );
      instance.SetNew(&new_lcfipluscLcLNeutral);
      instance.SetNewArray(&newArray_lcfipluscLcLNeutral);
      instance.SetDelete(&delete_lcfipluscLcLNeutral);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLNeutral);
      instance.SetDestructor(&destruct_lcfipluscLcLNeutral);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::Neutral*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::Neutral*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::Neutral*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLMCParticle(void *p = 0);
   static void *newArray_lcfipluscLcLMCParticle(Long_t size, void *p);
   static void delete_lcfipluscLcLMCParticle(void *p);
   static void deleteArray_lcfipluscLcLMCParticle(void *p);
   static void destruct_lcfipluscLcLMCParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::MCParticle*)
   {
      ::lcfiplus::MCParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::MCParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::MCParticle", ::lcfiplus::MCParticle::Class_Version(), "include/lcfiplus.h", 651,
                  typeid(::lcfiplus::MCParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::MCParticle::Dictionary, isa_proxy, 4,
                  sizeof(::lcfiplus::MCParticle) );
      instance.SetNew(&new_lcfipluscLcLMCParticle);
      instance.SetNewArray(&newArray_lcfipluscLcLMCParticle);
      instance.SetDelete(&delete_lcfipluscLcLMCParticle);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLMCParticle);
      instance.SetDestructor(&destruct_lcfipluscLcLMCParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::MCParticle*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::MCParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::MCParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLMCColorSinglet(void *p = 0);
   static void *newArray_lcfipluscLcLMCColorSinglet(Long_t size, void *p);
   static void delete_lcfipluscLcLMCColorSinglet(void *p);
   static void deleteArray_lcfipluscLcLMCColorSinglet(void *p);
   static void destruct_lcfipluscLcLMCColorSinglet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::MCColorSinglet*)
   {
      ::lcfiplus::MCColorSinglet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::MCColorSinglet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::MCColorSinglet", ::lcfiplus::MCColorSinglet::Class_Version(), "include/lcfiplus.h", 759,
                  typeid(::lcfiplus::MCColorSinglet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::MCColorSinglet::Dictionary, isa_proxy, 4,
                  sizeof(::lcfiplus::MCColorSinglet) );
      instance.SetNew(&new_lcfipluscLcLMCColorSinglet);
      instance.SetNewArray(&newArray_lcfipluscLcLMCColorSinglet);
      instance.SetDelete(&delete_lcfipluscLcLMCColorSinglet);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLMCColorSinglet);
      instance.SetDestructor(&destruct_lcfipluscLcLMCColorSinglet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::MCColorSinglet*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::MCColorSinglet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::MCColorSinglet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLVertex(void *p = 0);
   static void *newArray_lcfipluscLcLVertex(Long_t size, void *p);
   static void delete_lcfipluscLcLVertex(void *p);
   static void deleteArray_lcfipluscLcLVertex(void *p);
   static void destruct_lcfipluscLcLVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::Vertex*)
   {
      ::lcfiplus::Vertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::Vertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::Vertex", ::lcfiplus::Vertex::Class_Version(), "include/lcfiplus.h", 776,
                  typeid(::lcfiplus::Vertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::Vertex::Dictionary, isa_proxy, 4,
                  sizeof(::lcfiplus::Vertex) );
      instance.SetNew(&new_lcfipluscLcLVertex);
      instance.SetNewArray(&newArray_lcfipluscLcLVertex);
      instance.SetDelete(&delete_lcfipluscLcLVertex);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLVertex);
      instance.SetDestructor(&destruct_lcfipluscLcLVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::Vertex*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::Vertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::Vertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLMCVertex(void *p = 0);
   static void *newArray_lcfipluscLcLMCVertex(Long_t size, void *p);
   static void delete_lcfipluscLcLMCVertex(void *p);
   static void deleteArray_lcfipluscLcLMCVertex(void *p);
   static void destruct_lcfipluscLcLMCVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::MCVertex*)
   {
      ::lcfiplus::MCVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::MCVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::MCVertex", ::lcfiplus::MCVertex::Class_Version(), "include/lcfiplus.h", 912,
                  typeid(::lcfiplus::MCVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::MCVertex::Dictionary, isa_proxy, 4,
                  sizeof(::lcfiplus::MCVertex) );
      instance.SetNew(&new_lcfipluscLcLMCVertex);
      instance.SetNewArray(&newArray_lcfipluscLcLMCVertex);
      instance.SetDelete(&delete_lcfipluscLcLMCVertex);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLMCVertex);
      instance.SetDestructor(&destruct_lcfipluscLcLMCVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::MCVertex*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::MCVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::MCVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLJet(void *p = 0);
   static void *newArray_lcfipluscLcLJet(Long_t size, void *p);
   static void delete_lcfipluscLcLJet(void *p);
   static void deleteArray_lcfipluscLcLJet(void *p);
   static void destruct_lcfipluscLcLJet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::Jet*)
   {
      ::lcfiplus::Jet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::Jet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::Jet", ::lcfiplus::Jet::Class_Version(), "include/lcfiplus.h", 985,
                  typeid(::lcfiplus::Jet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::Jet::Dictionary, isa_proxy, 4,
                  sizeof(::lcfiplus::Jet) );
      instance.SetNew(&new_lcfipluscLcLJet);
      instance.SetNewArray(&newArray_lcfipluscLcLJet);
      instance.SetDelete(&delete_lcfipluscLcLJet);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLJet);
      instance.SetDestructor(&destruct_lcfipluscLcLJet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::Jet*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::Jet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::Jet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLLCIOStorer(void *p = 0);
   static void *newArray_lcfipluscLcLLCIOStorer(Long_t size, void *p);
   static void delete_lcfipluscLcLLCIOStorer(void *p);
   static void deleteArray_lcfipluscLcLLCIOStorer(void *p);
   static void destruct_lcfipluscLcLLCIOStorer(void *p);
   static void streamer_lcfipluscLcLLCIOStorer(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::LCIOStorer*)
   {
      ::lcfiplus::LCIOStorer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::LCIOStorer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::LCIOStorer", ::lcfiplus::LCIOStorer::Class_Version(), "include/LCIOStorer.h", 22,
                  typeid(::lcfiplus::LCIOStorer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::LCIOStorer::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::LCIOStorer) );
      instance.SetNew(&new_lcfipluscLcLLCIOStorer);
      instance.SetNewArray(&newArray_lcfipluscLcLLCIOStorer);
      instance.SetDelete(&delete_lcfipluscLcLLCIOStorer);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLLCIOStorer);
      instance.SetDestructor(&destruct_lcfipluscLcLLCIOStorer);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLLCIOStorer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::LCIOStorer*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::LCIOStorer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::LCIOStorer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *lcfipluscLcLTreeStorer_Dictionary();
   static void lcfipluscLcLTreeStorer_TClassManip(TClass*);
   static void delete_lcfipluscLcLTreeStorer(void *p);
   static void deleteArray_lcfipluscLcLTreeStorer(void *p);
   static void destruct_lcfipluscLcLTreeStorer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::TreeStorer*)
   {
      ::lcfiplus::TreeStorer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::lcfiplus::TreeStorer));
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::TreeStorer", "include/TreeStorer.h", 12,
                  typeid(::lcfiplus::TreeStorer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &lcfipluscLcLTreeStorer_Dictionary, isa_proxy, 0,
                  sizeof(::lcfiplus::TreeStorer) );
      instance.SetDelete(&delete_lcfipluscLcLTreeStorer);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLTreeStorer);
      instance.SetDestructor(&destruct_lcfipluscLcLTreeStorer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::TreeStorer*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::TreeStorer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::TreeStorer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *lcfipluscLcLTreeStorer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TreeStorer*)0x0)->GetClass();
      lcfipluscLcLTreeStorer_TClassManip(theClass);
   return theClass;
   }

   static void lcfipluscLcLTreeStorer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLPrimaryVertexFinder(void *p = 0);
   static void *newArray_lcfipluscLcLPrimaryVertexFinder(Long_t size, void *p);
   static void delete_lcfipluscLcLPrimaryVertexFinder(void *p);
   static void deleteArray_lcfipluscLcLPrimaryVertexFinder(void *p);
   static void destruct_lcfipluscLcLPrimaryVertexFinder(void *p);
   static void streamer_lcfipluscLcLPrimaryVertexFinder(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::PrimaryVertexFinder*)
   {
      ::lcfiplus::PrimaryVertexFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::PrimaryVertexFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::PrimaryVertexFinder", ::lcfiplus::PrimaryVertexFinder::Class_Version(), "include/process.h", 14,
                  typeid(::lcfiplus::PrimaryVertexFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::PrimaryVertexFinder::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::PrimaryVertexFinder) );
      instance.SetNew(&new_lcfipluscLcLPrimaryVertexFinder);
      instance.SetNewArray(&newArray_lcfipluscLcLPrimaryVertexFinder);
      instance.SetDelete(&delete_lcfipluscLcLPrimaryVertexFinder);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLPrimaryVertexFinder);
      instance.SetDestructor(&destruct_lcfipluscLcLPrimaryVertexFinder);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLPrimaryVertexFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::PrimaryVertexFinder*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::PrimaryVertexFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::PrimaryVertexFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLBuildUpVertex(void *p = 0);
   static void *newArray_lcfipluscLcLBuildUpVertex(Long_t size, void *p);
   static void delete_lcfipluscLcLBuildUpVertex(void *p);
   static void deleteArray_lcfipluscLcLBuildUpVertex(void *p);
   static void destruct_lcfipluscLcLBuildUpVertex(void *p);
   static void streamer_lcfipluscLcLBuildUpVertex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::BuildUpVertex*)
   {
      ::lcfiplus::BuildUpVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::BuildUpVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::BuildUpVertex", ::lcfiplus::BuildUpVertex::Class_Version(), "include/process.h", 37,
                  typeid(::lcfiplus::BuildUpVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::BuildUpVertex::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::BuildUpVertex) );
      instance.SetNew(&new_lcfipluscLcLBuildUpVertex);
      instance.SetNewArray(&newArray_lcfipluscLcLBuildUpVertex);
      instance.SetDelete(&delete_lcfipluscLcLBuildUpVertex);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLBuildUpVertex);
      instance.SetDestructor(&destruct_lcfipluscLcLBuildUpVertex);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLBuildUpVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::BuildUpVertex*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::BuildUpVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::BuildUpVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLJetClustering(void *p = 0);
   static void *newArray_lcfipluscLcLJetClustering(Long_t size, void *p);
   static void delete_lcfipluscLcLJetClustering(void *p);
   static void deleteArray_lcfipluscLcLJetClustering(void *p);
   static void destruct_lcfipluscLcLJetClustering(void *p);
   static void streamer_lcfipluscLcLJetClustering(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::JetClustering*)
   {
      ::lcfiplus::JetClustering *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::JetClustering >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::JetClustering", ::lcfiplus::JetClustering::Class_Version(), "include/process.h", 77,
                  typeid(::lcfiplus::JetClustering), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::JetClustering::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::JetClustering) );
      instance.SetNew(&new_lcfipluscLcLJetClustering);
      instance.SetNewArray(&newArray_lcfipluscLcLJetClustering);
      instance.SetDelete(&delete_lcfipluscLcLJetClustering);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLJetClustering);
      instance.SetDestructor(&destruct_lcfipluscLcLJetClustering);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLJetClustering);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::JetClustering*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::JetClustering*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::JetClustering*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLJetVertexRefiner(void *p = 0);
   static void *newArray_lcfipluscLcLJetVertexRefiner(Long_t size, void *p);
   static void delete_lcfipluscLcLJetVertexRefiner(void *p);
   static void deleteArray_lcfipluscLcLJetVertexRefiner(void *p);
   static void destruct_lcfipluscLcLJetVertexRefiner(void *p);
   static void streamer_lcfipluscLcLJetVertexRefiner(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::JetVertexRefiner*)
   {
      ::lcfiplus::JetVertexRefiner *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::JetVertexRefiner >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::JetVertexRefiner", ::lcfiplus::JetVertexRefiner::Class_Version(), "include/process.h", 121,
                  typeid(::lcfiplus::JetVertexRefiner), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::JetVertexRefiner::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::JetVertexRefiner) );
      instance.SetNew(&new_lcfipluscLcLJetVertexRefiner);
      instance.SetNewArray(&newArray_lcfipluscLcLJetVertexRefiner);
      instance.SetDelete(&delete_lcfipluscLcLJetVertexRefiner);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLJetVertexRefiner);
      instance.SetDestructor(&destruct_lcfipluscLcLJetVertexRefiner);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLJetVertexRefiner);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::JetVertexRefiner*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::JetVertexRefiner*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::JetVertexRefiner*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLFlavorTag(void *p = 0);
   static void *newArray_lcfipluscLcLFlavorTag(Long_t size, void *p);
   static void delete_lcfipluscLcLFlavorTag(void *p);
   static void deleteArray_lcfipluscLcLFlavorTag(void *p);
   static void destruct_lcfipluscLcLFlavorTag(void *p);
   static void streamer_lcfipluscLcLFlavorTag(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::FlavorTag*)
   {
      ::lcfiplus::FlavorTag *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::FlavorTag >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::FlavorTag", ::lcfiplus::FlavorTag::Class_Version(), "include/FlavorTag.h", 27,
                  typeid(::lcfiplus::FlavorTag), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::FlavorTag::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::FlavorTag) );
      instance.SetNew(&new_lcfipluscLcLFlavorTag);
      instance.SetNewArray(&newArray_lcfipluscLcLFlavorTag);
      instance.SetDelete(&delete_lcfipluscLcLFlavorTag);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLFlavorTag);
      instance.SetDestructor(&destruct_lcfipluscLcLFlavorTag);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLFlavorTag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::FlavorTag*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::FlavorTag*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::FlavorTag*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLMakeNtuple(void *p = 0);
   static void *newArray_lcfipluscLcLMakeNtuple(Long_t size, void *p);
   static void delete_lcfipluscLcLMakeNtuple(void *p);
   static void deleteArray_lcfipluscLcLMakeNtuple(void *p);
   static void destruct_lcfipluscLcLMakeNtuple(void *p);
   static void streamer_lcfipluscLcLMakeNtuple(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::MakeNtuple*)
   {
      ::lcfiplus::MakeNtuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::MakeNtuple >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::MakeNtuple", ::lcfiplus::MakeNtuple::Class_Version(), "include/MakeNtuple.h", 18,
                  typeid(::lcfiplus::MakeNtuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::MakeNtuple::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::MakeNtuple) );
      instance.SetNew(&new_lcfipluscLcLMakeNtuple);
      instance.SetNewArray(&newArray_lcfipluscLcLMakeNtuple);
      instance.SetDelete(&delete_lcfipluscLcLMakeNtuple);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLMakeNtuple);
      instance.SetDestructor(&destruct_lcfipluscLcLMakeNtuple);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLMakeNtuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::MakeNtuple*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::MakeNtuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::MakeNtuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLTrainMVA(void *p = 0);
   static void *newArray_lcfipluscLcLTrainMVA(Long_t size, void *p);
   static void delete_lcfipluscLcLTrainMVA(void *p);
   static void deleteArray_lcfipluscLcLTrainMVA(void *p);
   static void destruct_lcfipluscLcLTrainMVA(void *p);
   static void streamer_lcfipluscLcLTrainMVA(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::TrainMVA*)
   {
      ::lcfiplus::TrainMVA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::TrainMVA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::TrainMVA", ::lcfiplus::TrainMVA::Class_Version(), "include/TrainMVA.h", 21,
                  typeid(::lcfiplus::TrainMVA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::TrainMVA::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::TrainMVA) );
      instance.SetNew(&new_lcfipluscLcLTrainMVA);
      instance.SetNewArray(&newArray_lcfipluscLcLTrainMVA);
      instance.SetDelete(&delete_lcfipluscLcLTrainMVA);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLTrainMVA);
      instance.SetDestructor(&destruct_lcfipluscLcLTrainMVA);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLTrainMVA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::TrainMVA*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::TrainMVA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::TrainMVA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLReadMVA(void *p = 0);
   static void *newArray_lcfipluscLcLReadMVA(Long_t size, void *p);
   static void delete_lcfipluscLcLReadMVA(void *p);
   static void deleteArray_lcfipluscLcLReadMVA(void *p);
   static void destruct_lcfipluscLcLReadMVA(void *p);
   static void streamer_lcfipluscLcLReadMVA(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::ReadMVA*)
   {
      ::lcfiplus::ReadMVA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::ReadMVA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::ReadMVA", ::lcfiplus::ReadMVA::Class_Version(), "include/ReadMVA.h", 22,
                  typeid(::lcfiplus::ReadMVA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::ReadMVA::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::ReadMVA) );
      instance.SetNew(&new_lcfipluscLcLReadMVA);
      instance.SetNewArray(&newArray_lcfipluscLcLReadMVA);
      instance.SetDelete(&delete_lcfipluscLcLReadMVA);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLReadMVA);
      instance.SetDestructor(&destruct_lcfipluscLcLReadMVA);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLReadMVA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::ReadMVA*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::ReadMVA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::ReadMVA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLZHHAlgo(void *p = 0);
   static void *newArray_lcfipluscLcLZHHAlgo(Long_t size, void *p);
   static void delete_lcfipluscLcLZHHAlgo(void *p);
   static void deleteArray_lcfipluscLcLZHHAlgo(void *p);
   static void destruct_lcfipluscLcLZHHAlgo(void *p);
   static void streamer_lcfipluscLcLZHHAlgo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::ZHHAlgo*)
   {
      ::lcfiplus::ZHHAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::ZHHAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::ZHHAlgo", ::lcfiplus::ZHHAlgo::Class_Version(), "include/testproc.h", 13,
                  typeid(::lcfiplus::ZHHAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::ZHHAlgo::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::ZHHAlgo) );
      instance.SetNew(&new_lcfipluscLcLZHHAlgo);
      instance.SetNewArray(&newArray_lcfipluscLcLZHHAlgo);
      instance.SetDelete(&delete_lcfipluscLcLZHHAlgo);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLZHHAlgo);
      instance.SetDestructor(&destruct_lcfipluscLcLZHHAlgo);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLZHHAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::ZHHAlgo*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::ZHHAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::ZHHAlgo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLTestAlgo(void *p = 0);
   static void *newArray_lcfipluscLcLTestAlgo(Long_t size, void *p);
   static void delete_lcfipluscLcLTestAlgo(void *p);
   static void deleteArray_lcfipluscLcLTestAlgo(void *p);
   static void destruct_lcfipluscLcLTestAlgo(void *p);
   static void streamer_lcfipluscLcLTestAlgo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::TestAlgo*)
   {
      ::lcfiplus::TestAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::TestAlgo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::TestAlgo", ::lcfiplus::TestAlgo::Class_Version(), "include/testproc.h", 194,
                  typeid(::lcfiplus::TestAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::TestAlgo::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::TestAlgo) );
      instance.SetNew(&new_lcfipluscLcLTestAlgo);
      instance.SetNewArray(&newArray_lcfipluscLcLTestAlgo);
      instance.SetDelete(&delete_lcfipluscLcLTestAlgo);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLTestAlgo);
      instance.SetDestructor(&destruct_lcfipluscLcLTestAlgo);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLTestAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::TestAlgo*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::TestAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::TestAlgo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLVertexAnalysis(void *p = 0);
   static void *newArray_lcfipluscLcLVertexAnalysis(Long_t size, void *p);
   static void delete_lcfipluscLcLVertexAnalysis(void *p);
   static void deleteArray_lcfipluscLcLVertexAnalysis(void *p);
   static void destruct_lcfipluscLcLVertexAnalysis(void *p);
   static void streamer_lcfipluscLcLVertexAnalysis(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::VertexAnalysis*)
   {
      ::lcfiplus::VertexAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::VertexAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::VertexAnalysis", ::lcfiplus::VertexAnalysis::Class_Version(), "include/testproc.h", 234,
                  typeid(::lcfiplus::VertexAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::VertexAnalysis::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::VertexAnalysis) );
      instance.SetNew(&new_lcfipluscLcLVertexAnalysis);
      instance.SetNewArray(&newArray_lcfipluscLcLVertexAnalysis);
      instance.SetDelete(&delete_lcfipluscLcLVertexAnalysis);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLVertexAnalysis);
      instance.SetDestructor(&destruct_lcfipluscLcLVertexAnalysis);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLVertexAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::VertexAnalysis*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::VertexAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::VertexAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLFlavtagReader(void *p = 0);
   static void *newArray_lcfipluscLcLFlavtagReader(Long_t size, void *p);
   static void delete_lcfipluscLcLFlavtagReader(void *p);
   static void deleteArray_lcfipluscLcLFlavtagReader(void *p);
   static void destruct_lcfipluscLcLFlavtagReader(void *p);
   static void streamer_lcfipluscLcLFlavtagReader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::FlavtagReader*)
   {
      ::lcfiplus::FlavtagReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::FlavtagReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::FlavtagReader", ::lcfiplus::FlavtagReader::Class_Version(), "include/testproc.h", 255,
                  typeid(::lcfiplus::FlavtagReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::FlavtagReader::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::FlavtagReader) );
      instance.SetNew(&new_lcfipluscLcLFlavtagReader);
      instance.SetNewArray(&newArray_lcfipluscLcLFlavtagReader);
      instance.SetDelete(&delete_lcfipluscLcLFlavtagReader);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLFlavtagReader);
      instance.SetDestructor(&destruct_lcfipluscLcLFlavtagReader);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLFlavtagReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::FlavtagReader*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::FlavtagReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::FlavtagReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLTestAlgoV0(void *p = 0);
   static void *newArray_lcfipluscLcLTestAlgoV0(Long_t size, void *p);
   static void delete_lcfipluscLcLTestAlgoV0(void *p);
   static void deleteArray_lcfipluscLcLTestAlgoV0(void *p);
   static void destruct_lcfipluscLcLTestAlgoV0(void *p);
   static void streamer_lcfipluscLcLTestAlgoV0(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::TestAlgoV0*)
   {
      ::lcfiplus::TestAlgoV0 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::TestAlgoV0 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::TestAlgoV0", ::lcfiplus::TestAlgoV0::Class_Version(), "include/testproc.h", 296,
                  typeid(::lcfiplus::TestAlgoV0), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::TestAlgoV0::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::TestAlgoV0) );
      instance.SetNew(&new_lcfipluscLcLTestAlgoV0);
      instance.SetNewArray(&newArray_lcfipluscLcLTestAlgoV0);
      instance.SetDelete(&delete_lcfipluscLcLTestAlgoV0);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLTestAlgoV0);
      instance.SetDestructor(&destruct_lcfipluscLcLTestAlgoV0);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLTestAlgoV0);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::TestAlgoV0*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::TestAlgoV0*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::TestAlgoV0*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLTrackNtuple(void *p = 0);
   static void *newArray_lcfipluscLcLTrackNtuple(Long_t size, void *p);
   static void delete_lcfipluscLcLTrackNtuple(void *p);
   static void deleteArray_lcfipluscLcLTrackNtuple(void *p);
   static void destruct_lcfipluscLcLTrackNtuple(void *p);
   static void streamer_lcfipluscLcLTrackNtuple(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::TrackNtuple*)
   {
      ::lcfiplus::TrackNtuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::TrackNtuple >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::TrackNtuple", ::lcfiplus::TrackNtuple::Class_Version(), "include/TrackNtuple.h", 22,
                  typeid(::lcfiplus::TrackNtuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::TrackNtuple::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::TrackNtuple) );
      instance.SetNew(&new_lcfipluscLcLTrackNtuple);
      instance.SetNewArray(&newArray_lcfipluscLcLTrackNtuple);
      instance.SetDelete(&delete_lcfipluscLcLTrackNtuple);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLTrackNtuple);
      instance.SetDestructor(&destruct_lcfipluscLcLTrackNtuple);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLTrackNtuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::TrackNtuple*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::TrackNtuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::TrackNtuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLVertexMassRecovery(void *p = 0);
   static void *newArray_lcfipluscLcLVertexMassRecovery(Long_t size, void *p);
   static void delete_lcfipluscLcLVertexMassRecovery(void *p);
   static void deleteArray_lcfipluscLcLVertexMassRecovery(void *p);
   static void destruct_lcfipluscLcLVertexMassRecovery(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::VertexMassRecovery*)
   {
      ::lcfiplus::VertexMassRecovery *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::VertexMassRecovery >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::VertexMassRecovery", ::lcfiplus::VertexMassRecovery::Class_Version(), "include/VertexMassRecovery.h", 11,
                  typeid(::lcfiplus::VertexMassRecovery), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::VertexMassRecovery::Dictionary, isa_proxy, 4,
                  sizeof(::lcfiplus::VertexMassRecovery) );
      instance.SetNew(&new_lcfipluscLcLVertexMassRecovery);
      instance.SetNewArray(&newArray_lcfipluscLcLVertexMassRecovery);
      instance.SetDelete(&delete_lcfipluscLcLVertexMassRecovery);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLVertexMassRecovery);
      instance.SetDestructor(&destruct_lcfipluscLcLVertexMassRecovery);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::VertexMassRecovery*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::VertexMassRecovery*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::VertexMassRecovery*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_lcfipluscLcLVertexNtuple(void *p = 0);
   static void *newArray_lcfipluscLcLVertexNtuple(Long_t size, void *p);
   static void delete_lcfipluscLcLVertexNtuple(void *p);
   static void deleteArray_lcfipluscLcLVertexNtuple(void *p);
   static void destruct_lcfipluscLcLVertexNtuple(void *p);
   static void streamer_lcfipluscLcLVertexNtuple(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::lcfiplus::VertexNtuple*)
   {
      ::lcfiplus::VertexNtuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::lcfiplus::VertexNtuple >(0);
      static ::ROOT::TGenericClassInfo 
         instance("lcfiplus::VertexNtuple", ::lcfiplus::VertexNtuple::Class_Version(), "include/VertexNtuple.h", 20,
                  typeid(::lcfiplus::VertexNtuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::lcfiplus::VertexNtuple::Dictionary, isa_proxy, 16,
                  sizeof(::lcfiplus::VertexNtuple) );
      instance.SetNew(&new_lcfipluscLcLVertexNtuple);
      instance.SetNewArray(&newArray_lcfipluscLcLVertexNtuple);
      instance.SetDelete(&delete_lcfipluscLcLVertexNtuple);
      instance.SetDeleteArray(&deleteArray_lcfipluscLcLVertexNtuple);
      instance.SetDestructor(&destruct_lcfipluscLcLVertexNtuple);
      instance.SetStreamerFunc(&streamer_lcfipluscLcLVertexNtuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::lcfiplus::VertexNtuple*)
   {
      return GenerateInitInstanceLocal((::lcfiplus::VertexNtuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::lcfiplus::VertexNtuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr EventStoreObserver::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EventStoreObserver::Class_Name()
{
   return "lcfiplus::EventStoreObserver";
}

//______________________________________________________________________________
const char *EventStoreObserver::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::EventStoreObserver*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EventStoreObserver::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::EventStoreObserver*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventStoreObserver::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::EventStoreObserver*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventStoreObserver::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::EventStoreObserver*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr Algorithm::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Algorithm::Class_Name()
{
   return "lcfiplus::Algorithm";
}

//______________________________________________________________________________
const char *Algorithm::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Algorithm*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Algorithm::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Algorithm*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Algorithm::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Algorithm*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Algorithm::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Algorithm*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr Track::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Track::Class_Name()
{
   return "lcfiplus::Track";
}

//______________________________________________________________________________
const char *Track::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Track*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Track::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Track*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Track::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Track*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Track::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Track*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr Neutral::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Neutral::Class_Name()
{
   return "lcfiplus::Neutral";
}

//______________________________________________________________________________
const char *Neutral::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Neutral*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Neutral::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Neutral*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Neutral::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Neutral*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Neutral::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Neutral*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr MCParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCParticle::Class_Name()
{
   return "lcfiplus::MCParticle";
}

//______________________________________________________________________________
const char *MCParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr MCColorSinglet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCColorSinglet::Class_Name()
{
   return "lcfiplus::MCColorSinglet";
}

//______________________________________________________________________________
const char *MCColorSinglet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCColorSinglet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCColorSinglet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCColorSinglet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCColorSinglet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCColorSinglet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCColorSinglet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCColorSinglet*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr Vertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Vertex::Class_Name()
{
   return "lcfiplus::Vertex";
}

//______________________________________________________________________________
const char *Vertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Vertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Vertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Vertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Vertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Vertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Vertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Vertex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr MCVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MCVertex::Class_Name()
{
   return "lcfiplus::MCVertex";
}

//______________________________________________________________________________
const char *MCVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MCVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MCVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MCVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MCVertex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr Jet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Jet::Class_Name()
{
   return "lcfiplus::Jet";
}

//______________________________________________________________________________
const char *Jet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Jet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Jet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Jet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Jet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Jet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Jet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::Jet*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr LCIOStorer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LCIOStorer::Class_Name()
{
   return "lcfiplus::LCIOStorer";
}

//______________________________________________________________________________
const char *LCIOStorer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::LCIOStorer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LCIOStorer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::LCIOStorer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LCIOStorer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::LCIOStorer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LCIOStorer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::LCIOStorer*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr PrimaryVertexFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *PrimaryVertexFinder::Class_Name()
{
   return "lcfiplus::PrimaryVertexFinder";
}

//______________________________________________________________________________
const char *PrimaryVertexFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::PrimaryVertexFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int PrimaryVertexFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::PrimaryVertexFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *PrimaryVertexFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::PrimaryVertexFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *PrimaryVertexFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::PrimaryVertexFinder*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr BuildUpVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BuildUpVertex::Class_Name()
{
   return "lcfiplus::BuildUpVertex";
}

//______________________________________________________________________________
const char *BuildUpVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::BuildUpVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BuildUpVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::BuildUpVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BuildUpVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::BuildUpVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BuildUpVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::BuildUpVertex*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr JetClustering::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *JetClustering::Class_Name()
{
   return "lcfiplus::JetClustering";
}

//______________________________________________________________________________
const char *JetClustering::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::JetClustering*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JetClustering::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::JetClustering*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JetClustering::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::JetClustering*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JetClustering::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::JetClustering*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr JetVertexRefiner::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *JetVertexRefiner::Class_Name()
{
   return "lcfiplus::JetVertexRefiner";
}

//______________________________________________________________________________
const char *JetVertexRefiner::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::JetVertexRefiner*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int JetVertexRefiner::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::JetVertexRefiner*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *JetVertexRefiner::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::JetVertexRefiner*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *JetVertexRefiner::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::JetVertexRefiner*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr FlavorTag::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FlavorTag::Class_Name()
{
   return "lcfiplus::FlavorTag";
}

//______________________________________________________________________________
const char *FlavorTag::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::FlavorTag*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FlavorTag::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::FlavorTag*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FlavorTag::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::FlavorTag*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FlavorTag::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::FlavorTag*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr MakeNtuple::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MakeNtuple::Class_Name()
{
   return "lcfiplus::MakeNtuple";
}

//______________________________________________________________________________
const char *MakeNtuple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MakeNtuple*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MakeNtuple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MakeNtuple*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MakeNtuple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MakeNtuple*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MakeNtuple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::MakeNtuple*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr TrainMVA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrainMVA::Class_Name()
{
   return "lcfiplus::TrainMVA";
}

//______________________________________________________________________________
const char *TrainMVA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TrainMVA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrainMVA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TrainMVA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrainMVA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TrainMVA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrainMVA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TrainMVA*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr ReadMVA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ReadMVA::Class_Name()
{
   return "lcfiplus::ReadMVA";
}

//______________________________________________________________________________
const char *ReadMVA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::ReadMVA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ReadMVA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::ReadMVA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ReadMVA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::ReadMVA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ReadMVA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::ReadMVA*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr ZHHAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ZHHAlgo::Class_Name()
{
   return "lcfiplus::ZHHAlgo";
}

//______________________________________________________________________________
const char *ZHHAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::ZHHAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ZHHAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::ZHHAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ZHHAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::ZHHAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ZHHAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::ZHHAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr TestAlgo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TestAlgo::Class_Name()
{
   return "lcfiplus::TestAlgo";
}

//______________________________________________________________________________
const char *TestAlgo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TestAlgo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TestAlgo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TestAlgo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TestAlgo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TestAlgo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TestAlgo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TestAlgo*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr VertexAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VertexAnalysis::Class_Name()
{
   return "lcfiplus::VertexAnalysis";
}

//______________________________________________________________________________
const char *VertexAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VertexAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VertexAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VertexAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr FlavtagReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FlavtagReader::Class_Name()
{
   return "lcfiplus::FlavtagReader";
}

//______________________________________________________________________________
const char *FlavtagReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::FlavtagReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FlavtagReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::FlavtagReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FlavtagReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::FlavtagReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FlavtagReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::FlavtagReader*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr TestAlgoV0::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TestAlgoV0::Class_Name()
{
   return "lcfiplus::TestAlgoV0";
}

//______________________________________________________________________________
const char *TestAlgoV0::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TestAlgoV0*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TestAlgoV0::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TestAlgoV0*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TestAlgoV0::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TestAlgoV0*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TestAlgoV0::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TestAlgoV0*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr TrackNtuple::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrackNtuple::Class_Name()
{
   return "lcfiplus::TrackNtuple";
}

//______________________________________________________________________________
const char *TrackNtuple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TrackNtuple*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrackNtuple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TrackNtuple*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrackNtuple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TrackNtuple*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrackNtuple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::TrackNtuple*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr VertexMassRecovery::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VertexMassRecovery::Class_Name()
{
   return "lcfiplus::VertexMassRecovery";
}

//______________________________________________________________________________
const char *VertexMassRecovery::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexMassRecovery*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VertexMassRecovery::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexMassRecovery*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VertexMassRecovery::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexMassRecovery*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VertexMassRecovery::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexMassRecovery*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
atomic_TClass_ptr VertexNtuple::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VertexNtuple::Class_Name()
{
   return "lcfiplus::VertexNtuple";
}

//______________________________________________________________________________
const char *VertexNtuple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexNtuple*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VertexNtuple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexNtuple*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VertexNtuple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexNtuple*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VertexNtuple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::lcfiplus::VertexNtuple*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace lcfiplus
namespace lcfiplus {
//______________________________________________________________________________
void EventStoreObserver::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::EventStoreObserver.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::EventStoreObserver thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLEventStoreObserver(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::EventStoreObserver : new ::lcfiplus::EventStoreObserver;
   }
   static void *newArray_lcfipluscLcLEventStoreObserver(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::EventStoreObserver[nElements] : new ::lcfiplus::EventStoreObserver[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLEventStoreObserver(void *p) {
      delete ((::lcfiplus::EventStoreObserver*)p);
   }
   static void deleteArray_lcfipluscLcLEventStoreObserver(void *p) {
      delete [] ((::lcfiplus::EventStoreObserver*)p);
   }
   static void destruct_lcfipluscLcLEventStoreObserver(void *p) {
      typedef ::lcfiplus::EventStoreObserver current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLEventStoreObserver(TBuffer &buf, void *obj) {
      ((::lcfiplus::EventStoreObserver*)obj)->::lcfiplus::EventStoreObserver::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::EventStoreObserver

namespace ROOT {
   // Wrapper around operator delete
   static void delete_lcfipluscLcLEventStore(void *p) {
      delete ((::lcfiplus::EventStore*)p);
   }
   static void deleteArray_lcfipluscLcLEventStore(void *p) {
      delete [] ((::lcfiplus::EventStore*)p);
   }
   static void destruct_lcfipluscLcLEventStore(void *p) {
      typedef ::lcfiplus::EventStore current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::EventStore

namespace lcfiplus {
//______________________________________________________________________________
void Algorithm::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::Algorithm.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::Algorithm thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> _param;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << _param;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrapper around operator delete
   static void delete_lcfipluscLcLAlgorithm(void *p) {
      delete ((::lcfiplus::Algorithm*)p);
   }
   static void deleteArray_lcfipluscLcLAlgorithm(void *p) {
      delete [] ((::lcfiplus::Algorithm*)p);
   }
   static void destruct_lcfipluscLcLAlgorithm(void *p) {
      typedef ::lcfiplus::Algorithm current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLAlgorithm(TBuffer &buf, void *obj) {
      ((::lcfiplus::Algorithm*)obj)->::lcfiplus::Algorithm::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::Algorithm

namespace lcfiplus {
//______________________________________________________________________________
void Track::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::Track.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(lcfiplus::Track::Class(),this);
   } else {
      R__b.WriteClassBuffer(lcfiplus::Track::Class(),this);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLTrack(void *p) {
      return  p ? new(p) ::lcfiplus::Track : new ::lcfiplus::Track;
   }
   static void *newArray_lcfipluscLcLTrack(Long_t nElements, void *p) {
      return p ? new(p) ::lcfiplus::Track[nElements] : new ::lcfiplus::Track[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLTrack(void *p) {
      delete ((::lcfiplus::Track*)p);
   }
   static void deleteArray_lcfipluscLcLTrack(void *p) {
      delete [] ((::lcfiplus::Track*)p);
   }
   static void destruct_lcfipluscLcLTrack(void *p) {
      typedef ::lcfiplus::Track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::Track

namespace lcfiplus {
//______________________________________________________________________________
void Neutral::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::Neutral.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(lcfiplus::Neutral::Class(),this);
   } else {
      R__b.WriteClassBuffer(lcfiplus::Neutral::Class(),this);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLNeutral(void *p) {
      return  p ? new(p) ::lcfiplus::Neutral : new ::lcfiplus::Neutral;
   }
   static void *newArray_lcfipluscLcLNeutral(Long_t nElements, void *p) {
      return p ? new(p) ::lcfiplus::Neutral[nElements] : new ::lcfiplus::Neutral[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLNeutral(void *p) {
      delete ((::lcfiplus::Neutral*)p);
   }
   static void deleteArray_lcfipluscLcLNeutral(void *p) {
      delete [] ((::lcfiplus::Neutral*)p);
   }
   static void destruct_lcfipluscLcLNeutral(void *p) {
      typedef ::lcfiplus::Neutral current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::Neutral

namespace lcfiplus {
//______________________________________________________________________________
void MCParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::MCParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(lcfiplus::MCParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(lcfiplus::MCParticle::Class(),this);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLMCParticle(void *p) {
      return  p ? new(p) ::lcfiplus::MCParticle : new ::lcfiplus::MCParticle;
   }
   static void *newArray_lcfipluscLcLMCParticle(Long_t nElements, void *p) {
      return p ? new(p) ::lcfiplus::MCParticle[nElements] : new ::lcfiplus::MCParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLMCParticle(void *p) {
      delete ((::lcfiplus::MCParticle*)p);
   }
   static void deleteArray_lcfipluscLcLMCParticle(void *p) {
      delete [] ((::lcfiplus::MCParticle*)p);
   }
   static void destruct_lcfipluscLcLMCParticle(void *p) {
      typedef ::lcfiplus::MCParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::MCParticle

namespace lcfiplus {
//______________________________________________________________________________
void MCColorSinglet::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::MCColorSinglet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(lcfiplus::MCColorSinglet::Class(),this);
   } else {
      R__b.WriteClassBuffer(lcfiplus::MCColorSinglet::Class(),this);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLMCColorSinglet(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::MCColorSinglet : new ::lcfiplus::MCColorSinglet;
   }
   static void *newArray_lcfipluscLcLMCColorSinglet(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::MCColorSinglet[nElements] : new ::lcfiplus::MCColorSinglet[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLMCColorSinglet(void *p) {
      delete ((::lcfiplus::MCColorSinglet*)p);
   }
   static void deleteArray_lcfipluscLcLMCColorSinglet(void *p) {
      delete [] ((::lcfiplus::MCColorSinglet*)p);
   }
   static void destruct_lcfipluscLcLMCColorSinglet(void *p) {
      typedef ::lcfiplus::MCColorSinglet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::MCColorSinglet

namespace lcfiplus {
//______________________________________________________________________________
void Vertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::Vertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(lcfiplus::Vertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(lcfiplus::Vertex::Class(),this);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLVertex(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::Vertex : new ::lcfiplus::Vertex;
   }
   static void *newArray_lcfipluscLcLVertex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::Vertex[nElements] : new ::lcfiplus::Vertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLVertex(void *p) {
      delete ((::lcfiplus::Vertex*)p);
   }
   static void deleteArray_lcfipluscLcLVertex(void *p) {
      delete [] ((::lcfiplus::Vertex*)p);
   }
   static void destruct_lcfipluscLcLVertex(void *p) {
      typedef ::lcfiplus::Vertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::Vertex

namespace lcfiplus {
//______________________________________________________________________________
void MCVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::MCVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(lcfiplus::MCVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(lcfiplus::MCVertex::Class(),this);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLMCVertex(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::MCVertex : new ::lcfiplus::MCVertex;
   }
   static void *newArray_lcfipluscLcLMCVertex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::MCVertex[nElements] : new ::lcfiplus::MCVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLMCVertex(void *p) {
      delete ((::lcfiplus::MCVertex*)p);
   }
   static void deleteArray_lcfipluscLcLMCVertex(void *p) {
      delete [] ((::lcfiplus::MCVertex*)p);
   }
   static void destruct_lcfipluscLcLMCVertex(void *p) {
      typedef ::lcfiplus::MCVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::MCVertex

namespace lcfiplus {
//______________________________________________________________________________
void Jet::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::Jet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(lcfiplus::Jet::Class(),this);
   } else {
      R__b.WriteClassBuffer(lcfiplus::Jet::Class(),this);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLJet(void *p) {
      return  p ? new(p) ::lcfiplus::Jet : new ::lcfiplus::Jet;
   }
   static void *newArray_lcfipluscLcLJet(Long_t nElements, void *p) {
      return p ? new(p) ::lcfiplus::Jet[nElements] : new ::lcfiplus::Jet[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLJet(void *p) {
      delete ((::lcfiplus::Jet*)p);
   }
   static void deleteArray_lcfipluscLcLJet(void *p) {
      delete [] ((::lcfiplus::Jet*)p);
   }
   static void destruct_lcfipluscLcLJet(void *p) {
      typedef ::lcfiplus::Jet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::Jet

namespace lcfiplus {
//______________________________________________________________________________
void LCIOStorer::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::LCIOStorer.

   TObject::Streamer(R__b);
   //This works around a msvc bug and should be harmless on other platforms
   typedef lcfiplus::EventStoreObserver baseClass1;
   baseClass1::Streamer(R__b);
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLLCIOStorer(void *p) {
      return  p ? new(p) ::lcfiplus::LCIOStorer : new ::lcfiplus::LCIOStorer;
   }
   static void *newArray_lcfipluscLcLLCIOStorer(Long_t nElements, void *p) {
      return p ? new(p) ::lcfiplus::LCIOStorer[nElements] : new ::lcfiplus::LCIOStorer[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLLCIOStorer(void *p) {
      delete ((::lcfiplus::LCIOStorer*)p);
   }
   static void deleteArray_lcfipluscLcLLCIOStorer(void *p) {
      delete [] ((::lcfiplus::LCIOStorer*)p);
   }
   static void destruct_lcfipluscLcLLCIOStorer(void *p) {
      typedef ::lcfiplus::LCIOStorer current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLLCIOStorer(TBuffer &buf, void *obj) {
      ((::lcfiplus::LCIOStorer*)obj)->::lcfiplus::LCIOStorer::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::LCIOStorer

namespace ROOT {
   // Wrapper around operator delete
   static void delete_lcfipluscLcLTreeStorer(void *p) {
      delete ((::lcfiplus::TreeStorer*)p);
   }
   static void deleteArray_lcfipluscLcLTreeStorer(void *p) {
      delete [] ((::lcfiplus::TreeStorer*)p);
   }
   static void destruct_lcfipluscLcLTreeStorer(void *p) {
      typedef ::lcfiplus::TreeStorer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::TreeStorer

namespace lcfiplus {
//______________________________________________________________________________
void PrimaryVertexFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::PrimaryVertexFinder.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::PrimaryVertexFinder thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _chi2th;
      R__b >> _beamspotConstraint;
      R__b >> _beamspotSmearing;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _chi2th;
      R__b << _beamspotConstraint;
      R__b << _beamspotSmearing;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLPrimaryVertexFinder(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::PrimaryVertexFinder : new ::lcfiplus::PrimaryVertexFinder;
   }
   static void *newArray_lcfipluscLcLPrimaryVertexFinder(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::PrimaryVertexFinder[nElements] : new ::lcfiplus::PrimaryVertexFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLPrimaryVertexFinder(void *p) {
      delete ((::lcfiplus::PrimaryVertexFinder*)p);
   }
   static void deleteArray_lcfipluscLcLPrimaryVertexFinder(void *p) {
      delete [] ((::lcfiplus::PrimaryVertexFinder*)p);
   }
   static void destruct_lcfipluscLcLPrimaryVertexFinder(void *p) {
      typedef ::lcfiplus::PrimaryVertexFinder current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLPrimaryVertexFinder(TBuffer &buf, void *obj) {
      ((::lcfiplus::PrimaryVertexFinder*)obj)->::lcfiplus::PrimaryVertexFinder::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::PrimaryVertexFinder

namespace lcfiplus {
//______________________________________________________________________________
void BuildUpVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::BuildUpVertex.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::BuildUpVertex thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      { TString R__str; R__str.Streamer(R__b); _primvtxcolname = R__str.Data(); }
      R__b >> _chi2thpri;
      R__b >> _chi2thsec;
      R__b >> _massth;
      R__b >> _posth;
      R__b >> _chi2orderinglimit;
      R__b >> _v0sel;
      R__b >> _doassoc;
      R__b >> _minimumdist;
      R__b >> _chi2ratio;
      R__b >> _avf;
      R__b >> _temperature;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      { TString R__str = _primvtxcolname.c_str(); R__str.Streamer(R__b);}
      R__b << _chi2thpri;
      R__b << _chi2thsec;
      R__b << _massth;
      R__b << _posth;
      R__b << _chi2orderinglimit;
      R__b << _v0sel;
      R__b << _doassoc;
      R__b << _minimumdist;
      R__b << _chi2ratio;
      R__b << _avf;
      R__b << _temperature;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLBuildUpVertex(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::BuildUpVertex : new ::lcfiplus::BuildUpVertex;
   }
   static void *newArray_lcfipluscLcLBuildUpVertex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::BuildUpVertex[nElements] : new ::lcfiplus::BuildUpVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLBuildUpVertex(void *p) {
      delete ((::lcfiplus::BuildUpVertex*)p);
   }
   static void deleteArray_lcfipluscLcLBuildUpVertex(void *p) {
      delete [] ((::lcfiplus::BuildUpVertex*)p);
   }
   static void destruct_lcfipluscLcLBuildUpVertex(void *p) {
      typedef ::lcfiplus::BuildUpVertex current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLBuildUpVertex(TBuffer &buf, void *obj) {
      ((::lcfiplus::BuildUpVertex*)obj)->::lcfiplus::BuildUpVertex::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::BuildUpVertex

namespace lcfiplus {
//______________________________________________________________________________
void JetClustering::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::JetClustering.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::JetClustering thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      {
         vector<int> &R__stl =  _njets;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         vector<double> &R__stl =  _ycut;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      { TString R__str; R__str.Streamer(R__b); _algo = R__str.Data(); }
      R__b >> _useBeamJets;
      R__b >> _rParameter;
      R__b >> _alphaParameter;
      R__b >> _betaParameter;
      R__b >> _gammaParameter;
      R__b >> _useMuonID;
      R__b >> _muonIDExternal;
      R__b >> _muonIDMinEnergy;
      R__b >> _muonIDMinD0Sig;
      R__b >> _muonIDMinZ0Sig;
      R__b >> _muonIDMaxDist;
      R__b >> _muonIDMinProb;
      R__b >> _vsMinDist;
      R__b >> _vsMaxDist;
      R__b >> _vsK0MassWidth;
      R__b >> _outputVertexStoresVertex;
      { TString R__str; R__str.Streamer(R__b); _vpricolname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _vseccolname = R__str.Data(); }
      R__b >> _maxYth;
      R__b >> _yaddVV;
      R__b >> _yaddVL;
      R__b >> _yaddLL;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      {
         vector<int> &R__stl =  _njets;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<int>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         vector<double> &R__stl =  _ycut;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<double>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      { TString R__str = _algo.c_str(); R__str.Streamer(R__b);}
      R__b << _useBeamJets;
      R__b << _rParameter;
      R__b << _alphaParameter;
      R__b << _betaParameter;
      R__b << _gammaParameter;
      R__b << _useMuonID;
      R__b << _muonIDExternal;
      R__b << _muonIDMinEnergy;
      R__b << _muonIDMinD0Sig;
      R__b << _muonIDMinZ0Sig;
      R__b << _muonIDMaxDist;
      R__b << _muonIDMinProb;
      R__b << _vsMinDist;
      R__b << _vsMaxDist;
      R__b << _vsK0MassWidth;
      R__b << _outputVertexStoresVertex;
      { TString R__str = _vpricolname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _vseccolname.c_str(); R__str.Streamer(R__b);}
      R__b << _maxYth;
      R__b << _yaddVV;
      R__b << _yaddVL;
      R__b << _yaddLL;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLJetClustering(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::JetClustering : new ::lcfiplus::JetClustering;
   }
   static void *newArray_lcfipluscLcLJetClustering(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::JetClustering[nElements] : new ::lcfiplus::JetClustering[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLJetClustering(void *p) {
      delete ((::lcfiplus::JetClustering*)p);
   }
   static void deleteArray_lcfipluscLcLJetClustering(void *p) {
      delete [] ((::lcfiplus::JetClustering*)p);
   }
   static void destruct_lcfipluscLcLJetClustering(void *p) {
      typedef ::lcfiplus::JetClustering current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLJetClustering(TBuffer &buf, void *obj) {
      ((::lcfiplus::JetClustering*)obj)->::lcfiplus::JetClustering::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::JetClustering

namespace lcfiplus {
//______________________________________________________________________________
void JetVertexRefiner::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::JetVertexRefiner.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::JetVertexRefiner thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b.StreamObject(&(_cfg),typeid(_cfg));
      R__b >> _oneVtxProbTh;
      R__b >> _maxCharmFlightLengthPerJetEnergy;
      { TString R__str; R__str.Streamer(R__b); _jincolname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _vincolname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _vv0colname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _vprimcolname = R__str.Data(); }
      R__b >> _bness;
      R__b.ReadStaticArray((float*)_var);
      { TString R__str; R__str.Streamer(R__b); _bnessbookname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _bnessbookname1 = R__str.Data(); }
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b.StreamObject(&(_cfg),typeid(_cfg));
      R__b << _oneVtxProbTh;
      R__b << _maxCharmFlightLengthPerJetEnergy;
      { TString R__str = _jincolname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _vincolname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _vv0colname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _vprimcolname.c_str(); R__str.Streamer(R__b);}
      R__b << _bness;
      R__b.WriteArray(_var, 8);
      { TString R__str = _bnessbookname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _bnessbookname1.c_str(); R__str.Streamer(R__b);}
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLJetVertexRefiner(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::JetVertexRefiner : new ::lcfiplus::JetVertexRefiner;
   }
   static void *newArray_lcfipluscLcLJetVertexRefiner(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::JetVertexRefiner[nElements] : new ::lcfiplus::JetVertexRefiner[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLJetVertexRefiner(void *p) {
      delete ((::lcfiplus::JetVertexRefiner*)p);
   }
   static void deleteArray_lcfipluscLcLJetVertexRefiner(void *p) {
      delete [] ((::lcfiplus::JetVertexRefiner*)p);
   }
   static void destruct_lcfipluscLcLJetVertexRefiner(void *p) {
      typedef ::lcfiplus::JetVertexRefiner current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLJetVertexRefiner(TBuffer &buf, void *obj) {
      ((::lcfiplus::JetVertexRefiner*)obj)->::lcfiplus::JetVertexRefiner::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::JetVertexRefiner

namespace lcfiplus {
//______________________________________________________________________________
void FlavorTag::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::FlavorTag.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::FlavorTag thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _file;
      R__b >> _t;
      R__b >> _auxiliaryInfo;
      { TString R__str; R__str.Streamer(R__b); _jetcolname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _primvtxcolname = R__str.Data(); }
      R__b >> _nhitsJointProbD0;
      R__b >> _nhitsJointProbZ0;
      R__b >> _nhitsMostSignificantTrack;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _file;
      R__b << _t;
      R__b << _auxiliaryInfo;
      { TString R__str = _jetcolname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _primvtxcolname.c_str(); R__str.Streamer(R__b);}
      R__b << _nhitsJointProbD0;
      R__b << _nhitsJointProbZ0;
      R__b << _nhitsMostSignificantTrack;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLFlavorTag(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::FlavorTag : new ::lcfiplus::FlavorTag;
   }
   static void *newArray_lcfipluscLcLFlavorTag(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::FlavorTag[nElements] : new ::lcfiplus::FlavorTag[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLFlavorTag(void *p) {
      delete ((::lcfiplus::FlavorTag*)p);
   }
   static void deleteArray_lcfipluscLcLFlavorTag(void *p) {
      delete [] ((::lcfiplus::FlavorTag*)p);
   }
   static void destruct_lcfipluscLcLFlavorTag(void *p) {
      typedef ::lcfiplus::FlavorTag current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLFlavorTag(TBuffer &buf, void *obj) {
      ((::lcfiplus::FlavorTag*)obj)->::lcfiplus::FlavorTag::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::FlavorTag

namespace lcfiplus {
//______________________________________________________________________________
void MakeNtuple::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::MakeNtuple.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::MakeNtuple thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLMakeNtuple(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::MakeNtuple : new ::lcfiplus::MakeNtuple;
   }
   static void *newArray_lcfipluscLcLMakeNtuple(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::MakeNtuple[nElements] : new ::lcfiplus::MakeNtuple[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLMakeNtuple(void *p) {
      delete ((::lcfiplus::MakeNtuple*)p);
   }
   static void deleteArray_lcfipluscLcLMakeNtuple(void *p) {
      delete [] ((::lcfiplus::MakeNtuple*)p);
   }
   static void destruct_lcfipluscLcLMakeNtuple(void *p) {
      typedef ::lcfiplus::MakeNtuple current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLMakeNtuple(TBuffer &buf, void *obj) {
      ((::lcfiplus::MakeNtuple*)obj)->::lcfiplus::MakeNtuple::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::MakeNtuple

namespace lcfiplus {
//______________________________________________________________________________
void TrainMVA::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::TrainMVA.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::TrainMVA thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _verbose;
      {
         vector<lcfiplus::TrainMVA::InputFileInfo> &R__stl =  _inputFileInfo;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(struct lcfiplus::TrainMVA::InputFileInfo));
         if (R__tcl1==0) {
            Error("_inputFileInfo streamer","Missing the TClass object for struct lcfiplus::TrainMVA::InputFileInfo!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            lcfiplus::TrainMVA::InputFileInfo R__t;
            R__b.StreamObject(&R__t,R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      _outputDirectory.Streamer(R__b);
      _outputPrefix.Streamer(R__b);
      _treeName.Streamer(R__b);
      void *ptr__tmvaBookType = (void*)&_tmvaBookType;
      R__b >> *reinterpret_cast<Int_t*>(ptr__tmvaBookType);
      _tmvaBookName.Streamer(R__b);
      _tmvaBookOptions.Streamer(R__b);
      R__b >> _skipTrain;
      {
         vector<lcfiplus::FlavtagCategory> &R__stl =  _categories;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(struct lcfiplus::FlavtagCategory));
         if (R__tcl1==0) {
            Error("_categories streamer","Missing the TClass object for struct lcfiplus::FlavtagCategory!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            lcfiplus::FlavtagCategory R__t;
            R__b.StreamObject(&R__t,R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _verbose;
      {
         vector<lcfiplus::TrainMVA::InputFileInfo> &R__stl =  _inputFileInfo;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
         TClass *R__tcl1 = TBuffer::GetClass(typeid(struct lcfiplus::TrainMVA::InputFileInfo));
         if (R__tcl1==0) {
            Error("_inputFileInfo streamer","Missing the TClass object for struct lcfiplus::TrainMVA::InputFileInfo!");
            return;
         }
            vector<lcfiplus::TrainMVA::InputFileInfo>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b.StreamObject((lcfiplus::TrainMVA::InputFileInfo*)&(*R__k),R__tcl1);
            }
         }
      }
      _outputDirectory.Streamer(R__b);
      _outputPrefix.Streamer(R__b);
      _treeName.Streamer(R__b);
      R__b << (Int_t)_tmvaBookType;
      _tmvaBookName.Streamer(R__b);
      _tmvaBookOptions.Streamer(R__b);
      R__b << _skipTrain;
      {
         vector<lcfiplus::FlavtagCategory> &R__stl =  _categories;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
         TClass *R__tcl1 = TBuffer::GetClass(typeid(struct lcfiplus::FlavtagCategory));
         if (R__tcl1==0) {
            Error("_categories streamer","Missing the TClass object for struct lcfiplus::FlavtagCategory!");
            return;
         }
            vector<lcfiplus::FlavtagCategory>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b.StreamObject((lcfiplus::FlavtagCategory*)&(*R__k),R__tcl1);
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLTrainMVA(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::TrainMVA : new ::lcfiplus::TrainMVA;
   }
   static void *newArray_lcfipluscLcLTrainMVA(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::TrainMVA[nElements] : new ::lcfiplus::TrainMVA[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLTrainMVA(void *p) {
      delete ((::lcfiplus::TrainMVA*)p);
   }
   static void deleteArray_lcfipluscLcLTrainMVA(void *p) {
      delete [] ((::lcfiplus::TrainMVA*)p);
   }
   static void destruct_lcfipluscLcLTrainMVA(void *p) {
      typedef ::lcfiplus::TrainMVA current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLTrainMVA(TBuffer &buf, void *obj) {
      ((::lcfiplus::TrainMVA*)obj)->::lcfiplus::TrainMVA::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::TrainMVA

namespace lcfiplus {
//______________________________________________________________________________
void ReadMVA::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::ReadMVA.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::ReadMVA thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _verbose;
      _inputFileB.Streamer(R__b);
      _inputFileC.Streamer(R__b);
      _inputFileO.Streamer(R__b);
      _treeNameB.Streamer(R__b);
      _treeNameC.Streamer(R__b);
      _treeNameO.Streamer(R__b);
      _cutB.Streamer(R__b);
      _cutC.Streamer(R__b);
      _cutO.Streamer(R__b);
      _outputDirectory.Streamer(R__b);
      _outputPrefix.Streamer(R__b);
      _treeName.Streamer(R__b);
      void *ptr__tmvaBookType = (void*)&_tmvaBookType;
      R__b >> *reinterpret_cast<Int_t*>(ptr__tmvaBookType);
      _tmvaBookName.Streamer(R__b);
      _tmvaBookOptions.Streamer(R__b);
      {
         vector<lcfiplus::FlavtagCategory> &R__stl =  _categories;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(struct lcfiplus::FlavtagCategory));
         if (R__tcl1==0) {
            Error("_categories streamer","Missing the TClass object for struct lcfiplus::FlavtagCategory!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            lcfiplus::FlavtagCategory R__t;
            R__b.StreamObject(&R__t,R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      {
         vector<TMVA::Reader*> &R__stl =  _readers;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(class TMVA::Reader *));
         if (R__tcl1==0) {
            Error("_readers streamer","Missing the TClass object for class TMVA::Reader *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            TMVA::Reader* R__t;
            R__t = (TMVA::Reader*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _verbose;
      _inputFileB.Streamer(R__b);
      _inputFileC.Streamer(R__b);
      _inputFileO.Streamer(R__b);
      _treeNameB.Streamer(R__b);
      _treeNameC.Streamer(R__b);
      _treeNameO.Streamer(R__b);
      _cutB.Streamer(R__b);
      _cutC.Streamer(R__b);
      _cutO.Streamer(R__b);
      _outputDirectory.Streamer(R__b);
      _outputPrefix.Streamer(R__b);
      _treeName.Streamer(R__b);
      R__b << (Int_t)_tmvaBookType;
      _tmvaBookName.Streamer(R__b);
      _tmvaBookOptions.Streamer(R__b);
      {
         vector<lcfiplus::FlavtagCategory> &R__stl =  _categories;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
         TClass *R__tcl1 = TBuffer::GetClass(typeid(struct lcfiplus::FlavtagCategory));
         if (R__tcl1==0) {
            Error("_categories streamer","Missing the TClass object for struct lcfiplus::FlavtagCategory!");
            return;
         }
            vector<lcfiplus::FlavtagCategory>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b.StreamObject((lcfiplus::FlavtagCategory*)&(*R__k),R__tcl1);
            }
         }
      }
      {
         vector<TMVA::Reader*> &R__stl =  _readers;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<TMVA::Reader*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLReadMVA(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::ReadMVA : new ::lcfiplus::ReadMVA;
   }
   static void *newArray_lcfipluscLcLReadMVA(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::ReadMVA[nElements] : new ::lcfiplus::ReadMVA[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLReadMVA(void *p) {
      delete ((::lcfiplus::ReadMVA*)p);
   }
   static void deleteArray_lcfipluscLcLReadMVA(void *p) {
      delete [] ((::lcfiplus::ReadMVA*)p);
   }
   static void destruct_lcfipluscLcLReadMVA(void *p) {
      typedef ::lcfiplus::ReadMVA current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLReadMVA(TBuffer &buf, void *obj) {
      ((::lcfiplus::ReadMVA*)obj)->::lcfiplus::ReadMVA::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::ReadMVA

namespace lcfiplus {
//______________________________________________________________________________
void ZHHAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::ZHHAlgo.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::ZHHAlgo thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _file;
      { TString R__str; R__str.Streamer(R__b); _jetname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetname4 = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetname5 = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetname7 = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetname8 = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetnamenv4 = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetnamenv5 = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetnamenv6 = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetnamenv7 = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetnamenv8 = R__str.Data(); }
      R__b >> _tree;
      R__b.StreamObject(&(_d),typeid(_d));
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _file;
      { TString R__str = _jetname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetname4.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetname5.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetname7.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetname8.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetnamenv4.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetnamenv5.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetnamenv6.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetnamenv7.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetnamenv8.c_str(); R__str.Streamer(R__b);}
      R__b << _tree;
      R__b.StreamObject(&(_d),typeid(_d));
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLZHHAlgo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::ZHHAlgo : new ::lcfiplus::ZHHAlgo;
   }
   static void *newArray_lcfipluscLcLZHHAlgo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::ZHHAlgo[nElements] : new ::lcfiplus::ZHHAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLZHHAlgo(void *p) {
      delete ((::lcfiplus::ZHHAlgo*)p);
   }
   static void deleteArray_lcfipluscLcLZHHAlgo(void *p) {
      delete [] ((::lcfiplus::ZHHAlgo*)p);
   }
   static void destruct_lcfipluscLcLZHHAlgo(void *p) {
      typedef ::lcfiplus::ZHHAlgo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLZHHAlgo(TBuffer &buf, void *obj) {
      ((::lcfiplus::ZHHAlgo*)obj)->::lcfiplus::ZHHAlgo::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::ZHHAlgo

namespace lcfiplus {
//______________________________________________________________________________
void TestAlgo::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::TestAlgo.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::TestAlgo thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _nt;
      R__b >> _nev;
      R__b >> _ntJet2;
      R__b >> _nbJet;
      R__b >> _file;
      { TString R__str; R__str.Streamer(R__b); _v0vtxname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _privtxname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetname = R__str.Data(); }
      R__b >> _bbhh;
      { TString R__str; R__str.Streamer(R__b); _vtxname = R__str.Data(); }
      R__b >> _vtxsel;
      R__b >> _refine;
      R__b >> _ntJet;
      R__b >> _h;
      R__b >> _he;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _nt;
      R__b << _nev;
      R__b << _ntJet2;
      R__b << _nbJet;
      R__b << _file;
      { TString R__str = _v0vtxname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _privtxname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetname.c_str(); R__str.Streamer(R__b);}
      R__b << _bbhh;
      { TString R__str = _vtxname.c_str(); R__str.Streamer(R__b);}
      R__b << _vtxsel;
      R__b << _refine;
      R__b << _ntJet;
      R__b << (TObject*)_h;
      R__b << (TObject*)_he;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLTestAlgo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::TestAlgo : new ::lcfiplus::TestAlgo;
   }
   static void *newArray_lcfipluscLcLTestAlgo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::TestAlgo[nElements] : new ::lcfiplus::TestAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLTestAlgo(void *p) {
      delete ((::lcfiplus::TestAlgo*)p);
   }
   static void deleteArray_lcfipluscLcLTestAlgo(void *p) {
      delete [] ((::lcfiplus::TestAlgo*)p);
   }
   static void destruct_lcfipluscLcLTestAlgo(void *p) {
      typedef ::lcfiplus::TestAlgo current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLTestAlgo(TBuffer &buf, void *obj) {
      ((::lcfiplus::TestAlgo*)obj)->::lcfiplus::TestAlgo::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::TestAlgo

namespace lcfiplus {
//______________________________________________________________________________
void VertexAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::VertexAnalysis.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::VertexAnalysis thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _nt;
      R__b >> _nev;
      R__b >> _file;
      { TString R__str; R__str.Streamer(R__b); _privtxname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _secvtxname = R__str.Data(); }
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _nt;
      R__b << _nev;
      R__b << _file;
      { TString R__str = _privtxname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _secvtxname.c_str(); R__str.Streamer(R__b);}
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLVertexAnalysis(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::VertexAnalysis : new ::lcfiplus::VertexAnalysis;
   }
   static void *newArray_lcfipluscLcLVertexAnalysis(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::VertexAnalysis[nElements] : new ::lcfiplus::VertexAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLVertexAnalysis(void *p) {
      delete ((::lcfiplus::VertexAnalysis*)p);
   }
   static void deleteArray_lcfipluscLcLVertexAnalysis(void *p) {
      delete [] ((::lcfiplus::VertexAnalysis*)p);
   }
   static void destruct_lcfipluscLcLVertexAnalysis(void *p) {
      typedef ::lcfiplus::VertexAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLVertexAnalysis(TBuffer &buf, void *obj) {
      ((::lcfiplus::VertexAnalysis*)obj)->::lcfiplus::VertexAnalysis::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::VertexAnalysis

namespace lcfiplus {
//______________________________________________________________________________
void FlavtagReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::FlavtagReader.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::FlavtagReader thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _nt;
      R__b >> _ntev;
      R__b >> _nev;
      R__b >> _ntJet2;
      R__b >> _nbJet;
      R__b >> _file;
      { TString R__str; R__str.Streamer(R__b); _v0vtxname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _privtxname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _jetname = R__str.Data(); }
      R__b >> _bbhh;
      { TString R__str; R__str.Streamer(R__b); _vtxname = R__str.Data(); }
      R__b >> _vtxsel;
      R__b >> _refine;
      R__b >> _ntJet;
      R__b >> _h;
      R__b >> _he;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _nt;
      R__b << _ntev;
      R__b << _nev;
      R__b << _ntJet2;
      R__b << _nbJet;
      R__b << _file;
      { TString R__str = _v0vtxname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _privtxname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _jetname.c_str(); R__str.Streamer(R__b);}
      R__b << _bbhh;
      { TString R__str = _vtxname.c_str(); R__str.Streamer(R__b);}
      R__b << _vtxsel;
      R__b << _refine;
      R__b << _ntJet;
      R__b << (TObject*)_h;
      R__b << (TObject*)_he;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLFlavtagReader(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::FlavtagReader : new ::lcfiplus::FlavtagReader;
   }
   static void *newArray_lcfipluscLcLFlavtagReader(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::FlavtagReader[nElements] : new ::lcfiplus::FlavtagReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLFlavtagReader(void *p) {
      delete ((::lcfiplus::FlavtagReader*)p);
   }
   static void deleteArray_lcfipluscLcLFlavtagReader(void *p) {
      delete [] ((::lcfiplus::FlavtagReader*)p);
   }
   static void destruct_lcfipluscLcLFlavtagReader(void *p) {
      typedef ::lcfiplus::FlavtagReader current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLFlavtagReader(TBuffer &buf, void *obj) {
      ((::lcfiplus::FlavtagReader*)obj)->::lcfiplus::FlavtagReader::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::FlavtagReader

namespace lcfiplus {
//______________________________________________________________________________
void TestAlgoV0::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::TestAlgoV0.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::TestAlgoV0 thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _ntp;
      R__b >> _file;
      { TString R__str; R__str.Streamer(R__b); _vtxname = R__str.Data(); }
      R__b.StreamObject(&(_data),typeid(_data));
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _ntp;
      R__b << _file;
      { TString R__str = _vtxname.c_str(); R__str.Streamer(R__b);}
      R__b.StreamObject(&(_data),typeid(_data));
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLTestAlgoV0(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::TestAlgoV0 : new ::lcfiplus::TestAlgoV0;
   }
   static void *newArray_lcfipluscLcLTestAlgoV0(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::TestAlgoV0[nElements] : new ::lcfiplus::TestAlgoV0[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLTestAlgoV0(void *p) {
      delete ((::lcfiplus::TestAlgoV0*)p);
   }
   static void deleteArray_lcfipluscLcLTestAlgoV0(void *p) {
      delete [] ((::lcfiplus::TestAlgoV0*)p);
   }
   static void destruct_lcfipluscLcLTestAlgoV0(void *p) {
      typedef ::lcfiplus::TestAlgoV0 current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLTestAlgoV0(TBuffer &buf, void *obj) {
      ((::lcfiplus::TestAlgoV0*)obj)->::lcfiplus::TestAlgoV0::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::TestAlgoV0

namespace lcfiplus {
//______________________________________________________________________________
void TrackNtuple::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::TrackNtuple.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::TrackNtuple thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _file;
      R__b >> _tree;
      { TString R__str; R__str.Streamer(R__b); _jetcolname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _primvtxcolname = R__str.Data(); }
      R__b >> _hitcutJprob;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _file;
      R__b << _tree;
      { TString R__str = _jetcolname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _primvtxcolname.c_str(); R__str.Streamer(R__b);}
      R__b << _hitcutJprob;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLTrackNtuple(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::TrackNtuple : new ::lcfiplus::TrackNtuple;
   }
   static void *newArray_lcfipluscLcLTrackNtuple(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::TrackNtuple[nElements] : new ::lcfiplus::TrackNtuple[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLTrackNtuple(void *p) {
      delete ((::lcfiplus::TrackNtuple*)p);
   }
   static void deleteArray_lcfipluscLcLTrackNtuple(void *p) {
      delete [] ((::lcfiplus::TrackNtuple*)p);
   }
   static void destruct_lcfipluscLcLTrackNtuple(void *p) {
      typedef ::lcfiplus::TrackNtuple current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLTrackNtuple(TBuffer &buf, void *obj) {
      ((::lcfiplus::TrackNtuple*)obj)->::lcfiplus::TrackNtuple::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::TrackNtuple

namespace lcfiplus {
//______________________________________________________________________________
void VertexMassRecovery::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::VertexMassRecovery.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(lcfiplus::VertexMassRecovery::Class(),this);
   } else {
      R__b.WriteClassBuffer(lcfiplus::VertexMassRecovery::Class(),this);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLVertexMassRecovery(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::VertexMassRecovery : new ::lcfiplus::VertexMassRecovery;
   }
   static void *newArray_lcfipluscLcLVertexMassRecovery(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::VertexMassRecovery[nElements] : new ::lcfiplus::VertexMassRecovery[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLVertexMassRecovery(void *p) {
      delete ((::lcfiplus::VertexMassRecovery*)p);
   }
   static void deleteArray_lcfipluscLcLVertexMassRecovery(void *p) {
      delete [] ((::lcfiplus::VertexMassRecovery*)p);
   }
   static void destruct_lcfipluscLcLVertexMassRecovery(void *p) {
      typedef ::lcfiplus::VertexMassRecovery current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::lcfiplus::VertexMassRecovery

namespace lcfiplus {
//______________________________________________________________________________
void VertexNtuple::Streamer(TBuffer &R__b)
{
   // Stream an object of class lcfiplus::VertexNtuple.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::lcfiplus::VertexNtuple thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b >> _file;
      R__b >> _tree;
      { TString R__str; R__str.Streamer(R__b); _jetcolname = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); _primvtxcolname = R__str.Data(); }
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef lcfiplus::Algorithm baseClass0;
      baseClass0::Streamer(R__b);
      R__b << _file;
      R__b << _tree;
      { TString R__str = _jetcolname.c_str(); R__str.Streamer(R__b);}
      { TString R__str = _primvtxcolname.c_str(); R__str.Streamer(R__b);}
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace lcfiplus
namespace ROOT {
   // Wrappers around operator new
   static void *new_lcfipluscLcLVertexNtuple(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::VertexNtuple : new ::lcfiplus::VertexNtuple;
   }
   static void *newArray_lcfipluscLcLVertexNtuple(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::lcfiplus::VertexNtuple[nElements] : new ::lcfiplus::VertexNtuple[nElements];
   }
   // Wrapper around operator delete
   static void delete_lcfipluscLcLVertexNtuple(void *p) {
      delete ((::lcfiplus::VertexNtuple*)p);
   }
   static void deleteArray_lcfipluscLcLVertexNtuple(void *p) {
      delete [] ((::lcfiplus::VertexNtuple*)p);
   }
   static void destruct_lcfipluscLcLVertexNtuple(void *p) {
      typedef ::lcfiplus::VertexNtuple current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_lcfipluscLcLVertexNtuple(TBuffer &buf, void *obj) {
      ((::lcfiplus::VertexNtuple*)obj)->::lcfiplus::VertexNtuple::Streamer(buf);
   }
} // end of namespace ROOT for class ::lcfiplus::VertexNtuple

namespace ROOT {
   static TClass *vectorlElcfipluscLcLVertexmUgR_Dictionary();
   static void vectorlElcfipluscLcLVertexmUgR_TClassManip(TClass*);
   static void *new_vectorlElcfipluscLcLVertexmUgR(void *p = 0);
   static void *newArray_vectorlElcfipluscLcLVertexmUgR(Long_t size, void *p);
   static void delete_vectorlElcfipluscLcLVertexmUgR(void *p);
   static void deleteArray_vectorlElcfipluscLcLVertexmUgR(void *p);
   static void destruct_vectorlElcfipluscLcLVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lcfiplus::Vertex*>*)
   {
      vector<lcfiplus::Vertex*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lcfiplus::Vertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lcfiplus::Vertex*>", -2, "vector", 339,
                  typeid(vector<lcfiplus::Vertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElcfipluscLcLVertexmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<lcfiplus::Vertex*>) );
      instance.SetNew(&new_vectorlElcfipluscLcLVertexmUgR);
      instance.SetNewArray(&newArray_vectorlElcfipluscLcLVertexmUgR);
      instance.SetDelete(&delete_vectorlElcfipluscLcLVertexmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlElcfipluscLcLVertexmUgR);
      instance.SetDestructor(&destruct_vectorlElcfipluscLcLVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lcfiplus::Vertex*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<lcfiplus::Vertex*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElcfipluscLcLVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lcfiplus::Vertex*>*)0x0)->GetClass();
      vectorlElcfipluscLcLVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElcfipluscLcLVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElcfipluscLcLVertexmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::Vertex*> : new vector<lcfiplus::Vertex*>;
   }
   static void *newArray_vectorlElcfipluscLcLVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::Vertex*>[nElements] : new vector<lcfiplus::Vertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElcfipluscLcLVertexmUgR(void *p) {
      delete ((vector<lcfiplus::Vertex*>*)p);
   }
   static void deleteArray_vectorlElcfipluscLcLVertexmUgR(void *p) {
      delete [] ((vector<lcfiplus::Vertex*>*)p);
   }
   static void destruct_vectorlElcfipluscLcLVertexmUgR(void *p) {
      typedef vector<lcfiplus::Vertex*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lcfiplus::Vertex*>

namespace ROOT {
   static TClass *vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR_Dictionary();
   static void vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR_TClassManip(TClass*);
   static void *new_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(void *p = 0);
   static void *newArray_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(Long_t size, void *p);
   static void delete_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(void *p);
   static void deleteArray_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(void *p);
   static void destruct_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lcfiplus::TrainMVA::InputFileInfo>*)
   {
      vector<lcfiplus::TrainMVA::InputFileInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lcfiplus::TrainMVA::InputFileInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lcfiplus::TrainMVA::InputFileInfo>", -2, "vector", 339,
                  typeid(vector<lcfiplus::TrainMVA::InputFileInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR_Dictionary, isa_proxy, 0,
                  sizeof(vector<lcfiplus::TrainMVA::InputFileInfo>) );
      instance.SetNew(&new_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR);
      instance.SetNewArray(&newArray_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR);
      instance.SetDelete(&delete_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR);
      instance.SetDestructor(&destruct_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lcfiplus::TrainMVA::InputFileInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<lcfiplus::TrainMVA::InputFileInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lcfiplus::TrainMVA::InputFileInfo>*)0x0)->GetClass();
      vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::TrainMVA::InputFileInfo> : new vector<lcfiplus::TrainMVA::InputFileInfo>;
   }
   static void *newArray_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::TrainMVA::InputFileInfo>[nElements] : new vector<lcfiplus::TrainMVA::InputFileInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(void *p) {
      delete ((vector<lcfiplus::TrainMVA::InputFileInfo>*)p);
   }
   static void deleteArray_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(void *p) {
      delete [] ((vector<lcfiplus::TrainMVA::InputFileInfo>*)p);
   }
   static void destruct_vectorlElcfipluscLcLTrainMVAcLcLInputFileInfogR(void *p) {
      typedef vector<lcfiplus::TrainMVA::InputFileInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lcfiplus::TrainMVA::InputFileInfo>

namespace ROOT {
   static TClass *vectorlElcfipluscLcLTrackmUgR_Dictionary();
   static void vectorlElcfipluscLcLTrackmUgR_TClassManip(TClass*);
   static void *new_vectorlElcfipluscLcLTrackmUgR(void *p = 0);
   static void *newArray_vectorlElcfipluscLcLTrackmUgR(Long_t size, void *p);
   static void delete_vectorlElcfipluscLcLTrackmUgR(void *p);
   static void deleteArray_vectorlElcfipluscLcLTrackmUgR(void *p);
   static void destruct_vectorlElcfipluscLcLTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lcfiplus::Track*>*)
   {
      vector<lcfiplus::Track*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lcfiplus::Track*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lcfiplus::Track*>", -2, "vector", 339,
                  typeid(vector<lcfiplus::Track*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElcfipluscLcLTrackmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<lcfiplus::Track*>) );
      instance.SetNew(&new_vectorlElcfipluscLcLTrackmUgR);
      instance.SetNewArray(&newArray_vectorlElcfipluscLcLTrackmUgR);
      instance.SetDelete(&delete_vectorlElcfipluscLcLTrackmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlElcfipluscLcLTrackmUgR);
      instance.SetDestructor(&destruct_vectorlElcfipluscLcLTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lcfiplus::Track*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<lcfiplus::Track*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElcfipluscLcLTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lcfiplus::Track*>*)0x0)->GetClass();
      vectorlElcfipluscLcLTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElcfipluscLcLTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElcfipluscLcLTrackmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::Track*> : new vector<lcfiplus::Track*>;
   }
   static void *newArray_vectorlElcfipluscLcLTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::Track*>[nElements] : new vector<lcfiplus::Track*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElcfipluscLcLTrackmUgR(void *p) {
      delete ((vector<lcfiplus::Track*>*)p);
   }
   static void deleteArray_vectorlElcfipluscLcLTrackmUgR(void *p) {
      delete [] ((vector<lcfiplus::Track*>*)p);
   }
   static void destruct_vectorlElcfipluscLcLTrackmUgR(void *p) {
      typedef vector<lcfiplus::Track*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lcfiplus::Track*>

namespace ROOT {
   static TClass *vectorlElcfipluscLcLNeutralmUgR_Dictionary();
   static void vectorlElcfipluscLcLNeutralmUgR_TClassManip(TClass*);
   static void *new_vectorlElcfipluscLcLNeutralmUgR(void *p = 0);
   static void *newArray_vectorlElcfipluscLcLNeutralmUgR(Long_t size, void *p);
   static void delete_vectorlElcfipluscLcLNeutralmUgR(void *p);
   static void deleteArray_vectorlElcfipluscLcLNeutralmUgR(void *p);
   static void destruct_vectorlElcfipluscLcLNeutralmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lcfiplus::Neutral*>*)
   {
      vector<lcfiplus::Neutral*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lcfiplus::Neutral*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lcfiplus::Neutral*>", -2, "vector", 339,
                  typeid(vector<lcfiplus::Neutral*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElcfipluscLcLNeutralmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<lcfiplus::Neutral*>) );
      instance.SetNew(&new_vectorlElcfipluscLcLNeutralmUgR);
      instance.SetNewArray(&newArray_vectorlElcfipluscLcLNeutralmUgR);
      instance.SetDelete(&delete_vectorlElcfipluscLcLNeutralmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlElcfipluscLcLNeutralmUgR);
      instance.SetDestructor(&destruct_vectorlElcfipluscLcLNeutralmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lcfiplus::Neutral*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<lcfiplus::Neutral*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElcfipluscLcLNeutralmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lcfiplus::Neutral*>*)0x0)->GetClass();
      vectorlElcfipluscLcLNeutralmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElcfipluscLcLNeutralmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElcfipluscLcLNeutralmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::Neutral*> : new vector<lcfiplus::Neutral*>;
   }
   static void *newArray_vectorlElcfipluscLcLNeutralmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::Neutral*>[nElements] : new vector<lcfiplus::Neutral*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElcfipluscLcLNeutralmUgR(void *p) {
      delete ((vector<lcfiplus::Neutral*>*)p);
   }
   static void deleteArray_vectorlElcfipluscLcLNeutralmUgR(void *p) {
      delete [] ((vector<lcfiplus::Neutral*>*)p);
   }
   static void destruct_vectorlElcfipluscLcLNeutralmUgR(void *p) {
      typedef vector<lcfiplus::Neutral*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lcfiplus::Neutral*>

namespace ROOT {
   static TClass *vectorlElcfipluscLcLMCVertexmUgR_Dictionary();
   static void vectorlElcfipluscLcLMCVertexmUgR_TClassManip(TClass*);
   static void *new_vectorlElcfipluscLcLMCVertexmUgR(void *p = 0);
   static void *newArray_vectorlElcfipluscLcLMCVertexmUgR(Long_t size, void *p);
   static void delete_vectorlElcfipluscLcLMCVertexmUgR(void *p);
   static void deleteArray_vectorlElcfipluscLcLMCVertexmUgR(void *p);
   static void destruct_vectorlElcfipluscLcLMCVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lcfiplus::MCVertex*>*)
   {
      vector<lcfiplus::MCVertex*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lcfiplus::MCVertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lcfiplus::MCVertex*>", -2, "vector", 339,
                  typeid(vector<lcfiplus::MCVertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElcfipluscLcLMCVertexmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<lcfiplus::MCVertex*>) );
      instance.SetNew(&new_vectorlElcfipluscLcLMCVertexmUgR);
      instance.SetNewArray(&newArray_vectorlElcfipluscLcLMCVertexmUgR);
      instance.SetDelete(&delete_vectorlElcfipluscLcLMCVertexmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlElcfipluscLcLMCVertexmUgR);
      instance.SetDestructor(&destruct_vectorlElcfipluscLcLMCVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lcfiplus::MCVertex*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<lcfiplus::MCVertex*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElcfipluscLcLMCVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lcfiplus::MCVertex*>*)0x0)->GetClass();
      vectorlElcfipluscLcLMCVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElcfipluscLcLMCVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElcfipluscLcLMCVertexmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::MCVertex*> : new vector<lcfiplus::MCVertex*>;
   }
   static void *newArray_vectorlElcfipluscLcLMCVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::MCVertex*>[nElements] : new vector<lcfiplus::MCVertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElcfipluscLcLMCVertexmUgR(void *p) {
      delete ((vector<lcfiplus::MCVertex*>*)p);
   }
   static void deleteArray_vectorlElcfipluscLcLMCVertexmUgR(void *p) {
      delete [] ((vector<lcfiplus::MCVertex*>*)p);
   }
   static void destruct_vectorlElcfipluscLcLMCVertexmUgR(void *p) {
      typedef vector<lcfiplus::MCVertex*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lcfiplus::MCVertex*>

namespace ROOT {
   static TClass *vectorlElcfipluscLcLMCParticlemUgR_Dictionary();
   static void vectorlElcfipluscLcLMCParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlElcfipluscLcLMCParticlemUgR(void *p = 0);
   static void *newArray_vectorlElcfipluscLcLMCParticlemUgR(Long_t size, void *p);
   static void delete_vectorlElcfipluscLcLMCParticlemUgR(void *p);
   static void deleteArray_vectorlElcfipluscLcLMCParticlemUgR(void *p);
   static void destruct_vectorlElcfipluscLcLMCParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lcfiplus::MCParticle*>*)
   {
      vector<lcfiplus::MCParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lcfiplus::MCParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lcfiplus::MCParticle*>", -2, "vector", 339,
                  typeid(vector<lcfiplus::MCParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElcfipluscLcLMCParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<lcfiplus::MCParticle*>) );
      instance.SetNew(&new_vectorlElcfipluscLcLMCParticlemUgR);
      instance.SetNewArray(&newArray_vectorlElcfipluscLcLMCParticlemUgR);
      instance.SetDelete(&delete_vectorlElcfipluscLcLMCParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlElcfipluscLcLMCParticlemUgR);
      instance.SetDestructor(&destruct_vectorlElcfipluscLcLMCParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lcfiplus::MCParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<lcfiplus::MCParticle*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElcfipluscLcLMCParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lcfiplus::MCParticle*>*)0x0)->GetClass();
      vectorlElcfipluscLcLMCParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElcfipluscLcLMCParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElcfipluscLcLMCParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::MCParticle*> : new vector<lcfiplus::MCParticle*>;
   }
   static void *newArray_vectorlElcfipluscLcLMCParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::MCParticle*>[nElements] : new vector<lcfiplus::MCParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElcfipluscLcLMCParticlemUgR(void *p) {
      delete ((vector<lcfiplus::MCParticle*>*)p);
   }
   static void deleteArray_vectorlElcfipluscLcLMCParticlemUgR(void *p) {
      delete [] ((vector<lcfiplus::MCParticle*>*)p);
   }
   static void destruct_vectorlElcfipluscLcLMCParticlemUgR(void *p) {
      typedef vector<lcfiplus::MCParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lcfiplus::MCParticle*>

namespace ROOT {
   static TClass *vectorlElcfipluscLcLMCColorSingletmUgR_Dictionary();
   static void vectorlElcfipluscLcLMCColorSingletmUgR_TClassManip(TClass*);
   static void *new_vectorlElcfipluscLcLMCColorSingletmUgR(void *p = 0);
   static void *newArray_vectorlElcfipluscLcLMCColorSingletmUgR(Long_t size, void *p);
   static void delete_vectorlElcfipluscLcLMCColorSingletmUgR(void *p);
   static void deleteArray_vectorlElcfipluscLcLMCColorSingletmUgR(void *p);
   static void destruct_vectorlElcfipluscLcLMCColorSingletmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lcfiplus::MCColorSinglet*>*)
   {
      vector<lcfiplus::MCColorSinglet*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lcfiplus::MCColorSinglet*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lcfiplus::MCColorSinglet*>", -2, "vector", 339,
                  typeid(vector<lcfiplus::MCColorSinglet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElcfipluscLcLMCColorSingletmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<lcfiplus::MCColorSinglet*>) );
      instance.SetNew(&new_vectorlElcfipluscLcLMCColorSingletmUgR);
      instance.SetNewArray(&newArray_vectorlElcfipluscLcLMCColorSingletmUgR);
      instance.SetDelete(&delete_vectorlElcfipluscLcLMCColorSingletmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlElcfipluscLcLMCColorSingletmUgR);
      instance.SetDestructor(&destruct_vectorlElcfipluscLcLMCColorSingletmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lcfiplus::MCColorSinglet*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<lcfiplus::MCColorSinglet*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElcfipluscLcLMCColorSingletmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lcfiplus::MCColorSinglet*>*)0x0)->GetClass();
      vectorlElcfipluscLcLMCColorSingletmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElcfipluscLcLMCColorSingletmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElcfipluscLcLMCColorSingletmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::MCColorSinglet*> : new vector<lcfiplus::MCColorSinglet*>;
   }
   static void *newArray_vectorlElcfipluscLcLMCColorSingletmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::MCColorSinglet*>[nElements] : new vector<lcfiplus::MCColorSinglet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElcfipluscLcLMCColorSingletmUgR(void *p) {
      delete ((vector<lcfiplus::MCColorSinglet*>*)p);
   }
   static void deleteArray_vectorlElcfipluscLcLMCColorSingletmUgR(void *p) {
      delete [] ((vector<lcfiplus::MCColorSinglet*>*)p);
   }
   static void destruct_vectorlElcfipluscLcLMCColorSingletmUgR(void *p) {
      typedef vector<lcfiplus::MCColorSinglet*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lcfiplus::MCColorSinglet*>

namespace ROOT {
   static TClass *vectorlElcfipluscLcLJetmUgR_Dictionary();
   static void vectorlElcfipluscLcLJetmUgR_TClassManip(TClass*);
   static void *new_vectorlElcfipluscLcLJetmUgR(void *p = 0);
   static void *newArray_vectorlElcfipluscLcLJetmUgR(Long_t size, void *p);
   static void delete_vectorlElcfipluscLcLJetmUgR(void *p);
   static void deleteArray_vectorlElcfipluscLcLJetmUgR(void *p);
   static void destruct_vectorlElcfipluscLcLJetmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lcfiplus::Jet*>*)
   {
      vector<lcfiplus::Jet*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lcfiplus::Jet*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lcfiplus::Jet*>", -2, "vector", 339,
                  typeid(vector<lcfiplus::Jet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElcfipluscLcLJetmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<lcfiplus::Jet*>) );
      instance.SetNew(&new_vectorlElcfipluscLcLJetmUgR);
      instance.SetNewArray(&newArray_vectorlElcfipluscLcLJetmUgR);
      instance.SetDelete(&delete_vectorlElcfipluscLcLJetmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlElcfipluscLcLJetmUgR);
      instance.SetDestructor(&destruct_vectorlElcfipluscLcLJetmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lcfiplus::Jet*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<lcfiplus::Jet*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElcfipluscLcLJetmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lcfiplus::Jet*>*)0x0)->GetClass();
      vectorlElcfipluscLcLJetmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElcfipluscLcLJetmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElcfipluscLcLJetmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::Jet*> : new vector<lcfiplus::Jet*>;
   }
   static void *newArray_vectorlElcfipluscLcLJetmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::Jet*>[nElements] : new vector<lcfiplus::Jet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElcfipluscLcLJetmUgR(void *p) {
      delete ((vector<lcfiplus::Jet*>*)p);
   }
   static void deleteArray_vectorlElcfipluscLcLJetmUgR(void *p) {
      delete [] ((vector<lcfiplus::Jet*>*)p);
   }
   static void destruct_vectorlElcfipluscLcLJetmUgR(void *p) {
      typedef vector<lcfiplus::Jet*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lcfiplus::Jet*>

namespace ROOT {
   static TClass *vectorlElcfipluscLcLFlavtagCategorygR_Dictionary();
   static void vectorlElcfipluscLcLFlavtagCategorygR_TClassManip(TClass*);
   static void *new_vectorlElcfipluscLcLFlavtagCategorygR(void *p = 0);
   static void *newArray_vectorlElcfipluscLcLFlavtagCategorygR(Long_t size, void *p);
   static void delete_vectorlElcfipluscLcLFlavtagCategorygR(void *p);
   static void deleteArray_vectorlElcfipluscLcLFlavtagCategorygR(void *p);
   static void destruct_vectorlElcfipluscLcLFlavtagCategorygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<lcfiplus::FlavtagCategory>*)
   {
      vector<lcfiplus::FlavtagCategory> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<lcfiplus::FlavtagCategory>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<lcfiplus::FlavtagCategory>", -2, "vector", 339,
                  typeid(vector<lcfiplus::FlavtagCategory>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElcfipluscLcLFlavtagCategorygR_Dictionary, isa_proxy, 0,
                  sizeof(vector<lcfiplus::FlavtagCategory>) );
      instance.SetNew(&new_vectorlElcfipluscLcLFlavtagCategorygR);
      instance.SetNewArray(&newArray_vectorlElcfipluscLcLFlavtagCategorygR);
      instance.SetDelete(&delete_vectorlElcfipluscLcLFlavtagCategorygR);
      instance.SetDeleteArray(&deleteArray_vectorlElcfipluscLcLFlavtagCategorygR);
      instance.SetDestructor(&destruct_vectorlElcfipluscLcLFlavtagCategorygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<lcfiplus::FlavtagCategory> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<lcfiplus::FlavtagCategory>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElcfipluscLcLFlavtagCategorygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<lcfiplus::FlavtagCategory>*)0x0)->GetClass();
      vectorlElcfipluscLcLFlavtagCategorygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElcfipluscLcLFlavtagCategorygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElcfipluscLcLFlavtagCategorygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::FlavtagCategory> : new vector<lcfiplus::FlavtagCategory>;
   }
   static void *newArray_vectorlElcfipluscLcLFlavtagCategorygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<lcfiplus::FlavtagCategory>[nElements] : new vector<lcfiplus::FlavtagCategory>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElcfipluscLcLFlavtagCategorygR(void *p) {
      delete ((vector<lcfiplus::FlavtagCategory>*)p);
   }
   static void deleteArray_vectorlElcfipluscLcLFlavtagCategorygR(void *p) {
      delete [] ((vector<lcfiplus::FlavtagCategory>*)p);
   }
   static void destruct_vectorlElcfipluscLcLFlavtagCategorygR(void *p) {
      typedef vector<lcfiplus::FlavtagCategory> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<lcfiplus::FlavtagCategory>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 339,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 339,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEconstsPlcfipluscLcLVertexmUgR_Dictionary();
   static void vectorlEconstsPlcfipluscLcLVertexmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPlcfipluscLcLVertexmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPlcfipluscLcLVertexmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPlcfipluscLcLVertexmUgR(void *p);
   static void deleteArray_vectorlEconstsPlcfipluscLcLVertexmUgR(void *p);
   static void destruct_vectorlEconstsPlcfipluscLcLVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const lcfiplus::Vertex*>*)
   {
      vector<const lcfiplus::Vertex*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const lcfiplus::Vertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const lcfiplus::Vertex*>", -2, "vector", 339,
                  typeid(vector<const lcfiplus::Vertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPlcfipluscLcLVertexmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const lcfiplus::Vertex*>) );
      instance.SetNew(&new_vectorlEconstsPlcfipluscLcLVertexmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPlcfipluscLcLVertexmUgR);
      instance.SetDelete(&delete_vectorlEconstsPlcfipluscLcLVertexmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPlcfipluscLcLVertexmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPlcfipluscLcLVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const lcfiplus::Vertex*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const lcfiplus::Vertex*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPlcfipluscLcLVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const lcfiplus::Vertex*>*)0x0)->GetClass();
      vectorlEconstsPlcfipluscLcLVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPlcfipluscLcLVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPlcfipluscLcLVertexmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::Vertex*> : new vector<const lcfiplus::Vertex*>;
   }
   static void *newArray_vectorlEconstsPlcfipluscLcLVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::Vertex*>[nElements] : new vector<const lcfiplus::Vertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPlcfipluscLcLVertexmUgR(void *p) {
      delete ((vector<const lcfiplus::Vertex*>*)p);
   }
   static void deleteArray_vectorlEconstsPlcfipluscLcLVertexmUgR(void *p) {
      delete [] ((vector<const lcfiplus::Vertex*>*)p);
   }
   static void destruct_vectorlEconstsPlcfipluscLcLVertexmUgR(void *p) {
      typedef vector<const lcfiplus::Vertex*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const lcfiplus::Vertex*>

namespace ROOT {
   static TClass *vectorlEconstsPlcfipluscLcLTrackmUgR_Dictionary();
   static void vectorlEconstsPlcfipluscLcLTrackmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPlcfipluscLcLTrackmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPlcfipluscLcLTrackmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPlcfipluscLcLTrackmUgR(void *p);
   static void deleteArray_vectorlEconstsPlcfipluscLcLTrackmUgR(void *p);
   static void destruct_vectorlEconstsPlcfipluscLcLTrackmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const lcfiplus::Track*>*)
   {
      vector<const lcfiplus::Track*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const lcfiplus::Track*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const lcfiplus::Track*>", -2, "vector", 339,
                  typeid(vector<const lcfiplus::Track*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPlcfipluscLcLTrackmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const lcfiplus::Track*>) );
      instance.SetNew(&new_vectorlEconstsPlcfipluscLcLTrackmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPlcfipluscLcLTrackmUgR);
      instance.SetDelete(&delete_vectorlEconstsPlcfipluscLcLTrackmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPlcfipluscLcLTrackmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPlcfipluscLcLTrackmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const lcfiplus::Track*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const lcfiplus::Track*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPlcfipluscLcLTrackmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const lcfiplus::Track*>*)0x0)->GetClass();
      vectorlEconstsPlcfipluscLcLTrackmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPlcfipluscLcLTrackmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPlcfipluscLcLTrackmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::Track*> : new vector<const lcfiplus::Track*>;
   }
   static void *newArray_vectorlEconstsPlcfipluscLcLTrackmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::Track*>[nElements] : new vector<const lcfiplus::Track*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPlcfipluscLcLTrackmUgR(void *p) {
      delete ((vector<const lcfiplus::Track*>*)p);
   }
   static void deleteArray_vectorlEconstsPlcfipluscLcLTrackmUgR(void *p) {
      delete [] ((vector<const lcfiplus::Track*>*)p);
   }
   static void destruct_vectorlEconstsPlcfipluscLcLTrackmUgR(void *p) {
      typedef vector<const lcfiplus::Track*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const lcfiplus::Track*>

namespace ROOT {
   static TClass *vectorlEconstsPlcfipluscLcLNeutralmUgR_Dictionary();
   static void vectorlEconstsPlcfipluscLcLNeutralmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPlcfipluscLcLNeutralmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPlcfipluscLcLNeutralmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPlcfipluscLcLNeutralmUgR(void *p);
   static void deleteArray_vectorlEconstsPlcfipluscLcLNeutralmUgR(void *p);
   static void destruct_vectorlEconstsPlcfipluscLcLNeutralmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const lcfiplus::Neutral*>*)
   {
      vector<const lcfiplus::Neutral*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const lcfiplus::Neutral*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const lcfiplus::Neutral*>", -2, "vector", 339,
                  typeid(vector<const lcfiplus::Neutral*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPlcfipluscLcLNeutralmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const lcfiplus::Neutral*>) );
      instance.SetNew(&new_vectorlEconstsPlcfipluscLcLNeutralmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPlcfipluscLcLNeutralmUgR);
      instance.SetDelete(&delete_vectorlEconstsPlcfipluscLcLNeutralmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPlcfipluscLcLNeutralmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPlcfipluscLcLNeutralmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const lcfiplus::Neutral*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const lcfiplus::Neutral*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPlcfipluscLcLNeutralmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const lcfiplus::Neutral*>*)0x0)->GetClass();
      vectorlEconstsPlcfipluscLcLNeutralmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPlcfipluscLcLNeutralmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPlcfipluscLcLNeutralmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::Neutral*> : new vector<const lcfiplus::Neutral*>;
   }
   static void *newArray_vectorlEconstsPlcfipluscLcLNeutralmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::Neutral*>[nElements] : new vector<const lcfiplus::Neutral*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPlcfipluscLcLNeutralmUgR(void *p) {
      delete ((vector<const lcfiplus::Neutral*>*)p);
   }
   static void deleteArray_vectorlEconstsPlcfipluscLcLNeutralmUgR(void *p) {
      delete [] ((vector<const lcfiplus::Neutral*>*)p);
   }
   static void destruct_vectorlEconstsPlcfipluscLcLNeutralmUgR(void *p) {
      typedef vector<const lcfiplus::Neutral*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const lcfiplus::Neutral*>

namespace ROOT {
   static TClass *vectorlEconstsPlcfipluscLcLMCVertexmUgR_Dictionary();
   static void vectorlEconstsPlcfipluscLcLMCVertexmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPlcfipluscLcLMCVertexmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPlcfipluscLcLMCVertexmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPlcfipluscLcLMCVertexmUgR(void *p);
   static void deleteArray_vectorlEconstsPlcfipluscLcLMCVertexmUgR(void *p);
   static void destruct_vectorlEconstsPlcfipluscLcLMCVertexmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const lcfiplus::MCVertex*>*)
   {
      vector<const lcfiplus::MCVertex*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const lcfiplus::MCVertex*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const lcfiplus::MCVertex*>", -2, "vector", 339,
                  typeid(vector<const lcfiplus::MCVertex*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPlcfipluscLcLMCVertexmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const lcfiplus::MCVertex*>) );
      instance.SetNew(&new_vectorlEconstsPlcfipluscLcLMCVertexmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPlcfipluscLcLMCVertexmUgR);
      instance.SetDelete(&delete_vectorlEconstsPlcfipluscLcLMCVertexmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPlcfipluscLcLMCVertexmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPlcfipluscLcLMCVertexmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const lcfiplus::MCVertex*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const lcfiplus::MCVertex*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPlcfipluscLcLMCVertexmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const lcfiplus::MCVertex*>*)0x0)->GetClass();
      vectorlEconstsPlcfipluscLcLMCVertexmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPlcfipluscLcLMCVertexmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPlcfipluscLcLMCVertexmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::MCVertex*> : new vector<const lcfiplus::MCVertex*>;
   }
   static void *newArray_vectorlEconstsPlcfipluscLcLMCVertexmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::MCVertex*>[nElements] : new vector<const lcfiplus::MCVertex*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPlcfipluscLcLMCVertexmUgR(void *p) {
      delete ((vector<const lcfiplus::MCVertex*>*)p);
   }
   static void deleteArray_vectorlEconstsPlcfipluscLcLMCVertexmUgR(void *p) {
      delete [] ((vector<const lcfiplus::MCVertex*>*)p);
   }
   static void destruct_vectorlEconstsPlcfipluscLcLMCVertexmUgR(void *p) {
      typedef vector<const lcfiplus::MCVertex*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const lcfiplus::MCVertex*>

namespace ROOT {
   static TClass *vectorlEconstsPlcfipluscLcLMCParticlemUgR_Dictionary();
   static void vectorlEconstsPlcfipluscLcLMCParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPlcfipluscLcLMCParticlemUgR(void *p = 0);
   static void *newArray_vectorlEconstsPlcfipluscLcLMCParticlemUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPlcfipluscLcLMCParticlemUgR(void *p);
   static void deleteArray_vectorlEconstsPlcfipluscLcLMCParticlemUgR(void *p);
   static void destruct_vectorlEconstsPlcfipluscLcLMCParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const lcfiplus::MCParticle*>*)
   {
      vector<const lcfiplus::MCParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const lcfiplus::MCParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const lcfiplus::MCParticle*>", -2, "vector", 339,
                  typeid(vector<const lcfiplus::MCParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPlcfipluscLcLMCParticlemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const lcfiplus::MCParticle*>) );
      instance.SetNew(&new_vectorlEconstsPlcfipluscLcLMCParticlemUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPlcfipluscLcLMCParticlemUgR);
      instance.SetDelete(&delete_vectorlEconstsPlcfipluscLcLMCParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPlcfipluscLcLMCParticlemUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPlcfipluscLcLMCParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const lcfiplus::MCParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const lcfiplus::MCParticle*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPlcfipluscLcLMCParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const lcfiplus::MCParticle*>*)0x0)->GetClass();
      vectorlEconstsPlcfipluscLcLMCParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPlcfipluscLcLMCParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPlcfipluscLcLMCParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::MCParticle*> : new vector<const lcfiplus::MCParticle*>;
   }
   static void *newArray_vectorlEconstsPlcfipluscLcLMCParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::MCParticle*>[nElements] : new vector<const lcfiplus::MCParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPlcfipluscLcLMCParticlemUgR(void *p) {
      delete ((vector<const lcfiplus::MCParticle*>*)p);
   }
   static void deleteArray_vectorlEconstsPlcfipluscLcLMCParticlemUgR(void *p) {
      delete [] ((vector<const lcfiplus::MCParticle*>*)p);
   }
   static void destruct_vectorlEconstsPlcfipluscLcLMCParticlemUgR(void *p) {
      typedef vector<const lcfiplus::MCParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const lcfiplus::MCParticle*>

namespace ROOT {
   static TClass *vectorlEconstsPlcfipluscLcLMCColorSingletmUgR_Dictionary();
   static void vectorlEconstsPlcfipluscLcLMCColorSingletmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(void *p);
   static void deleteArray_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(void *p);
   static void destruct_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const lcfiplus::MCColorSinglet*>*)
   {
      vector<const lcfiplus::MCColorSinglet*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const lcfiplus::MCColorSinglet*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const lcfiplus::MCColorSinglet*>", -2, "vector", 339,
                  typeid(vector<const lcfiplus::MCColorSinglet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPlcfipluscLcLMCColorSingletmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const lcfiplus::MCColorSinglet*>) );
      instance.SetNew(&new_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR);
      instance.SetDelete(&delete_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const lcfiplus::MCColorSinglet*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const lcfiplus::MCColorSinglet*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPlcfipluscLcLMCColorSingletmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const lcfiplus::MCColorSinglet*>*)0x0)->GetClass();
      vectorlEconstsPlcfipluscLcLMCColorSingletmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPlcfipluscLcLMCColorSingletmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::MCColorSinglet*> : new vector<const lcfiplus::MCColorSinglet*>;
   }
   static void *newArray_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::MCColorSinglet*>[nElements] : new vector<const lcfiplus::MCColorSinglet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(void *p) {
      delete ((vector<const lcfiplus::MCColorSinglet*>*)p);
   }
   static void deleteArray_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(void *p) {
      delete [] ((vector<const lcfiplus::MCColorSinglet*>*)p);
   }
   static void destruct_vectorlEconstsPlcfipluscLcLMCColorSingletmUgR(void *p) {
      typedef vector<const lcfiplus::MCColorSinglet*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const lcfiplus::MCColorSinglet*>

namespace ROOT {
   static TClass *vectorlEconstsPlcfipluscLcLJetmUgR_Dictionary();
   static void vectorlEconstsPlcfipluscLcLJetmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPlcfipluscLcLJetmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPlcfipluscLcLJetmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPlcfipluscLcLJetmUgR(void *p);
   static void deleteArray_vectorlEconstsPlcfipluscLcLJetmUgR(void *p);
   static void destruct_vectorlEconstsPlcfipluscLcLJetmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const lcfiplus::Jet*>*)
   {
      vector<const lcfiplus::Jet*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const lcfiplus::Jet*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const lcfiplus::Jet*>", -2, "vector", 339,
                  typeid(vector<const lcfiplus::Jet*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPlcfipluscLcLJetmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const lcfiplus::Jet*>) );
      instance.SetNew(&new_vectorlEconstsPlcfipluscLcLJetmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPlcfipluscLcLJetmUgR);
      instance.SetDelete(&delete_vectorlEconstsPlcfipluscLcLJetmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPlcfipluscLcLJetmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPlcfipluscLcLJetmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const lcfiplus::Jet*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<const lcfiplus::Jet*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPlcfipluscLcLJetmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const lcfiplus::Jet*>*)0x0)->GetClass();
      vectorlEconstsPlcfipluscLcLJetmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPlcfipluscLcLJetmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPlcfipluscLcLJetmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::Jet*> : new vector<const lcfiplus::Jet*>;
   }
   static void *newArray_vectorlEconstsPlcfipluscLcLJetmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const lcfiplus::Jet*>[nElements] : new vector<const lcfiplus::Jet*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPlcfipluscLcLJetmUgR(void *p) {
      delete ((vector<const lcfiplus::Jet*>*)p);
   }
   static void deleteArray_vectorlEconstsPlcfipluscLcLJetmUgR(void *p) {
      delete [] ((vector<const lcfiplus::Jet*>*)p);
   }
   static void destruct_vectorlEconstsPlcfipluscLcLJetmUgR(void *p) {
      typedef vector<const lcfiplus::Jet*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const lcfiplus::Jet*>

namespace ROOT {
   static TClass *vectorlETMVAcLcLReadermUgR_Dictionary();
   static void vectorlETMVAcLcLReadermUgR_TClassManip(TClass*);
   static void *new_vectorlETMVAcLcLReadermUgR(void *p = 0);
   static void *newArray_vectorlETMVAcLcLReadermUgR(Long_t size, void *p);
   static void delete_vectorlETMVAcLcLReadermUgR(void *p);
   static void deleteArray_vectorlETMVAcLcLReadermUgR(void *p);
   static void destruct_vectorlETMVAcLcLReadermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMVA::Reader*>*)
   {
      vector<TMVA::Reader*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMVA::Reader*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMVA::Reader*>", -2, "vector", 339,
                  typeid(vector<TMVA::Reader*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETMVAcLcLReadermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TMVA::Reader*>) );
      instance.SetNew(&new_vectorlETMVAcLcLReadermUgR);
      instance.SetNewArray(&newArray_vectorlETMVAcLcLReadermUgR);
      instance.SetDelete(&delete_vectorlETMVAcLcLReadermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMVAcLcLReadermUgR);
      instance.SetDestructor(&destruct_vectorlETMVAcLcLReadermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMVA::Reader*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TMVA::Reader*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMVAcLcLReadermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TMVA::Reader*>*)0x0)->GetClass();
      vectorlETMVAcLcLReadermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMVAcLcLReadermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMVAcLcLReadermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::Reader*> : new vector<TMVA::Reader*>;
   }
   static void *newArray_vectorlETMVAcLcLReadermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TMVA::Reader*>[nElements] : new vector<TMVA::Reader*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMVAcLcLReadermUgR(void *p) {
      delete ((vector<TMVA::Reader*>*)p);
   }
   static void deleteArray_vectorlETMVAcLcLReadermUgR(void *p) {
      delete [] ((vector<TMVA::Reader*>*)p);
   }
   static void destruct_vectorlETMVAcLcLReadermUgR(void *p) {
      typedef vector<TMVA::Reader*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TMVA::Reader*>

namespace ROOT {
   static TClass *vectorlEEVENTcLcLClustermUgR_Dictionary();
   static void vectorlEEVENTcLcLClustermUgR_TClassManip(TClass*);
   static void *new_vectorlEEVENTcLcLClustermUgR(void *p = 0);
   static void *newArray_vectorlEEVENTcLcLClustermUgR(Long_t size, void *p);
   static void delete_vectorlEEVENTcLcLClustermUgR(void *p);
   static void deleteArray_vectorlEEVENTcLcLClustermUgR(void *p);
   static void destruct_vectorlEEVENTcLcLClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EVENT::Cluster*>*)
   {
      vector<EVENT::Cluster*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EVENT::Cluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EVENT::Cluster*>", -2, "vector", 339,
                  typeid(vector<EVENT::Cluster*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEVENTcLcLClustermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<EVENT::Cluster*>) );
      instance.SetNew(&new_vectorlEEVENTcLcLClustermUgR);
      instance.SetNewArray(&newArray_vectorlEEVENTcLcLClustermUgR);
      instance.SetDelete(&delete_vectorlEEVENTcLcLClustermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEEVENTcLcLClustermUgR);
      instance.SetDestructor(&destruct_vectorlEEVENTcLcLClustermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EVENT::Cluster*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<EVENT::Cluster*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEVENTcLcLClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<EVENT::Cluster*>*)0x0)->GetClass();
      vectorlEEVENTcLcLClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEVENTcLcLClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEVENTcLcLClustermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EVENT::Cluster*> : new vector<EVENT::Cluster*>;
   }
   static void *newArray_vectorlEEVENTcLcLClustermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EVENT::Cluster*>[nElements] : new vector<EVENT::Cluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEVENTcLcLClustermUgR(void *p) {
      delete ((vector<EVENT::Cluster*>*)p);
   }
   static void deleteArray_vectorlEEVENTcLcLClustermUgR(void *p) {
      delete [] ((vector<EVENT::Cluster*>*)p);
   }
   static void destruct_vectorlEEVENTcLcLClustermUgR(void *p) {
      typedef vector<EVENT::Cluster*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<EVENT::Cluster*>

namespace ROOT {
   static TClass *maplEstringcOlcfipluscLcLParametersgR_Dictionary();
   static void maplEstringcOlcfipluscLcLParametersgR_TClassManip(TClass*);
   static void *new_maplEstringcOlcfipluscLcLParametersgR(void *p = 0);
   static void *newArray_maplEstringcOlcfipluscLcLParametersgR(Long_t size, void *p);
   static void delete_maplEstringcOlcfipluscLcLParametersgR(void *p);
   static void deleteArray_maplEstringcOlcfipluscLcLParametersgR(void *p);
   static void destruct_maplEstringcOlcfipluscLcLParametersgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,lcfiplus::Parameters>*)
   {
      map<string,lcfiplus::Parameters> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,lcfiplus::Parameters>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,lcfiplus::Parameters>", -2, "map", 100,
                  typeid(map<string,lcfiplus::Parameters>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOlcfipluscLcLParametersgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,lcfiplus::Parameters>) );
      instance.SetNew(&new_maplEstringcOlcfipluscLcLParametersgR);
      instance.SetNewArray(&newArray_maplEstringcOlcfipluscLcLParametersgR);
      instance.SetDelete(&delete_maplEstringcOlcfipluscLcLParametersgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOlcfipluscLcLParametersgR);
      instance.SetDestructor(&destruct_maplEstringcOlcfipluscLcLParametersgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,lcfiplus::Parameters> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,lcfiplus::Parameters>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOlcfipluscLcLParametersgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,lcfiplus::Parameters>*)0x0)->GetClass();
      maplEstringcOlcfipluscLcLParametersgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOlcfipluscLcLParametersgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOlcfipluscLcLParametersgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,lcfiplus::Parameters> : new map<string,lcfiplus::Parameters>;
   }
   static void *newArray_maplEstringcOlcfipluscLcLParametersgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,lcfiplus::Parameters>[nElements] : new map<string,lcfiplus::Parameters>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOlcfipluscLcLParametersgR(void *p) {
      delete ((map<string,lcfiplus::Parameters>*)p);
   }
   static void deleteArray_maplEstringcOlcfipluscLcLParametersgR(void *p) {
      delete [] ((map<string,lcfiplus::Parameters>*)p);
   }
   static void destruct_maplEstringcOlcfipluscLcLParametersgR(void *p) {
      typedef map<string,lcfiplus::Parameters> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,lcfiplus::Parameters>

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = 0);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 100,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,double>*)0x0)->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete ((map<string,double>*)p);
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] ((map<string,double>*)p);
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace ROOT {
   static TClass *maplEconstsPlcfipluscLcLTrackmUcOdoublegR_Dictionary();
   static void maplEconstsPlcfipluscLcLTrackmUcOdoublegR_TClassManip(TClass*);
   static void *new_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(void *p = 0);
   static void *newArray_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(Long_t size, void *p);
   static void delete_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(void *p);
   static void deleteArray_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(void *p);
   static void destruct_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<const lcfiplus::Track*,double>*)
   {
      map<const lcfiplus::Track*,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<const lcfiplus::Track*,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<const lcfiplus::Track*,double>", -2, "map", 100,
                  typeid(map<const lcfiplus::Track*,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEconstsPlcfipluscLcLTrackmUcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<const lcfiplus::Track*,double>) );
      instance.SetNew(&new_maplEconstsPlcfipluscLcLTrackmUcOdoublegR);
      instance.SetNewArray(&newArray_maplEconstsPlcfipluscLcLTrackmUcOdoublegR);
      instance.SetDelete(&delete_maplEconstsPlcfipluscLcLTrackmUcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEconstsPlcfipluscLcLTrackmUcOdoublegR);
      instance.SetDestructor(&destruct_maplEconstsPlcfipluscLcLTrackmUcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<const lcfiplus::Track*,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<const lcfiplus::Track*,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEconstsPlcfipluscLcLTrackmUcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<const lcfiplus::Track*,double>*)0x0)->GetClass();
      maplEconstsPlcfipluscLcLTrackmUcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEconstsPlcfipluscLcLTrackmUcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const lcfiplus::Track*,double> : new map<const lcfiplus::Track*,double>;
   }
   static void *newArray_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<const lcfiplus::Track*,double>[nElements] : new map<const lcfiplus::Track*,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(void *p) {
      delete ((map<const lcfiplus::Track*,double>*)p);
   }
   static void deleteArray_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(void *p) {
      delete [] ((map<const lcfiplus::Track*,double>*)p);
   }
   static void destruct_maplEconstsPlcfipluscLcLTrackmUcOdoublegR(void *p) {
      typedef map<const lcfiplus::Track*,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<const lcfiplus::Track*,double>

namespace {
  void TriggerDictionaryInitialization_dict_Impl() {
    static const char* headers[] = {
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/EventStore.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/LCIOStorer.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TreeStorer.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/JetFinder.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/process.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/FlavorTag.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/MakeNtuple.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TrainMVA.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/ReadMVA.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/testproc.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TrackNtuple.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/VertexMassRecovery.h",
"/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/VertexNtuple.h",
0
    };
    static const char* includePaths[] = {
"/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/include",
"/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/include",
"/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/include",
"/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/include/gear",
"/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib/CLHEP-2.3.4.3/../../include",
"/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/include",
"/sw/ilc/ilcsoft/gcc820/root/6.18.04/include",
"/gpfs/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  Track;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  Neutral;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  MCParticle;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  MCColorSinglet;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  Vertex;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  Jet;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  MCVertex;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  EventStoreObserver;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  EventStore;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h")))  Algorithm;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/LCIOStorer.h")))  LCIOStorer;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TreeStorer.h")))  TreeStorer;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/process.h")))  PrimaryVertexFinder;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/process.h")))  BuildUpVertex;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/process.h")))  JetClustering;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/process.h")))  JetVertexRefiner;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/FlavorTag.h")))  FlavorTag;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/MakeNtuple.h")))  MakeNtuple;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TrainMVA.h")))  TrainMVA;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/ReadMVA.h")))  ReadMVA;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/testproc.h")))  ZHHAlgo;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/testproc.h")))  TestAlgo;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/testproc.h")))  VertexAnalysis;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/testproc.h")))  FlavtagReader;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/testproc.h")))  TestAlgoV0;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TrackNtuple.h")))  TrackNtuple;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/VertexMassRecovery.h")))  VertexMassRecovery;}
namespace lcfiplus{class __attribute__((annotate("$clingAutoload$/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/VertexNtuple.h")))  VertexNtuple;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/lcfiplus.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/EventStore.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/LCIOStorer.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TreeStorer.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/JetFinder.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/process.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/FlavorTag.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/MakeNtuple.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TrainMVA.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/ReadMVA.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/testproc.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/TrackNtuple.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/VertexMassRecovery.h"
#include "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/include/VertexNtuple.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"lcfiplus::Algorithm", payloadCode, "@",
"lcfiplus::BuildUpVertex", payloadCode, "@",
"lcfiplus::EventStore", payloadCode, "@",
"lcfiplus::EventStoreObserver", payloadCode, "@",
"lcfiplus::FlavorTag", payloadCode, "@",
"lcfiplus::FlavtagReader", payloadCode, "@",
"lcfiplus::Jet", payloadCode, "@",
"lcfiplus::JetClustering", payloadCode, "@",
"lcfiplus::JetVertexRefiner", payloadCode, "@",
"lcfiplus::LCIOStorer", payloadCode, "@",
"lcfiplus::MCColorSinglet", payloadCode, "@",
"lcfiplus::MCParticle", payloadCode, "@",
"lcfiplus::MCVertex", payloadCode, "@",
"lcfiplus::MakeNtuple", payloadCode, "@",
"lcfiplus::Neutral", payloadCode, "@",
"lcfiplus::PrimaryVertexFinder", payloadCode, "@",
"lcfiplus::ReadMVA", payloadCode, "@",
"lcfiplus::TestAlgo", payloadCode, "@",
"lcfiplus::TestAlgoV0", payloadCode, "@",
"lcfiplus::Track", payloadCode, "@",
"lcfiplus::TrackNtuple", payloadCode, "@",
"lcfiplus::TrainMVA", payloadCode, "@",
"lcfiplus::TreeStorer", payloadCode, "@",
"lcfiplus::Vertex", payloadCode, "@",
"lcfiplus::VertexAnalysis", payloadCode, "@",
"lcfiplus::VertexMassRecovery", payloadCode, "@",
"lcfiplus::VertexNtuple", payloadCode, "@",
"lcfiplus::ZHHAlgo", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_dict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_dict() {
  TriggerDictionaryInitialization_dict_Impl();
}
