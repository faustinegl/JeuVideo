# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Faustine/Desktop/JeuVideoo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Faustine/Desktop/JeuVideoo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/JeuVideo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/JeuVideo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/JeuVideo.dir/flags.make

CMakeFiles/JeuVideo.dir/main.c.o: CMakeFiles/JeuVideo.dir/flags.make
CMakeFiles/JeuVideo.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Faustine/Desktop/JeuVideoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/JeuVideo.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/JeuVideo.dir/main.c.o   -c /Users/Faustine/Desktop/JeuVideoo/main.c

CMakeFiles/JeuVideo.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/JeuVideo.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Faustine/Desktop/JeuVideoo/main.c > CMakeFiles/JeuVideo.dir/main.c.i

CMakeFiles/JeuVideo.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/JeuVideo.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Faustine/Desktop/JeuVideoo/main.c -o CMakeFiles/JeuVideo.dir/main.c.s

CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.o: CMakeFiles/JeuVideo.dir/flags.make
CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.o: ../Vaisseau/Vaisseau.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Faustine/Desktop/JeuVideoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.o   -c /Users/Faustine/Desktop/JeuVideoo/Vaisseau/Vaisseau.c

CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Faustine/Desktop/JeuVideoo/Vaisseau/Vaisseau.c > CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.i

CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Faustine/Desktop/JeuVideoo/Vaisseau/Vaisseau.c -o CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.s

CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.o: CMakeFiles/JeuVideo.dir/flags.make
CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.o: ../Ennemis/Ennemis.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Faustine/Desktop/JeuVideoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.o   -c /Users/Faustine/Desktop/JeuVideoo/Ennemis/Ennemis.c

CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Faustine/Desktop/JeuVideoo/Ennemis/Ennemis.c > CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.i

CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Faustine/Desktop/JeuVideoo/Ennemis/Ennemis.c -o CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.s

CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.o: CMakeFiles/JeuVideo.dir/flags.make
CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.o: ../Etoile/Etoile.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Faustine/Desktop/JeuVideoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.o   -c /Users/Faustine/Desktop/JeuVideoo/Etoile/Etoile.c

CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Faustine/Desktop/JeuVideoo/Etoile/Etoile.c > CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.i

CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Faustine/Desktop/JeuVideoo/Etoile/Etoile.c -o CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.s

CMakeFiles/JeuVideo.dir/Missile/Missile.c.o: CMakeFiles/JeuVideo.dir/flags.make
CMakeFiles/JeuVideo.dir/Missile/Missile.c.o: ../Missile/Missile.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Faustine/Desktop/JeuVideoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/JeuVideo.dir/Missile/Missile.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/JeuVideo.dir/Missile/Missile.c.o   -c /Users/Faustine/Desktop/JeuVideoo/Missile/Missile.c

CMakeFiles/JeuVideo.dir/Missile/Missile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/JeuVideo.dir/Missile/Missile.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/Faustine/Desktop/JeuVideoo/Missile/Missile.c > CMakeFiles/JeuVideo.dir/Missile/Missile.c.i

CMakeFiles/JeuVideo.dir/Missile/Missile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/JeuVideo.dir/Missile/Missile.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/Faustine/Desktop/JeuVideoo/Missile/Missile.c -o CMakeFiles/JeuVideo.dir/Missile/Missile.c.s

# Object files for target JeuVideo
JeuVideo_OBJECTS = \
"CMakeFiles/JeuVideo.dir/main.c.o" \
"CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.o" \
"CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.o" \
"CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.o" \
"CMakeFiles/JeuVideo.dir/Missile/Missile.c.o"

# External object files for target JeuVideo
JeuVideo_EXTERNAL_OBJECTS =

JeuVideo: CMakeFiles/JeuVideo.dir/main.c.o
JeuVideo: CMakeFiles/JeuVideo.dir/Vaisseau/Vaisseau.c.o
JeuVideo: CMakeFiles/JeuVideo.dir/Ennemis/Ennemis.c.o
JeuVideo: CMakeFiles/JeuVideo.dir/Etoile/Etoile.c.o
JeuVideo: CMakeFiles/JeuVideo.dir/Missile/Missile.c.o
JeuVideo: CMakeFiles/JeuVideo.dir/build.make
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_acodec.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_acodec.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_acodec.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_audio.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_audio.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_audio.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_color.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_color.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_color.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_dialog.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_dialog.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_dialog.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_font.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_font.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_font.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_image.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_image.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_image.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_main.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_main.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_main.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_memfile.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_memfile.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_memfile.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_physfs.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_physfs.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_physfs.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_primitives.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_primitives.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_primitives.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_ttf.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_ttf.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_ttf.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_video.5.2.4.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_video.5.2.dylib
JeuVideo: /usr/local/Cellar/allegro/5.2.4.0/lib/liballegro_video.dylib
JeuVideo: CMakeFiles/JeuVideo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Faustine/Desktop/JeuVideoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable JeuVideo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JeuVideo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/JeuVideo.dir/build: JeuVideo

.PHONY : CMakeFiles/JeuVideo.dir/build

CMakeFiles/JeuVideo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/JeuVideo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/JeuVideo.dir/clean

CMakeFiles/JeuVideo.dir/depend:
	cd /Users/Faustine/Desktop/JeuVideoo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Faustine/Desktop/JeuVideoo /Users/Faustine/Desktop/JeuVideoo /Users/Faustine/Desktop/JeuVideoo/cmake-build-debug /Users/Faustine/Desktop/JeuVideoo/cmake-build-debug /Users/Faustine/Desktop/JeuVideoo/cmake-build-debug/CMakeFiles/JeuVideo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/JeuVideo.dir/depend

