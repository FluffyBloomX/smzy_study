# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\Program Files\JetBrains\CLion 2024.1.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files\JetBrains\CLion 2024.1.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\GitHub\smzy_study

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\GitHub\smzy_study\cmake-build-release-mingw

# Include any dependencies generated for this target.
include CMakeFiles/smz.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/smz.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/smz.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/smz.dir/flags.make

CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.obj: CMakeFiles/smz.dir/flags.make
CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.obj: CMakeFiles/smz.dir/includes_CXX.rsp
CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.obj: E:/GitHub/smzy_study/cpp_study/day_8/text1.cpp
CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.obj: CMakeFiles/smz.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\GitHub\smzy_study\cmake-build-release-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.obj"
	"E:\Program Files\JetBrains\CLion 2024.1.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.obj -MF CMakeFiles\smz.dir\cpp_study\day_8\text1.cpp.obj.d -o CMakeFiles\smz.dir\cpp_study\day_8\text1.cpp.obj -c E:\GitHub\smzy_study\cpp_study\day_8\text1.cpp

CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.i"
	"E:\Program Files\JetBrains\CLion 2024.1.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\GitHub\smzy_study\cpp_study\day_8\text1.cpp > CMakeFiles\smz.dir\cpp_study\day_8\text1.cpp.i

CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.s"
	"E:\Program Files\JetBrains\CLion 2024.1.1\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\GitHub\smzy_study\cpp_study\day_8\text1.cpp -o CMakeFiles\smz.dir\cpp_study\day_8\text1.cpp.s

# Object files for target smz
smz_OBJECTS = \
"CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.obj"

# External object files for target smz
smz_EXTERNAL_OBJECTS =

smz.exe: CMakeFiles/smz.dir/cpp_study/day_8/text1.cpp.obj
smz.exe: CMakeFiles/smz.dir/build.make
smz.exe: CMakeFiles/smz.dir/linkLibs.rsp
smz.exe: CMakeFiles/smz.dir/objects1.rsp
smz.exe: CMakeFiles/smz.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\GitHub\smzy_study\cmake-build-release-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable smz.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\smz.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/smz.dir/build: smz.exe
.PHONY : CMakeFiles/smz.dir/build

CMakeFiles/smz.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\smz.dir\cmake_clean.cmake
.PHONY : CMakeFiles/smz.dir/clean

CMakeFiles/smz.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\GitHub\smzy_study E:\GitHub\smzy_study E:\GitHub\smzy_study\cmake-build-release-mingw E:\GitHub\smzy_study\cmake-build-release-mingw E:\GitHub\smzy_study\cmake-build-release-mingw\CMakeFiles\smz.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/smz.dir/depend

