# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/aarch64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/problem1_sum.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/problem1_sum.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/problem1_sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/problem1_sum.dir/flags.make

CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.o: CMakeFiles/problem1_sum.dir/flags.make
CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.o: /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/problem1_sum/main.cpp
CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.o: CMakeFiles/problem1_sum.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.o -MF CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.o.d -o CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.o -c /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/problem1_sum/main.cpp

CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/problem1_sum/main.cpp > CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.i

CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/problem1_sum/main.cpp -o CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.s

# Object files for target problem1_sum
problem1_sum_OBJECTS = \
"CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.o"

# External object files for target problem1_sum
problem1_sum_EXTERNAL_OBJECTS =

problem1_sum: CMakeFiles/problem1_sum.dir/problem1_sum/main.cpp.o
problem1_sum: CMakeFiles/problem1_sum.dir/build.make
problem1_sum: CMakeFiles/problem1_sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable problem1_sum"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/problem1_sum.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/problem1_sum.dir/build: problem1_sum
.PHONY : CMakeFiles/problem1_sum.dir/build

CMakeFiles/problem1_sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/problem1_sum.dir/cmake_clean.cmake
.PHONY : CMakeFiles/problem1_sum.dir/clean

CMakeFiles/problem1_sum.dir/depend:
	cd /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/cmake-build-debug /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/cmake-build-debug /Users/elizabethstorozheva/CLionProjects/dsba_c_ples_ples_course/2023_2024_2nd_sem/week5/09_10_sem/cmake-build-debug/CMakeFiles/problem1_sum.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/problem1_sum.dir/depend

