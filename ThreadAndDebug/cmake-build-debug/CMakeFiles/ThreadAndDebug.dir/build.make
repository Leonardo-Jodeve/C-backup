# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\C++\ThreadAndDebug

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\C++\ThreadAndDebug\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ThreadAndDebug.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ThreadAndDebug.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ThreadAndDebug.dir/flags.make

CMakeFiles/ThreadAndDebug.dir/main.cpp.obj: CMakeFiles/ThreadAndDebug.dir/flags.make
CMakeFiles/ThreadAndDebug.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\C++\ThreadAndDebug\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ThreadAndDebug.dir/main.cpp.obj"
	"D:\Program Files\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ThreadAndDebug.dir\main.cpp.obj -c F:\C++\ThreadAndDebug\main.cpp

CMakeFiles/ThreadAndDebug.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ThreadAndDebug.dir/main.cpp.i"
	"D:\Program Files\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\C++\ThreadAndDebug\main.cpp > CMakeFiles\ThreadAndDebug.dir\main.cpp.i

CMakeFiles/ThreadAndDebug.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ThreadAndDebug.dir/main.cpp.s"
	"D:\Program Files\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\C++\ThreadAndDebug\main.cpp -o CMakeFiles\ThreadAndDebug.dir\main.cpp.s

# Object files for target ThreadAndDebug
ThreadAndDebug_OBJECTS = \
"CMakeFiles/ThreadAndDebug.dir/main.cpp.obj"

# External object files for target ThreadAndDebug
ThreadAndDebug_EXTERNAL_OBJECTS =

ThreadAndDebug.exe: CMakeFiles/ThreadAndDebug.dir/main.cpp.obj
ThreadAndDebug.exe: CMakeFiles/ThreadAndDebug.dir/build.make
ThreadAndDebug.exe: CMakeFiles/ThreadAndDebug.dir/linklibs.rsp
ThreadAndDebug.exe: CMakeFiles/ThreadAndDebug.dir/objects1.rsp
ThreadAndDebug.exe: CMakeFiles/ThreadAndDebug.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\C++\ThreadAndDebug\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ThreadAndDebug.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ThreadAndDebug.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ThreadAndDebug.dir/build: ThreadAndDebug.exe

.PHONY : CMakeFiles/ThreadAndDebug.dir/build

CMakeFiles/ThreadAndDebug.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ThreadAndDebug.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ThreadAndDebug.dir/clean

CMakeFiles/ThreadAndDebug.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\C++\ThreadAndDebug F:\C++\ThreadAndDebug F:\C++\ThreadAndDebug\cmake-build-debug F:\C++\ThreadAndDebug\cmake-build-debug F:\C++\ThreadAndDebug\cmake-build-debug\CMakeFiles\ThreadAndDebug.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ThreadAndDebug.dir/depend

