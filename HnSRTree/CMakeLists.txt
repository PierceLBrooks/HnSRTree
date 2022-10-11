
set(HNSRTREE_FILES )

file(GLOB HNSRTREE_HEADERS ${CMAKE_CURRENT_LIST_DIR}/*.*h)
file(GLOB HNSRTREE_SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.*c)
list(APPEND HNSRTREE_FILES ${HNSRTREE_HEADERS})
list(APPEND HNSRTREE_FILES ${HNSRTREE_SOURCES})

add_library(HnSRTree ${HNSRTREE_LINKAGE} ${HNSRTREE_FILES})
target_link_libraries(HnSRTree PRIVATE HnRect)
target_link_libraries(HnSRTree PRIVATE HnObject)
target_compile_definitions(HnSRTree PRIVATE HNSRTREE_CMAKE)
target_compile_features(HnSRTree PRIVATE cxx_std_14)
target_include_directories(HnSRTree PRIVATE ${PROJECT_BINARY_DIR})
target_include_directories(HnSRTree PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_include_directories(HnSRTree PRIVATE ${CMAKE_CURRENT_LIST_DIR}/../include)
#set_target_properties(HnSRTree PROPERTIES PUBLIC_HEADER "${HNSRTREE_HEADERS}")
install(TARGETS HnSRTree)
install(FILES ${HNSRTREE_HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/HnSRTree)

