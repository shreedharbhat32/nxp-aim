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
CMAKE_SOURCE_DIR = /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shreedhar/cognipilot/cranium/build/synapse_tinyframe

# Include any dependencies generated for this target.
include CMakeFiles/synapse_tinyframe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/synapse_tinyframe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/synapse_tinyframe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/synapse_tinyframe.dir/flags.make

CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.o: CMakeFiles/synapse_tinyframe.dir/flags.make
CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.o: /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe/src/TinyFrame.c
CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.o: CMakeFiles/synapse_tinyframe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shreedhar/cognipilot/cranium/build/synapse_tinyframe/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.o -MF CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.o.d -o CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.o -c /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe/src/TinyFrame.c

CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe/src/TinyFrame.c > CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.i

CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe/src/TinyFrame.c -o CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.s

CMakeFiles/synapse_tinyframe.dir/src/utils.c.o: CMakeFiles/synapse_tinyframe.dir/flags.make
CMakeFiles/synapse_tinyframe.dir/src/utils.c.o: /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe/src/utils.c
CMakeFiles/synapse_tinyframe.dir/src/utils.c.o: CMakeFiles/synapse_tinyframe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shreedhar/cognipilot/cranium/build/synapse_tinyframe/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/synapse_tinyframe.dir/src/utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/synapse_tinyframe.dir/src/utils.c.o -MF CMakeFiles/synapse_tinyframe.dir/src/utils.c.o.d -o CMakeFiles/synapse_tinyframe.dir/src/utils.c.o -c /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe/src/utils.c

CMakeFiles/synapse_tinyframe.dir/src/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/synapse_tinyframe.dir/src/utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe/src/utils.c > CMakeFiles/synapse_tinyframe.dir/src/utils.c.i

CMakeFiles/synapse_tinyframe.dir/src/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/synapse_tinyframe.dir/src/utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe/src/utils.c -o CMakeFiles/synapse_tinyframe.dir/src/utils.c.s

# Object files for target synapse_tinyframe
synapse_tinyframe_OBJECTS = \
"CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.o" \
"CMakeFiles/synapse_tinyframe.dir/src/utils.c.o"

# External object files for target synapse_tinyframe
synapse_tinyframe_EXTERNAL_OBJECTS =

libsynapse_tinyframe.a: CMakeFiles/synapse_tinyframe.dir/src/TinyFrame.c.o
libsynapse_tinyframe.a: CMakeFiles/synapse_tinyframe.dir/src/utils.c.o
libsynapse_tinyframe.a: CMakeFiles/synapse_tinyframe.dir/build.make
libsynapse_tinyframe.a: CMakeFiles/synapse_tinyframe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shreedhar/cognipilot/cranium/build/synapse_tinyframe/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libsynapse_tinyframe.a"
	$(CMAKE_COMMAND) -P CMakeFiles/synapse_tinyframe.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/synapse_tinyframe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/synapse_tinyframe.dir/build: libsynapse_tinyframe.a
.PHONY : CMakeFiles/synapse_tinyframe.dir/build

CMakeFiles/synapse_tinyframe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/synapse_tinyframe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/synapse_tinyframe.dir/clean

CMakeFiles/synapse_tinyframe.dir/depend:
	cd /home/shreedhar/cognipilot/cranium/build/synapse_tinyframe && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe /home/shreedhar/cognipilot/cranium/src/synapse_tinyframe /home/shreedhar/cognipilot/cranium/build/synapse_tinyframe /home/shreedhar/cognipilot/cranium/build/synapse_tinyframe /home/shreedhar/cognipilot/cranium/build/synapse_tinyframe/CMakeFiles/synapse_tinyframe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/synapse_tinyframe.dir/depend

