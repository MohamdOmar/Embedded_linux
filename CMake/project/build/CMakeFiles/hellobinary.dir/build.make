# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mohamed/Embedded_linx/CMake/project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mohamed/Embedded_linx/CMake/project/build

# Include any dependencies generated for this target.
include CMakeFiles/hellobinary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hellobinary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hellobinary.dir/flags.make

CMakeFiles/hellobinary.dir/main.cpp.o: CMakeFiles/hellobinary.dir/flags.make
CMakeFiles/hellobinary.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Embedded_linx/CMake/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hellobinary.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hellobinary.dir/main.cpp.o -c /home/mohamed/Embedded_linx/CMake/project/main.cpp

CMakeFiles/hellobinary.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hellobinary.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mohamed/Embedded_linx/CMake/project/main.cpp > CMakeFiles/hellobinary.dir/main.cpp.i

CMakeFiles/hellobinary.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hellobinary.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mohamed/Embedded_linx/CMake/project/main.cpp -o CMakeFiles/hellobinary.dir/main.cpp.s

# Object files for target hellobinary
hellobinary_OBJECTS = \
"CMakeFiles/hellobinary.dir/main.cpp.o"

# External object files for target hellobinary
hellobinary_EXTERNAL_OBJECTS =

hellobinary: CMakeFiles/hellobinary.dir/main.cpp.o
hellobinary: CMakeFiles/hellobinary.dir/build.make
hellobinary: CMakeFiles/hellobinary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mohamed/Embedded_linx/CMake/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hellobinary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hellobinary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hellobinary.dir/build: hellobinary

.PHONY : CMakeFiles/hellobinary.dir/build

CMakeFiles/hellobinary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hellobinary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hellobinary.dir/clean

CMakeFiles/hellobinary.dir/depend:
	cd /home/mohamed/Embedded_linx/CMake/project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mohamed/Embedded_linx/CMake/project /home/mohamed/Embedded_linx/CMake/project /home/mohamed/Embedded_linx/CMake/project/build /home/mohamed/Embedded_linx/CMake/project/build /home/mohamed/Embedded_linx/CMake/project/build/CMakeFiles/hellobinary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hellobinary.dir/depend

