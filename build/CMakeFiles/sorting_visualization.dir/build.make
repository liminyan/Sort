# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/liminyan/Desktop/各种排序C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/liminyan/Desktop/各种排序C++/build

# Include any dependencies generated for this target.
include CMakeFiles/sorting_visualization.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sorting_visualization.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sorting_visualization.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sorting_visualization.dir/flags.make

CMakeFiles/sorting_visualization.dir/codegen:
.PHONY : CMakeFiles/sorting_visualization.dir/codegen

CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.o: CMakeFiles/sorting_visualization.dir/flags.make
CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.o: /Users/liminyan/Desktop/各种排序C++/sorting_visualization.cpp
CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.o: CMakeFiles/sorting_visualization.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/liminyan/Desktop/各种排序C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.o -MF CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.o.d -o CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.o -c /Users/liminyan/Desktop/各种排序C++/sorting_visualization.cpp

CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/liminyan/Desktop/各种排序C++/sorting_visualization.cpp > CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.i

CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/liminyan/Desktop/各种排序C++/sorting_visualization.cpp -o CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.s

CMakeFiles/sorting_visualization.dir/sort.cpp.o: CMakeFiles/sorting_visualization.dir/flags.make
CMakeFiles/sorting_visualization.dir/sort.cpp.o: /Users/liminyan/Desktop/各种排序C++/sort.cpp
CMakeFiles/sorting_visualization.dir/sort.cpp.o: CMakeFiles/sorting_visualization.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/liminyan/Desktop/各种排序C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sorting_visualization.dir/sort.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sorting_visualization.dir/sort.cpp.o -MF CMakeFiles/sorting_visualization.dir/sort.cpp.o.d -o CMakeFiles/sorting_visualization.dir/sort.cpp.o -c /Users/liminyan/Desktop/各种排序C++/sort.cpp

CMakeFiles/sorting_visualization.dir/sort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/sorting_visualization.dir/sort.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/liminyan/Desktop/各种排序C++/sort.cpp > CMakeFiles/sorting_visualization.dir/sort.cpp.i

CMakeFiles/sorting_visualization.dir/sort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/sorting_visualization.dir/sort.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/liminyan/Desktop/各种排序C++/sort.cpp -o CMakeFiles/sorting_visualization.dir/sort.cpp.s

# Object files for target sorting_visualization
sorting_visualization_OBJECTS = \
"CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.o" \
"CMakeFiles/sorting_visualization.dir/sort.cpp.o"

# External object files for target sorting_visualization
sorting_visualization_EXTERNAL_OBJECTS =

sorting_visualization: CMakeFiles/sorting_visualization.dir/sorting_visualization.cpp.o
sorting_visualization: CMakeFiles/sorting_visualization.dir/sort.cpp.o
sorting_visualization: CMakeFiles/sorting_visualization.dir/build.make
sorting_visualization: CMakeFiles/sorting_visualization.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/liminyan/Desktop/各种排序C++/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sorting_visualization"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sorting_visualization.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sorting_visualization.dir/build: sorting_visualization
.PHONY : CMakeFiles/sorting_visualization.dir/build

CMakeFiles/sorting_visualization.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sorting_visualization.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sorting_visualization.dir/clean

CMakeFiles/sorting_visualization.dir/depend:
	cd /Users/liminyan/Desktop/各种排序C++/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/liminyan/Desktop/各种排序C++ /Users/liminyan/Desktop/各种排序C++ /Users/liminyan/Desktop/各种排序C++/build /Users/liminyan/Desktop/各种排序C++/build /Users/liminyan/Desktop/各种排序C++/build/CMakeFiles/sorting_visualization.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/sorting_visualization.dir/depend

