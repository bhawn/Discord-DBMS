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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bsh8y/Desktop/projects/side_projects/Discord_bot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bsh8y/Desktop/projects/side_projects/Discord_bot

# Utility rule file for antlr4cpp_generation_antlrcpptest.

# Include the progress variables for this target.
include CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/progress.make

CMakeFiles/antlr4cpp_generation_antlrcpptest: lib/antlr/dml.g4
	/usr/local/bin/cmake -E make_directory /home/bsh8y/Desktop/projects/side_projects/Discord_bot/lib/antlr/antlr4cpp_generated_src
	/usr/bin/java -jar /home/bsh8y/Desktop/projects/side_projects/Discord_bot/lib/antlr/thirdparty/antlr/antlr-4.7-complete.jar -Werror -Dlanguage=Cpp -no-listener -visitor -o /home/bsh8y/Desktop/projects/side_projects/Discord_bot/lib/antlr/antlr4cpp_generated_src/antlrcpptest -package antlrcpptest /home/bsh8y/Desktop/projects/side_projects/Discord_bot/lib/antlr/dml.g4

antlr4cpp_generation_antlrcpptest: CMakeFiles/antlr4cpp_generation_antlrcpptest
antlr4cpp_generation_antlrcpptest: CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/build.make

.PHONY : antlr4cpp_generation_antlrcpptest

# Rule to build all files generated by this target.
CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/build: antlr4cpp_generation_antlrcpptest

.PHONY : CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/build

CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/clean

CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/depend:
	cd /home/bsh8y/Desktop/projects/side_projects/Discord_bot && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bsh8y/Desktop/projects/side_projects/Discord_bot /home/bsh8y/Desktop/projects/side_projects/Discord_bot /home/bsh8y/Desktop/projects/side_projects/Discord_bot /home/bsh8y/Desktop/projects/side_projects/Discord_bot /home/bsh8y/Desktop/projects/side_projects/Discord_bot/CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/antlr4cpp_generation_antlrcpptest.dir/depend
