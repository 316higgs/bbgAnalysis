# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /sw/ilc/ilcsoft/gcc820/CMake/3.15.5/bin/cmake

# The command to remove a file.
RM = /sw/ilc/ilcsoft/gcc820/CMake/3.15.5/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build

# Utility rule file for doc.

# Include the progress variables for this target.
include doc/CMakeFiles/doc.dir/progress.make

doc/CMakeFiles/doc: docbuild/html/index.html


docbuild/html/index.html: ../doc/overview.html
docbuild/html/index.html: ../doc/Doxyfile
docbuild/html/index.html: ../doc/CMakeLists.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building API Documentation..."
	cd /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/doc && DOX_PROJECT_NAME=LCFIPlus DOX_PROJECT_NUMBER="0.8.0" DOX_OUTPUT_DIRECTORY="/home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/docbuild" DOX_INPUT="overview.html ../include ../src" /usr/bin/doxygen

doc: doc/CMakeFiles/doc
doc: docbuild/html/index.html
doc: doc/CMakeFiles/doc.dir/build.make

.PHONY : doc

# Rule to build all files generated by this target.
doc/CMakeFiles/doc.dir/build: doc

.PHONY : doc/CMakeFiles/doc.dir/build

doc/CMakeFiles/doc.dir/clean:
	cd /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/doc && $(CMAKE_COMMAND) -P CMakeFiles/doc.dir/cmake_clean.cmake
.PHONY : doc/CMakeFiles/doc.dir/clean

doc/CMakeFiles/doc.dir/depend:
	cd /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/doc /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/doc /home/ilc/sedi/Marlin/BBG_Analysis/LCFIPlus/build/doc/CMakeFiles/doc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : doc/CMakeFiles/doc.dir/depend

