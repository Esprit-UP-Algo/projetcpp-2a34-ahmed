# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\surface_yassine_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\surface_yassine_autogen.dir\\ParseCache.txt"
  "surface_yassine_autogen"
  )
endif()
