# Install script for directory: /home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor")
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
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so.0.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so.0.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/lib:/sw/ilc/ilcsoft/gcc820/FastJet/3.2.1/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES
    "/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/build/lib/libQQbarProcessor.so.0.1.0"
    "/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/build/lib/libQQbarProcessor.so.0.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so.0.1.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so.0.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/sw/ilc/ilcsoft/gcc820/FastJet/3.2.1/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/lib:/sw/ilc/ilcsoft/gcc820/FastJet/3.2.1/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.30-e5b21/x86_64-centos7/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so"
         RPATH "/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/lib:/sw/ilc/ilcsoft/gcc820/FastJet/3.2.1/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/build/lib/libQQbarProcessor.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so"
         OLD_RPATH "/sw/ilc/ilcsoft/gcc820/FastJet/3.2.1/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib::::::::::::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/lib:/sw/ilc/ilcsoft/gcc820/FastJet/3.2.1/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/Marlin/v01-17-01/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/lcio/v02-14-02/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/gear/v01-09/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/CLHEP/2.3.4.3/lib:/sw/ilc/ilcsoft/gcc820/ilcutil/v01-06/lib:/sw/ilc/ilcsoft/gcc820/v02-01-02/root/6.18.04/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/cvmfs/sft.cern.ch/lcg/releases/binutils/2.30-e5b21/x86_64-centos7/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libQQbarProcessor.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ilc/sedi/Marlin/BBG_Analysis/TestbbgProcessor/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
