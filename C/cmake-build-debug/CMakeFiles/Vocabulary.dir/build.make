# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.4\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.4\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\MAX\CLionProjects\Vocabulary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\MAX\CLionProjects\Vocabulary\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Vocabulary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Vocabulary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Vocabulary.dir/flags.make

CMakeFiles/Vocabulary.dir/main.c.obj: CMakeFiles/Vocabulary.dir/flags.make
CMakeFiles/Vocabulary.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\MAX\CLionProjects\Vocabulary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Vocabulary.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-5~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Vocabulary.dir\main.c.obj   -c C:\Users\MAX\CLionProjects\Vocabulary\main.c

CMakeFiles/Vocabulary.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Vocabulary.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-5~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\MAX\CLionProjects\Vocabulary\main.c > CMakeFiles\Vocabulary.dir\main.c.i

CMakeFiles/Vocabulary.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Vocabulary.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-5~1.0-P\mingw32\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\MAX\CLionProjects\Vocabulary\main.c -o CMakeFiles\Vocabulary.dir\main.c.s

CMakeFiles/Vocabulary.dir/main.c.obj.requires:

.PHONY : CMakeFiles/Vocabulary.dir/main.c.obj.requires

CMakeFiles/Vocabulary.dir/main.c.obj.provides: CMakeFiles/Vocabulary.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\Vocabulary.dir\build.make CMakeFiles/Vocabulary.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/Vocabulary.dir/main.c.obj.provides

CMakeFiles/Vocabulary.dir/main.c.obj.provides.build: CMakeFiles/Vocabulary.dir/main.c.obj


# Object files for target Vocabulary
Vocabulary_OBJECTS = \
"CMakeFiles/Vocabulary.dir/main.c.obj"

# External object files for target Vocabulary
Vocabulary_EXTERNAL_OBJECTS =

Vocabulary.exe: CMakeFiles/Vocabulary.dir/main.c.obj
Vocabulary.exe: CMakeFiles/Vocabulary.dir/build.make
Vocabulary.exe: CMakeFiles/Vocabulary.dir/linklibs.rsp
Vocabulary.exe: CMakeFiles/Vocabulary.dir/objects1.rsp
Vocabulary.exe: CMakeFiles/Vocabulary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\MAX\CLionProjects\Vocabulary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Vocabulary.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Vocabulary.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Vocabulary.dir/build: Vocabulary.exe

.PHONY : CMakeFiles/Vocabulary.dir/build

CMakeFiles/Vocabulary.dir/requires: CMakeFiles/Vocabulary.dir/main.c.obj.requires

.PHONY : CMakeFiles/Vocabulary.dir/requires

CMakeFiles/Vocabulary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Vocabulary.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Vocabulary.dir/clean

CMakeFiles/Vocabulary.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\MAX\CLionProjects\Vocabulary C:\Users\MAX\CLionProjects\Vocabulary C:\Users\MAX\CLionProjects\Vocabulary\cmake-build-debug C:\Users\MAX\CLionProjects\Vocabulary\cmake-build-debug C:\Users\MAX\CLionProjects\Vocabulary\cmake-build-debug\CMakeFiles\Vocabulary.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Vocabulary.dir/depend

