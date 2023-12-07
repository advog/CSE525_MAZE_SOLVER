# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vogel/Code/SCHOOL/CSE525/PF/MAZE_GUI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vogel/Code/SCHOOL/CSE525/PF/MAZE_GUI

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/vogel/Code/SCHOOL/CSE525/PF/MAZE_GUI/CMakeFiles /home/vogel/Code/SCHOOL/CSE525/PF/MAZE_GUI//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/vogel/Code/SCHOOL/CSE525/PF/MAZE_GUI/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named MAZE_GUI

# Build rule for target.
MAZE_GUI: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 MAZE_GUI
.PHONY : MAZE_GUI

# fast build rule for target.
MAZE_GUI/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/build
.PHONY : MAZE_GUI/fast

#=============================================================================
# Target rules for targets named MAZE_GUI_autogen

# Build rule for target.
MAZE_GUI_autogen: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 MAZE_GUI_autogen
.PHONY : MAZE_GUI_autogen

# fast build rule for target.
MAZE_GUI_autogen/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI_autogen.dir/build.make CMakeFiles/MAZE_GUI_autogen.dir/build
.PHONY : MAZE_GUI_autogen/fast

MAZE_GUI_autogen/mocs_compilation.o: MAZE_GUI_autogen/mocs_compilation.cpp.o
.PHONY : MAZE_GUI_autogen/mocs_compilation.o

# target to build an object file
MAZE_GUI_autogen/mocs_compilation.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/MAZE_GUI_autogen/mocs_compilation.cpp.o
.PHONY : MAZE_GUI_autogen/mocs_compilation.cpp.o

MAZE_GUI_autogen/mocs_compilation.i: MAZE_GUI_autogen/mocs_compilation.cpp.i
.PHONY : MAZE_GUI_autogen/mocs_compilation.i

# target to preprocess a source file
MAZE_GUI_autogen/mocs_compilation.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/MAZE_GUI_autogen/mocs_compilation.cpp.i
.PHONY : MAZE_GUI_autogen/mocs_compilation.cpp.i

MAZE_GUI_autogen/mocs_compilation.s: MAZE_GUI_autogen/mocs_compilation.cpp.s
.PHONY : MAZE_GUI_autogen/mocs_compilation.s

# target to generate assembly for a file
MAZE_GUI_autogen/mocs_compilation.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/MAZE_GUI_autogen/mocs_compilation.cpp.s
.PHONY : MAZE_GUI_autogen/mocs_compilation.cpp.s

clickable_label.o: clickable_label.cpp.o
.PHONY : clickable_label.o

# target to build an object file
clickable_label.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/clickable_label.cpp.o
.PHONY : clickable_label.cpp.o

clickable_label.i: clickable_label.cpp.i
.PHONY : clickable_label.i

# target to preprocess a source file
clickable_label.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/clickable_label.cpp.i
.PHONY : clickable_label.cpp.i

clickable_label.s: clickable_label.cpp.s
.PHONY : clickable_label.s

# target to generate assembly for a file
clickable_label.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/clickable_label.cpp.s
.PHONY : clickable_label.cpp.s

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/main.cpp.s
.PHONY : main.cpp.s

main_window.o: main_window.cpp.o
.PHONY : main_window.o

# target to build an object file
main_window.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/main_window.cpp.o
.PHONY : main_window.cpp.o

main_window.i: main_window.cpp.i
.PHONY : main_window.i

# target to preprocess a source file
main_window.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/main_window.cpp.i
.PHONY : main_window.cpp.i

main_window.s: main_window.cpp.s
.PHONY : main_window.s

# target to generate assembly for a file
main_window.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/MAZE_GUI.dir/build.make CMakeFiles/MAZE_GUI.dir/main_window.cpp.s
.PHONY : main_window.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... MAZE_GUI_autogen"
	@echo "... MAZE_GUI"
	@echo "... MAZE_GUI_autogen/mocs_compilation.o"
	@echo "... MAZE_GUI_autogen/mocs_compilation.i"
	@echo "... MAZE_GUI_autogen/mocs_compilation.s"
	@echo "... clickable_label.o"
	@echo "... clickable_label.i"
	@echo "... clickable_label.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... main_window.o"
	@echo "... main_window.i"
	@echo "... main_window.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

