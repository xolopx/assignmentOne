# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/Tom/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Tom/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/AssLion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AssLion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AssLion.dir/flags.make

CMakeFiles/AssLion.dir/main.cpp.o: CMakeFiles/AssLion.dir/flags.make
CMakeFiles/AssLion.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AssLion.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AssLion.dir/main.cpp.o -c "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/main.cpp"

CMakeFiles/AssLion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AssLion.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/main.cpp" > CMakeFiles/AssLion.dir/main.cpp.i

CMakeFiles/AssLion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AssLion.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/main.cpp" -o CMakeFiles/AssLion.dir/main.cpp.s

CMakeFiles/AssLion.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/AssLion.dir/main.cpp.o.requires

CMakeFiles/AssLion.dir/main.cpp.o.provides: CMakeFiles/AssLion.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/AssLion.dir/build.make CMakeFiles/AssLion.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/AssLion.dir/main.cpp.o.provides

CMakeFiles/AssLion.dir/main.cpp.o.provides.build: CMakeFiles/AssLion.dir/main.cpp.o


CMakeFiles/AssLion.dir/point.cpp.o: CMakeFiles/AssLion.dir/flags.make
CMakeFiles/AssLion.dir/point.cpp.o: ../point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AssLion.dir/point.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AssLion.dir/point.cpp.o -c "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/point.cpp"

CMakeFiles/AssLion.dir/point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AssLion.dir/point.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/point.cpp" > CMakeFiles/AssLion.dir/point.cpp.i

CMakeFiles/AssLion.dir/point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AssLion.dir/point.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/point.cpp" -o CMakeFiles/AssLion.dir/point.cpp.s

CMakeFiles/AssLion.dir/point.cpp.o.requires:

.PHONY : CMakeFiles/AssLion.dir/point.cpp.o.requires

CMakeFiles/AssLion.dir/point.cpp.o.provides: CMakeFiles/AssLion.dir/point.cpp.o.requires
	$(MAKE) -f CMakeFiles/AssLion.dir/build.make CMakeFiles/AssLion.dir/point.cpp.o.provides.build
.PHONY : CMakeFiles/AssLion.dir/point.cpp.o.provides

CMakeFiles/AssLion.dir/point.cpp.o.provides.build: CMakeFiles/AssLion.dir/point.cpp.o


CMakeFiles/AssLion.dir/polygon.cpp.o: CMakeFiles/AssLion.dir/flags.make
CMakeFiles/AssLion.dir/polygon.cpp.o: ../polygon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AssLion.dir/polygon.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AssLion.dir/polygon.cpp.o -c "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/polygon.cpp"

CMakeFiles/AssLion.dir/polygon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AssLion.dir/polygon.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/polygon.cpp" > CMakeFiles/AssLion.dir/polygon.cpp.i

CMakeFiles/AssLion.dir/polygon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AssLion.dir/polygon.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/polygon.cpp" -o CMakeFiles/AssLion.dir/polygon.cpp.s

CMakeFiles/AssLion.dir/polygon.cpp.o.requires:

.PHONY : CMakeFiles/AssLion.dir/polygon.cpp.o.requires

CMakeFiles/AssLion.dir/polygon.cpp.o.provides: CMakeFiles/AssLion.dir/polygon.cpp.o.requires
	$(MAKE) -f CMakeFiles/AssLion.dir/build.make CMakeFiles/AssLion.dir/polygon.cpp.o.provides.build
.PHONY : CMakeFiles/AssLion.dir/polygon.cpp.o.provides

CMakeFiles/AssLion.dir/polygon.cpp.o.provides.build: CMakeFiles/AssLion.dir/polygon.cpp.o


CMakeFiles/AssLion.dir/ComparePoly.cpp.o: CMakeFiles/AssLion.dir/flags.make
CMakeFiles/AssLion.dir/ComparePoly.cpp.o: ../ComparePoly.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AssLion.dir/ComparePoly.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AssLion.dir/ComparePoly.cpp.o -c "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/ComparePoly.cpp"

CMakeFiles/AssLion.dir/ComparePoly.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AssLion.dir/ComparePoly.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/ComparePoly.cpp" > CMakeFiles/AssLion.dir/ComparePoly.cpp.i

CMakeFiles/AssLion.dir/ComparePoly.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AssLion.dir/ComparePoly.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/ComparePoly.cpp" -o CMakeFiles/AssLion.dir/ComparePoly.cpp.s

CMakeFiles/AssLion.dir/ComparePoly.cpp.o.requires:

.PHONY : CMakeFiles/AssLion.dir/ComparePoly.cpp.o.requires

CMakeFiles/AssLion.dir/ComparePoly.cpp.o.provides: CMakeFiles/AssLion.dir/ComparePoly.cpp.o.requires
	$(MAKE) -f CMakeFiles/AssLion.dir/build.make CMakeFiles/AssLion.dir/ComparePoly.cpp.o.provides.build
.PHONY : CMakeFiles/AssLion.dir/ComparePoly.cpp.o.provides

CMakeFiles/AssLion.dir/ComparePoly.cpp.o.provides.build: CMakeFiles/AssLion.dir/ComparePoly.cpp.o


# Object files for target AssLion
AssLion_OBJECTS = \
"CMakeFiles/AssLion.dir/main.cpp.o" \
"CMakeFiles/AssLion.dir/point.cpp.o" \
"CMakeFiles/AssLion.dir/polygon.cpp.o" \
"CMakeFiles/AssLion.dir/ComparePoly.cpp.o"

# External object files for target AssLion
AssLion_EXTERNAL_OBJECTS =

AssLion.exe: CMakeFiles/AssLion.dir/main.cpp.o
AssLion.exe: CMakeFiles/AssLion.dir/point.cpp.o
AssLion.exe: CMakeFiles/AssLion.dir/polygon.cpp.o
AssLion.exe: CMakeFiles/AssLion.dir/ComparePoly.cpp.o
AssLion.exe: CMakeFiles/AssLion.dir/build.make
AssLion.exe: CMakeFiles/AssLion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable AssLion.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AssLion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AssLion.dir/build: AssLion.exe

.PHONY : CMakeFiles/AssLion.dir/build

CMakeFiles/AssLion.dir/requires: CMakeFiles/AssLion.dir/main.cpp.o.requires
CMakeFiles/AssLion.dir/requires: CMakeFiles/AssLion.dir/point.cpp.o.requires
CMakeFiles/AssLion.dir/requires: CMakeFiles/AssLion.dir/polygon.cpp.o.requires
CMakeFiles/AssLion.dir/requires: CMakeFiles/AssLion.dir/ComparePoly.cpp.o.requires

.PHONY : CMakeFiles/AssLion.dir/requires

CMakeFiles/AssLion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AssLion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AssLion.dir/clean

CMakeFiles/AssLion.dir/depend:
	cd "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion" "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion" "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug" "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug" "/cygdrive/c/Users/Tom/Google Drive/University/2018/sem 1/SENG2200/Assignments/assignmentOne/AssLion/cmake-build-debug/CMakeFiles/AssLion.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/AssLion.dir/depend

