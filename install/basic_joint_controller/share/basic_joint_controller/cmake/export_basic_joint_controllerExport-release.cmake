#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "basic_joint_controller::basic_joint_controller" for configuration "Release"
set_property(TARGET basic_joint_controller::basic_joint_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(basic_joint_controller::basic_joint_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/basic_joint_controller/libbasic_joint_controller.so"
  IMPORTED_SONAME_RELEASE "libbasic_joint_controller.so"
  )

list(APPEND _cmake_import_check_targets basic_joint_controller::basic_joint_controller )
list(APPEND _cmake_import_check_files_for_basic_joint_controller::basic_joint_controller "${_IMPORT_PREFIX}/lib/basic_joint_controller/libbasic_joint_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
