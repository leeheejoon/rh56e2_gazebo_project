#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "arms_controller_common::arms_controller_common" for configuration "Release"
set_property(TARGET arms_controller_common::arms_controller_common APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(arms_controller_common::arms_controller_common PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libarms_controller_common.so"
  IMPORTED_SONAME_RELEASE "libarms_controller_common.so"
  )

list(APPEND _cmake_import_check_targets arms_controller_common::arms_controller_common )
list(APPEND _cmake_import_check_files_for_arms_controller_common::arms_controller_common "${_IMPORT_PREFIX}/lib/libarms_controller_common.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
