
set(HNRECT_FILES )

file(GLOB HNRECT_HEADERS ${CMAKE_CURRENT_LIST_DIR}/*.*h)
file(GLOB HNRECT_SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.*c)
list(APPEND HNRECT_FILES ${HNRECT_HEADERS})
list(APPEND HNRECT_FILES ${HNRECT_SOURCES})

add_library(HnRect ${HNRECT_LINKAGE} ${HNRECT_FILES})
target_link_libraries(HnRect PRIVATE HnObject)
target_compile_definitions(HnRect PRIVATE HNRECT_CMAKE)
target_compile_features(HnRect PRIVATE cxx_std_14)
target_include_directories(HnRect PRIVATE ${PROJECT_BINARY_DIR})
target_include_directories(HnRect PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_include_directories(HnRect PRIVATE ${CMAKE_CURRENT_LIST_DIR}/../include)
#set_target_properties(HnRect PROPERTIES PUBLIC_HEADER "${HNRECT_HEADERS}")
install(TARGETS HnRect)
install(FILES ${HNRECT_HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/HnSRTree)

