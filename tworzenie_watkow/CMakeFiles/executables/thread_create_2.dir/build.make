# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads

# Include any dependencies generated for this target.
include tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/depend.make

# Include the progress variables for this target.
include tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/progress.make

# Include the compile flags for this target's objects.
include tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/flags.make

tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o: tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/flags.make
tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o: tworzenie_watkow/thread_create_2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o"
	cd /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow && /cygdrive/C/Users/pc1/Documents/NetBeansProjects/threads/nbproject/private/tools/localhost/Cygwin/g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o -c /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow/thread_create_2.cpp

tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.i"
	cd /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow && /cygdrive/C/Users/pc1/Documents/NetBeansProjects/threads/nbproject/private/tools/localhost/Cygwin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow/thread_create_2.cpp > CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.i

tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.s"
	cd /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow && /cygdrive/C/Users/pc1/Documents/NetBeansProjects/threads/nbproject/private/tools/localhost/Cygwin/g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow/thread_create_2.cpp -o CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.s

tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o.requires:

.PHONY : tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o.requires

tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o.provides: tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o.requires
	$(MAKE) -f tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/build.make tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o.provides.build
.PHONY : tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o.provides

tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o.provides.build: tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o


# Object files for target executables/thread_create_2
executables/thread_create_2_OBJECTS = \
"CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o"

# External object files for target executables/thread_create_2
executables/thread_create_2_EXTERNAL_OBJECTS =

tworzenie_watkow/executables/thread_create_2.exe: tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o
tworzenie_watkow/executables/thread_create_2.exe: tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/build.make
tworzenie_watkow/executables/thread_create_2.exe: tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable executables/thread_create_2.exe"
	cd /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/executables/thread_create_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/build: tworzenie_watkow/executables/thread_create_2.exe

.PHONY : tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/build

tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/requires: tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/thread_create_2.cpp.o.requires

.PHONY : tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/requires

tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/clean:
	cd /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow && $(CMAKE_COMMAND) -P CMakeFiles/executables/thread_create_2.dir/cmake_clean.cmake
.PHONY : tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/clean

tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/depend:
	cd /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow /cygdrive/c/Users/pc1/Documents/NetBeansProjects/threads/tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tworzenie_watkow/CMakeFiles/executables/thread_create_2.dir/depend

