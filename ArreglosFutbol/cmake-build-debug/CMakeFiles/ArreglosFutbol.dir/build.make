# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ArreglosFutbol.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ArreglosFutbol.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ArreglosFutbol.dir/flags.make

CMakeFiles/ArreglosFutbol.dir/main.cpp.obj: CMakeFiles/ArreglosFutbol.dir/flags.make
CMakeFiles/ArreglosFutbol.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ArreglosFutbol.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ArreglosFutbol.dir\main.cpp.obj -c C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol\main.cpp

CMakeFiles/ArreglosFutbol.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ArreglosFutbol.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol\main.cpp > CMakeFiles\ArreglosFutbol.dir\main.cpp.i

CMakeFiles/ArreglosFutbol.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ArreglosFutbol.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol\main.cpp -o CMakeFiles\ArreglosFutbol.dir\main.cpp.s

# Object files for target ArreglosFutbol
ArreglosFutbol_OBJECTS = \
"CMakeFiles/ArreglosFutbol.dir/main.cpp.obj"

# External object files for target ArreglosFutbol
ArreglosFutbol_EXTERNAL_OBJECTS =

ArreglosFutbol.exe: CMakeFiles/ArreglosFutbol.dir/main.cpp.obj
ArreglosFutbol.exe: CMakeFiles/ArreglosFutbol.dir/build.make
ArreglosFutbol.exe: CMakeFiles/ArreglosFutbol.dir/linklibs.rsp
ArreglosFutbol.exe: CMakeFiles/ArreglosFutbol.dir/objects1.rsp
ArreglosFutbol.exe: CMakeFiles/ArreglosFutbol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ArreglosFutbol.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ArreglosFutbol.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ArreglosFutbol.dir/build: ArreglosFutbol.exe

.PHONY : CMakeFiles/ArreglosFutbol.dir/build

CMakeFiles/ArreglosFutbol.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ArreglosFutbol.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ArreglosFutbol.dir/clean

CMakeFiles/ArreglosFutbol.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol\cmake-build-debug C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol\cmake-build-debug C:\Users\ahira\1CuatriAlgoritmos\ArreglosFutbol\cmake-build-debug\CMakeFiles\ArreglosFutbol.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ArreglosFutbol.dir/depend
