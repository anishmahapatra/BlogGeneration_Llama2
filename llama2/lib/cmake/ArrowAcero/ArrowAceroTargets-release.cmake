#----------------------------------------------------------------
# Generated CMake target import file for configuration "RELEASE".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ArrowAcero::arrow_acero_shared" for configuration "RELEASE"
set_property(TARGET ArrowAcero::arrow_acero_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ArrowAcero::arrow_acero_shared PROPERTIES
  IMPORTED_LOCATION_RELEASE "/Users/anishmahapatra/Work/AI Projects/BlogGeneration_Llama2/llama2/lib/libarrow_acero.1400.2.0.dylib"
  IMPORTED_SONAME_RELEASE "@rpath/libarrow_acero.1400.dylib"
  )

list(APPEND _cmake_import_check_targets ArrowAcero::arrow_acero_shared )
list(APPEND _cmake_import_check_files_for_ArrowAcero::arrow_acero_shared "/Users/anishmahapatra/Work/AI Projects/BlogGeneration_Llama2/llama2/lib/libarrow_acero.1400.2.0.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)