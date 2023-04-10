# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ContrWork_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ContrWork_autogen.dir\\ParseCache.txt"
  "ContrWork_autogen"
  )
endif()
