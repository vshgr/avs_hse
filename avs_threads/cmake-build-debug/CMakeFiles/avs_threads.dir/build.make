# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /private/var/folders/kr/v2w6cvld6cv0w0wnp6slyttm0000gn/T/AppTranslocation/80C79335-85EC-430C-9E82-689F7C8A8BF1/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/kr/v2w6cvld6cv0w0wnp6slyttm0000gn/T/AppTranslocation/80C79335-85EC-430C-9E82-689F7C8A8BF1/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alisa/CLionProjects/avs_threads

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alisa/CLionProjects/avs_threads/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/avs_threads.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/avs_threads.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/avs_threads.dir/flags.make

CMakeFiles/avs_threads.dir/main.cpp.o: CMakeFiles/avs_threads.dir/flags.make
CMakeFiles/avs_threads.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alisa/CLionProjects/avs_threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/avs_threads.dir/main.cpp.o"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/avs_threads.dir/main.cpp.o -c /Users/alisa/CLionProjects/avs_threads/main.cpp

CMakeFiles/avs_threads.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/avs_threads.dir/main.cpp.i"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alisa/CLionProjects/avs_threads/main.cpp > CMakeFiles/avs_threads.dir/main.cpp.i

CMakeFiles/avs_threads.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/avs_threads.dir/main.cpp.s"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alisa/CLionProjects/avs_threads/main.cpp -o CMakeFiles/avs_threads.dir/main.cpp.s

CMakeFiles/avs_threads.dir/random.cpp.o: CMakeFiles/avs_threads.dir/flags.make
CMakeFiles/avs_threads.dir/random.cpp.o: ../random.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alisa/CLionProjects/avs_threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/avs_threads.dir/random.cpp.o"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/avs_threads.dir/random.cpp.o -c /Users/alisa/CLionProjects/avs_threads/random.cpp

CMakeFiles/avs_threads.dir/random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/avs_threads.dir/random.cpp.i"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alisa/CLionProjects/avs_threads/random.cpp > CMakeFiles/avs_threads.dir/random.cpp.i

CMakeFiles/avs_threads.dir/random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/avs_threads.dir/random.cpp.s"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alisa/CLionProjects/avs_threads/random.cpp -o CMakeFiles/avs_threads.dir/random.cpp.s

CMakeFiles/avs_threads.dir/shooter.cpp.o: CMakeFiles/avs_threads.dir/flags.make
CMakeFiles/avs_threads.dir/shooter.cpp.o: ../shooter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alisa/CLionProjects/avs_threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/avs_threads.dir/shooter.cpp.o"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/avs_threads.dir/shooter.cpp.o -c /Users/alisa/CLionProjects/avs_threads/shooter.cpp

CMakeFiles/avs_threads.dir/shooter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/avs_threads.dir/shooter.cpp.i"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/alisa/CLionProjects/avs_threads/shooter.cpp > CMakeFiles/avs_threads.dir/shooter.cpp.i

CMakeFiles/avs_threads.dir/shooter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/avs_threads.dir/shooter.cpp.s"
	/usr/local/bin/g++-11 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/alisa/CLionProjects/avs_threads/shooter.cpp -o CMakeFiles/avs_threads.dir/shooter.cpp.s

# Object files for target avs_threads
avs_threads_OBJECTS = \
"CMakeFiles/avs_threads.dir/main.cpp.o" \
"CMakeFiles/avs_threads.dir/random.cpp.o" \
"CMakeFiles/avs_threads.dir/shooter.cpp.o"

# External object files for target avs_threads
avs_threads_EXTERNAL_OBJECTS =

avs_threads: CMakeFiles/avs_threads.dir/main.cpp.o
avs_threads: CMakeFiles/avs_threads.dir/random.cpp.o
avs_threads: CMakeFiles/avs_threads.dir/shooter.cpp.o
avs_threads: CMakeFiles/avs_threads.dir/build.make
avs_threads: CMakeFiles/avs_threads.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alisa/CLionProjects/avs_threads/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable avs_threads"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/avs_threads.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/avs_threads.dir/build: avs_threads
.PHONY : CMakeFiles/avs_threads.dir/build

CMakeFiles/avs_threads.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/avs_threads.dir/cmake_clean.cmake
.PHONY : CMakeFiles/avs_threads.dir/clean

CMakeFiles/avs_threads.dir/depend:
	cd /Users/alisa/CLionProjects/avs_threads/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alisa/CLionProjects/avs_threads /Users/alisa/CLionProjects/avs_threads /Users/alisa/CLionProjects/avs_threads/cmake-build-debug /Users/alisa/CLionProjects/avs_threads/cmake-build-debug /Users/alisa/CLionProjects/avs_threads/cmake-build-debug/CMakeFiles/avs_threads.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/avs_threads.dir/depend

