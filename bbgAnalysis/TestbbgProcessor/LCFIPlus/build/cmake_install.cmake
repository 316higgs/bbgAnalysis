# Install script for directory: /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/rootdict/dict_rdict.pcm")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so.0.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so.0.8"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/MarlinUtil/v01-15-01/lib:/sw/ilc/ilcsoft/gcc820/CED/v01-09-03/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/DD4hep/v01-11-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/LCFIVertex/v00-08/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES
    "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/lib/libLCFIPlus.so.0.8.0"
    "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/lib/libLCFIPlus.so.0.8"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so.0.8.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so.0.8"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/MarlinUtil/v01-15-01/lib:/sw/ilc/ilcsoft/gcc820/CED/v01-09-03/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/DD4hep/v01-11-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/LCFIVertex/v00-08/lib::::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/MarlinUtil/v01-15-01/lib:/sw/ilc/ilcsoft/gcc820/CED/v01-09-03/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/DD4hep/v01-11-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/LCFIVertex/v00-08/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.30-e5b21/x86_64-centos7/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so"
         RPATH "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/MarlinUtil/v01-15-01/lib:/sw/ilc/ilcsoft/gcc820/CED/v01-09-03/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/DD4hep/v01-11-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/LCFIVertex/v00-08/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/lib/libLCFIPlus.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so"
         OLD_RPATH "/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/MarlinUtil/v01-15-01/lib:/sw/ilc/ilcsoft/gcc820/CED/v01-09-03/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/DD4hep/v01-11-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/LCFIVertex/v00-08/lib::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/MarlinUtil/v01-15-01/lib:/sw/ilc/ilcsoft/gcc820/CED/v01-09-03/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/DD4hep/v01-11-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/LCFIVertex/v00-08/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.30-e5b21/x86_64-centos7/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libLCFIPlus.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/doc/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
