# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/lib/clion-2018.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /usr/lib/clion-2018.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Exercicio3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exercicio3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exercicio3.dir/flags.make

CMakeFiles/Exercicio3.dir/main.c.o: CMakeFiles/Exercicio3.dir/flags.make
CMakeFiles/Exercicio3.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Exercicio3.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Exercicio3.dir/main.c.o   -c "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/main.c"

CMakeFiles/Exercicio3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Exercicio3.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/main.c" > CMakeFiles/Exercicio3.dir/main.c.i

CMakeFiles/Exercicio3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Exercicio3.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/main.c" -o CMakeFiles/Exercicio3.dir/main.c.s

CMakeFiles/Exercicio3.dir/nib.c.o: CMakeFiles/Exercicio3.dir/flags.make
CMakeFiles/Exercicio3.dir/nib.c.o: ../nib.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Exercicio3.dir/nib.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Exercicio3.dir/nib.c.o   -c "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/nib.c"

CMakeFiles/Exercicio3.dir/nib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Exercicio3.dir/nib.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/nib.c" > CMakeFiles/Exercicio3.dir/nib.c.i

CMakeFiles/Exercicio3.dir/nib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Exercicio3.dir/nib.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/nib.c" -o CMakeFiles/Exercicio3.dir/nib.c.s

# Object files for target Exercicio3
Exercicio3_OBJECTS = \
"CMakeFiles/Exercicio3.dir/main.c.o" \
"CMakeFiles/Exercicio3.dir/nib.c.o"

# External object files for target Exercicio3
Exercicio3_EXTERNAL_OBJECTS =

Exercicio3: CMakeFiles/Exercicio3.dir/main.c.o
Exercicio3: CMakeFiles/Exercicio3.dir/nib.c.o
Exercicio3: CMakeFiles/Exercicio3.dir/build.make
Exercicio3: CMakeFiles/Exercicio3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Exercicio3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exercicio3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exercicio3.dir/build: Exercicio3

.PHONY : CMakeFiles/Exercicio3.dir/build

CMakeFiles/Exercicio3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exercicio3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exercicio3.dir/clean

CMakeFiles/Exercicio3.dir/depend:
	cd "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3" "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3" "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/cmake-build-debug" "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/cmake-build-debug" "/home/risingfisan/Desktop/LI2/Aula 2/Exercicio3/cmake-build-debug/CMakeFiles/Exercicio3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Exercicio3.dir/depend

