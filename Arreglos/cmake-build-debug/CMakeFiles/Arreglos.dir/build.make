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
CMAKE_COMMAND = /snap/clion/100/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/100/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Arreglos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Arreglos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Arreglos.dir/flags.make

CMakeFiles/Arreglos.dir/main.cpp.o: CMakeFiles/Arreglos.dir/flags.make
CMakeFiles/Arreglos.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Arreglos.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Arreglos.dir/main.cpp.o -c /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/main.cpp

CMakeFiles/Arreglos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Arreglos.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/main.cpp > CMakeFiles/Arreglos.dir/main.cpp.i

CMakeFiles/Arreglos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Arreglos.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/main.cpp -o CMakeFiles/Arreglos.dir/main.cpp.s

# Object files for target Arreglos
Arreglos_OBJECTS = \
"CMakeFiles/Arreglos.dir/main.cpp.o"

# External object files for target Arreglos
Arreglos_EXTERNAL_OBJECTS =

Arreglos: CMakeFiles/Arreglos.dir/main.cpp.o
Arreglos: CMakeFiles/Arreglos.dir/build.make
Arreglos: CMakeFiles/Arreglos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Arreglos"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Arreglos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Arreglos.dir/build: Arreglos

.PHONY : CMakeFiles/Arreglos.dir/build

CMakeFiles/Arreglos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Arreglos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Arreglos.dir/clean

CMakeFiles/Arreglos.dir/depend:
	cd /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/cmake-build-debug /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/cmake-build-debug /home/vandersalaheram/Documentos/GitHub/1CuatriAlgoritmos/Arreglos/cmake-build-debug/CMakeFiles/Arreglos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Arreglos.dir/depend
