# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/matt/dev/engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/matt/dev/engine/build

# Include any dependencies generated for this target.
include CMakeFiles/shiva.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/shiva.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/shiva.dir/flags.make

CMakeFiles/shiva.dir/sources/lib1/main.cpp.o: CMakeFiles/shiva.dir/flags.make
CMakeFiles/shiva.dir/sources/lib1/main.cpp.o: ../sources/lib1/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matt/dev/engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/shiva.dir/sources/lib1/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shiva.dir/sources/lib1/main.cpp.o -c /home/matt/dev/engine/sources/lib1/main.cpp

CMakeFiles/shiva.dir/sources/lib1/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shiva.dir/sources/lib1/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/matt/dev/engine/sources/lib1/main.cpp > CMakeFiles/shiva.dir/sources/lib1/main.cpp.i

CMakeFiles/shiva.dir/sources/lib1/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shiva.dir/sources/lib1/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/matt/dev/engine/sources/lib1/main.cpp -o CMakeFiles/shiva.dir/sources/lib1/main.cpp.s

CMakeFiles/shiva.dir/sources/lib1/main.cpp.o.requires:

.PHONY : CMakeFiles/shiva.dir/sources/lib1/main.cpp.o.requires

CMakeFiles/shiva.dir/sources/lib1/main.cpp.o.provides: CMakeFiles/shiva.dir/sources/lib1/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/shiva.dir/build.make CMakeFiles/shiva.dir/sources/lib1/main.cpp.o.provides.build
.PHONY : CMakeFiles/shiva.dir/sources/lib1/main.cpp.o.provides

CMakeFiles/shiva.dir/sources/lib1/main.cpp.o.provides.build: CMakeFiles/shiva.dir/sources/lib1/main.cpp.o


CMakeFiles/shiva.dir/sources/lib2/main.cpp.o: CMakeFiles/shiva.dir/flags.make
CMakeFiles/shiva.dir/sources/lib2/main.cpp.o: ../sources/lib2/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matt/dev/engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/shiva.dir/sources/lib2/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shiva.dir/sources/lib2/main.cpp.o -c /home/matt/dev/engine/sources/lib2/main.cpp

CMakeFiles/shiva.dir/sources/lib2/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shiva.dir/sources/lib2/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/matt/dev/engine/sources/lib2/main.cpp > CMakeFiles/shiva.dir/sources/lib2/main.cpp.i

CMakeFiles/shiva.dir/sources/lib2/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shiva.dir/sources/lib2/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/matt/dev/engine/sources/lib2/main.cpp -o CMakeFiles/shiva.dir/sources/lib2/main.cpp.s

CMakeFiles/shiva.dir/sources/lib2/main.cpp.o.requires:

.PHONY : CMakeFiles/shiva.dir/sources/lib2/main.cpp.o.requires

CMakeFiles/shiva.dir/sources/lib2/main.cpp.o.provides: CMakeFiles/shiva.dir/sources/lib2/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/shiva.dir/build.make CMakeFiles/shiva.dir/sources/lib2/main.cpp.o.provides.build
.PHONY : CMakeFiles/shiva.dir/sources/lib2/main.cpp.o.provides

CMakeFiles/shiva.dir/sources/lib2/main.cpp.o.provides.build: CMakeFiles/shiva.dir/sources/lib2/main.cpp.o


CMakeFiles/shiva.dir/sources/main.cpp.o: CMakeFiles/shiva.dir/flags.make
CMakeFiles/shiva.dir/sources/main.cpp.o: ../sources/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/matt/dev/engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/shiva.dir/sources/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shiva.dir/sources/main.cpp.o -c /home/matt/dev/engine/sources/main.cpp

CMakeFiles/shiva.dir/sources/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shiva.dir/sources/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/matt/dev/engine/sources/main.cpp > CMakeFiles/shiva.dir/sources/main.cpp.i

CMakeFiles/shiva.dir/sources/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shiva.dir/sources/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/matt/dev/engine/sources/main.cpp -o CMakeFiles/shiva.dir/sources/main.cpp.s

CMakeFiles/shiva.dir/sources/main.cpp.o.requires:

.PHONY : CMakeFiles/shiva.dir/sources/main.cpp.o.requires

CMakeFiles/shiva.dir/sources/main.cpp.o.provides: CMakeFiles/shiva.dir/sources/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/shiva.dir/build.make CMakeFiles/shiva.dir/sources/main.cpp.o.provides.build
.PHONY : CMakeFiles/shiva.dir/sources/main.cpp.o.provides

CMakeFiles/shiva.dir/sources/main.cpp.o.provides.build: CMakeFiles/shiva.dir/sources/main.cpp.o


# Object files for target shiva
shiva_OBJECTS = \
"CMakeFiles/shiva.dir/sources/lib1/main.cpp.o" \
"CMakeFiles/shiva.dir/sources/lib2/main.cpp.o" \
"CMakeFiles/shiva.dir/sources/main.cpp.o"

# External object files for target shiva
shiva_EXTERNAL_OBJECTS =

shiva: CMakeFiles/shiva.dir/sources/lib1/main.cpp.o
shiva: CMakeFiles/shiva.dir/sources/lib2/main.cpp.o
shiva: CMakeFiles/shiva.dir/sources/main.cpp.o
shiva: CMakeFiles/shiva.dir/build.make
shiva: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
shiva: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
shiva: /usr/lib/x86_64-linux-gnu/libboost_system.so
shiva: sublib/liblibqwe.a
shiva: CMakeFiles/shiva.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/matt/dev/engine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable shiva"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shiva.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/shiva.dir/build: shiva

.PHONY : CMakeFiles/shiva.dir/build

CMakeFiles/shiva.dir/requires: CMakeFiles/shiva.dir/sources/lib1/main.cpp.o.requires
CMakeFiles/shiva.dir/requires: CMakeFiles/shiva.dir/sources/lib2/main.cpp.o.requires
CMakeFiles/shiva.dir/requires: CMakeFiles/shiva.dir/sources/main.cpp.o.requires

.PHONY : CMakeFiles/shiva.dir/requires

CMakeFiles/shiva.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/shiva.dir/cmake_clean.cmake
.PHONY : CMakeFiles/shiva.dir/clean

CMakeFiles/shiva.dir/depend:
	cd /home/matt/dev/engine/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/matt/dev/engine /home/matt/dev/engine /home/matt/dev/engine/build /home/matt/dev/engine/build /home/matt/dev/engine/build/CMakeFiles/shiva.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/shiva.dir/depend

