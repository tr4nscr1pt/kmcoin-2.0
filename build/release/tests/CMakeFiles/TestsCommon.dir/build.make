# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/node/kmcoin-2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/node/kmcoin-2.0/build/release

# Include any dependencies generated for this target.
include tests/CMakeFiles/TestsCommon.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/TestsCommon.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/TestsCommon.dir/flags.make

tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o: tests/CMakeFiles/TestsCommon.dir/flags.make
tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o: ../../tests/Common/VectorMainChainStorage.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/node/kmcoin-2.0/build/release/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o"
	cd /home/node/kmcoin-2.0/build/release/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o -c /home/node/kmcoin-2.0/tests/Common/VectorMainChainStorage.cpp

tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.i"
	cd /home/node/kmcoin-2.0/build/release/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/node/kmcoin-2.0/tests/Common/VectorMainChainStorage.cpp > CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.i

tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.s"
	cd /home/node/kmcoin-2.0/build/release/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/node/kmcoin-2.0/tests/Common/VectorMainChainStorage.cpp -o CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.s

tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o.requires:
.PHONY : tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o.requires

tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o.provides: tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/TestsCommon.dir/build.make tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o.provides.build
.PHONY : tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o.provides

tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o.provides.build: tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o

# Object files for target TestsCommon
TestsCommon_OBJECTS = \
"CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o"

# External object files for target TestsCommon
TestsCommon_EXTERNAL_OBJECTS =

tests/libTestsCommon.a: tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o
tests/libTestsCommon.a: tests/CMakeFiles/TestsCommon.dir/build.make
tests/libTestsCommon.a: tests/CMakeFiles/TestsCommon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libTestsCommon.a"
	cd /home/node/kmcoin-2.0/build/release/tests && $(CMAKE_COMMAND) -P CMakeFiles/TestsCommon.dir/cmake_clean_target.cmake
	cd /home/node/kmcoin-2.0/build/release/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TestsCommon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/TestsCommon.dir/build: tests/libTestsCommon.a
.PHONY : tests/CMakeFiles/TestsCommon.dir/build

tests/CMakeFiles/TestsCommon.dir/requires: tests/CMakeFiles/TestsCommon.dir/Common/VectorMainChainStorage.cpp.o.requires
.PHONY : tests/CMakeFiles/TestsCommon.dir/requires

tests/CMakeFiles/TestsCommon.dir/clean:
	cd /home/node/kmcoin-2.0/build/release/tests && $(CMAKE_COMMAND) -P CMakeFiles/TestsCommon.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/TestsCommon.dir/clean

tests/CMakeFiles/TestsCommon.dir/depend:
	cd /home/node/kmcoin-2.0/build/release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/node/kmcoin-2.0 /home/node/kmcoin-2.0/tests /home/node/kmcoin-2.0/build/release /home/node/kmcoin-2.0/build/release/tests /home/node/kmcoin-2.0/build/release/tests/CMakeFiles/TestsCommon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/TestsCommon.dir/depend

