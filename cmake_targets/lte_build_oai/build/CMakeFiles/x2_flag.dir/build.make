# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lixh/ue_folder/cmake_targets/lte_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lixh/ue_folder/cmake_targets/lte_build_oai/build

# Utility rule file for x2_flag.

# Include the progress variables for this target.
include CMakeFiles/x2_flag.dir/progress.make

CMakeFiles/x2_flag: /home/lixh/ue_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1
	/home/lixh/ue_folder/cmake_targets/tools/make_asn1c_includes.sh /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/X2AP_R14 /home/lixh/ue_folder/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1 X2AP_ -fno-include-deps

x2_flag: CMakeFiles/x2_flag
x2_flag: CMakeFiles/x2_flag.dir/build.make

.PHONY : x2_flag

# Rule to build all files generated by this target.
CMakeFiles/x2_flag.dir/build: x2_flag

.PHONY : CMakeFiles/x2_flag.dir/build

CMakeFiles/x2_flag.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/x2_flag.dir/cmake_clean.cmake
.PHONY : CMakeFiles/x2_flag.dir/clean

CMakeFiles/x2_flag.dir/depend:
	cd /home/lixh/ue_folder/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lixh/ue_folder/cmake_targets/lte_build_oai /home/lixh/ue_folder/cmake_targets/lte_build_oai /home/lixh/ue_folder/cmake_targets/lte_build_oai/build /home/lixh/ue_folder/cmake_targets/lte_build_oai/build /home/lixh/ue_folder/cmake_targets/lte_build_oai/build/CMakeFiles/x2_flag.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/x2_flag.dir/depend

