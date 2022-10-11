cmake_minimum_required(VERSION 3.12.0 FATAL_ERROR)

project("HnSRTree")

configure_file(config.h.in HnSRTree/config.h)

macro(set_option var default type docstring)
	if(NOT DEFINED ${var})
		set(${var} ${default})
	endif()
	set(${var} ${${var}} CACHE ${type} ${docstring} FORCE)
endmacro()

set_option(CMAKE_BUILD_TYPE Release STRING "Choose the type of build config variant (\"Debug\" or \"Release\")")
set_option(HNOBJECT_LINKAGE STATIC STRING "Choose the type of library linkage for the HnObject module (\"STATIC\" or \"SHARED\")")
set_option(HNRECT_LINKAGE STATIC STRING "Choose the type of library linkage for the HnRect module (\"STATIC\" or \"SHARED\")")
set_option(HNSRTREE_LINKAGE STATIC STRING "Choose the type of library linkage for the HnSRTree module (\"STATIC\" or \"SHARED\")")

add_subdirectory(HnObject)
add_subdirectory(HnRect)
add_subdirectory(HnSRTree)

install(FILES ${PROJECT_BINARY_DIR}/HnSRTree/config.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include/HnSRTree)

