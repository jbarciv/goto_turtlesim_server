# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_publish_and_subscribe_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED publish_and_subscribe_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(publish_and_subscribe_FOUND FALSE)
  elseif(NOT publish_and_subscribe_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(publish_and_subscribe_FOUND FALSE)
  endif()
  return()
endif()
set(_publish_and_subscribe_CONFIG_INCLUDED TRUE)

# output package information
if(NOT publish_and_subscribe_FIND_QUIETLY)
  message(STATUS "Found publish_and_subscribe: 0.0.0 (${publish_and_subscribe_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'publish_and_subscribe' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${publish_and_subscribe_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(publish_and_subscribe_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${publish_and_subscribe_DIR}/${_extra}")
endforeach()
