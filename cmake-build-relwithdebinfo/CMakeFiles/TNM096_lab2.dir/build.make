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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/cmake-build-relwithdebinfo

# Include any dependencies generated for this target.
include CMakeFiles/TNM096_lab2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TNM096_lab2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TNM096_lab2.dir/flags.make

CMakeFiles/TNM096_lab2.dir/main.cpp.o: CMakeFiles/TNM096_lab2.dir/flags.make
CMakeFiles/TNM096_lab2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/cmake-build-relwithdebinfo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TNM096_lab2.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TNM096_lab2.dir/main.cpp.o -c /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/main.cpp

CMakeFiles/TNM096_lab2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TNM096_lab2.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/main.cpp > CMakeFiles/TNM096_lab2.dir/main.cpp.i

CMakeFiles/TNM096_lab2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TNM096_lab2.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/main.cpp -o CMakeFiles/TNM096_lab2.dir/main.cpp.s

# Object files for target TNM096_lab2
TNM096_lab2_OBJECTS = \
"CMakeFiles/TNM096_lab2.dir/main.cpp.o"

# External object files for target TNM096_lab2
TNM096_lab2_EXTERNAL_OBJECTS =

TNM096_lab2: CMakeFiles/TNM096_lab2.dir/main.cpp.o
TNM096_lab2: CMakeFiles/TNM096_lab2.dir/build.make
TNM096_lab2: CMakeFiles/TNM096_lab2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/cmake-build-relwithdebinfo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TNM096_lab2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TNM096_lab2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TNM096_lab2.dir/build: TNM096_lab2

.PHONY : CMakeFiles/TNM096_lab2.dir/build

CMakeFiles/TNM096_lab2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TNM096_lab2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TNM096_lab2.dir/clean

CMakeFiles/TNM096_lab2.dir/depend:
	cd /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/cmake-build-relwithdebinfo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2 /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2 /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/cmake-build-relwithdebinfo /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/cmake-build-relwithdebinfo /Users/timcardell/Documents/tnm096-lab2/TNM096-lab2/cmake-build-relwithdebinfo/CMakeFiles/TNM096_lab2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TNM096_lab2.dir/depend

