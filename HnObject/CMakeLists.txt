
set(HNOBJECT_FILES )

file(GLOB HNOBJECT_HEADERS ${CMAKE_CURRENT_LIST_DIR}/*.*h)
file(GLOB HNOBJECT_SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.*c)
list(APPEND HNOBJECT_HEADERS ${CMAKE_CURRENT_LIST_DIR}/HnFTypeArray.cc)
list(APPEND HNOBJECT_HEADERS ${CMAKE_CURRENT_LIST_DIR}/HnClassArray.cc)
list(APPEND HNOBJECT_FILES ${HNOBJECT_HEADERS})
list(APPEND HNOBJECT_FILES ${HNOBJECT_SOURCES})

add_library(HnObject ${HNOBJECT_LINKAGE} ${HNOBJECT_FILES})
target_compile_definitions(HnObject PRIVATE HNOBJECT_CMAKE)
target_compile_features(HnObject PRIVATE cxx_std_14)
target_include_directories(HnObject PRIVATE ${PROJECT_BINARY_DIR})
target_include_directories(HnObject PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_include_directories(HnObject PRIVATE ${CMAKE_CURRENT_LIST_DIR}/../include)
set_target_properties(HnObject PROPERTIES PUBLIC_HEADER ${HNOBJECT_HEADERS})
install(TARGETS HnObject)

