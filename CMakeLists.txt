cmake_minimum_required(VERSION 3.12.0 FATAL_ERROR)

project("HnSRTree")

if ("${CMAKE_SYSTEM_NAME}" STREQUAL "Windows")
    configure_file(config.h.in HnSRTree/config.h)
else()
    include(CheckFunctionExists)
    include(CheckIncludeFile)
    check_function_exists(memmove HAVE_MEMMOVE)
    check_function_exists(strerror HAVE_STRERROR)
    check_include_file(sys/times.h HAVE_SYS_TIMES_H)
    check_include_file(sys/time.h HAVE_SYS_TIME_H)
    check_include_file(ieeefp.h HAVE_IEEEFP_H)
    check_include_file(fpu_control.h HAVE_FPU_CONTROL_H)
    configure_file(config.h.cmake HnSRTree/config.h)
endif()

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

