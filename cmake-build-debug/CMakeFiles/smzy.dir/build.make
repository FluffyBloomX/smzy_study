# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2024.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\admin\Desktop\smzy_study

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\admin\Desktop\smzy_study\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/smzy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/smzy.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/smzy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/smzy.dir/flags.make

CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.obj: CMakeFiles/smzy.dir/flags.make
CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.obj: CMakeFiles/smzy.dir/includes_CXX.rsp
CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.obj: C:/Users/admin/Desktop/smzy_study/cpp_study/day_29_vector_2/test.cpp
CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.obj: CMakeFiles/smzy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\admin\Desktop\smzy_study\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.obj"
	D:\PROGRA~2\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.obj -MF CMakeFiles\smzy.dir\cpp_study\day_29_vector_2\test.cpp.obj.d -o CMakeFiles\smzy.dir\cpp_study\day_29_vector_2\test.cpp.obj -c C:\Users\admin\Desktop\smzy_study\cpp_study\day_29_vector_2\test.cpp

CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.i"
	D:\PROGRA~2\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\admin\Desktop\smzy_study\cpp_study\day_29_vector_2\test.cpp > CMakeFiles\smzy.dir\cpp_study\day_29_vector_2\test.cpp.i

CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.s"
	D:\PROGRA~2\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\admin\Desktop\smzy_study\cpp_study\day_29_vector_2\test.cpp -o CMakeFiles\smzy.dir\cpp_study\day_29_vector_2\test.cpp.s

# Object files for target smzy
smzy_OBJECTS = \
"CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.obj"

# External object files for target smzy
smzy_EXTERNAL_OBJECTS =

smzy.exe: CMakeFiles/smzy.dir/cpp_study/day_29_vector_2/test.cpp.obj
smzy.exe: CMakeFiles/smzy.dir/build.make
smzy.exe: CMakeFiles/smzy.dir/linkLibs.rsp
smzy.exe: CMakeFiles/smzy.dir/objects1.rsp
smzy.exe: CMakeFiles/smzy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\admin\Desktop\smzy_study\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable smzy.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\smzy.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/smzy.dir/build: smzy.exe
.PHONY : CMakeFiles/smzy.dir/build

CMakeFiles/smzy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\smzy.dir\cmake_clean.cmake
.PHONY : CMakeFiles/smzy.dir/clean

CMakeFiles/smzy.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\admin\Desktop\smzy_study C:\Users\admin\Desktop\smzy_study C:\Users\admin\Desktop\smzy_study\cmake-build-debug C:\Users\admin\Desktop\smzy_study\cmake-build-debug C:\Users\admin\Desktop\smzy_study\cmake-build-debug\CMakeFiles\smzy.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/smzy.dir/depend

