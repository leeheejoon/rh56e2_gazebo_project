#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "arms_target_manager::arms_target_manager" for configuration "Release"
set_property(TARGET arms_target_manager::arms_target_manager APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(arms_target_manager::arms_target_manager PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/arms_target_manager/libarms_target_manager.so"
  IMPORTED_SONAME_RELEASE "libarms_target_manager.so"
  )

list(APPEND _cmake_import_check_targets arms_target_manager::arms_target_manager )
list(APPEND _cmake_import_check_files_for_arms_target_manager::arms_target_manager "${_IMPORT_PREFIX}/lib/arms_target_manager/libarms_target_manager.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
