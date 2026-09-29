#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "adaptive_gripper_controller::adaptive_gripper_controller" for configuration "Release"
set_property(TARGET adaptive_gripper_controller::adaptive_gripper_controller APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(adaptive_gripper_controller::adaptive_gripper_controller PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/adaptive_gripper_controller/libadaptive_gripper_controller.so"
  IMPORTED_SONAME_RELEASE "libadaptive_gripper_controller.so"
  )

list(APPEND _cmake_import_check_targets adaptive_gripper_controller::adaptive_gripper_controller )
list(APPEND _cmake_import_check_files_for_adaptive_gripper_controller::adaptive_gripper_controller "${_IMPORT_PREFIX}/lib/adaptive_gripper_controller/libadaptive_gripper_controller.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
