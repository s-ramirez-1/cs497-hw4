# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shamarah/hw4/wsu-cs497/plx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shamarah/hw4/wsu-cs497/build

# Include any dependencies generated for this target.
include CMakeFiles/plx.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/plx.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/plx.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/plx.dir/flags.make

CMakeFiles/plx.dir/plx/main.cpp.o: CMakeFiles/plx.dir/flags.make
CMakeFiles/plx.dir/plx/main.cpp.o: /home/shamarah/hw4/wsu-cs497/plx/plx/main.cpp
CMakeFiles/plx.dir/plx/main.cpp.o: CMakeFiles/plx.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shamarah/hw4/wsu-cs497/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/plx.dir/plx/main.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/plx.dir/plx/main.cpp.o -MF CMakeFiles/plx.dir/plx/main.cpp.o.d -o CMakeFiles/plx.dir/plx/main.cpp.o -c /home/shamarah/hw4/wsu-cs497/plx/plx/main.cpp

CMakeFiles/plx.dir/plx/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plx.dir/plx/main.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shamarah/hw4/wsu-cs497/plx/plx/main.cpp > CMakeFiles/plx.dir/plx/main.cpp.i

CMakeFiles/plx.dir/plx/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plx.dir/plx/main.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shamarah/hw4/wsu-cs497/plx/plx/main.cpp -o CMakeFiles/plx.dir/plx/main.cpp.s

# Object files for target plx
plx_OBJECTS = \
"CMakeFiles/plx.dir/plx/main.cpp.o"

# External object files for target plx
plx_EXTERNAL_OBJECTS =

/home/shamarah/hw4/wsu-cs497/bin/plx: CMakeFiles/plx.dir/plx/main.cpp.o
/home/shamarah/hw4/wsu-cs497/bin/plx: CMakeFiles/plx.dir/build.make
/home/shamarah/hw4/wsu-cs497/bin/plx: libplx_lib.a
/home/shamarah/hw4/wsu-cs497/bin/plx: CMakeFiles/plx.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shamarah/hw4/wsu-cs497/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/shamarah/hw4/wsu-cs497/bin/plx"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/plx.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/plx.dir/build: /home/shamarah/hw4/wsu-cs497/bin/plx
.PHONY : CMakeFiles/plx.dir/build

CMakeFiles/plx.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/plx.dir/cmake_clean.cmake
.PHONY : CMakeFiles/plx.dir/clean

CMakeFiles/plx.dir/depend:
	cd /home/shamarah/hw4/wsu-cs497/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shamarah/hw4/wsu-cs497/plx /home/shamarah/hw4/wsu-cs497/plx /home/shamarah/hw4/wsu-cs497/build /home/shamarah/hw4/wsu-cs497/build /home/shamarah/hw4/wsu-cs497/build/CMakeFiles/plx.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/plx.dir/depend

