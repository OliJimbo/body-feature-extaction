cmake_minimum_required (VERSION 2.8)

project (BodyEdgeDetection)

include_directories(/usr/local/Cellar/opencv@2/2.4.13.7_11/include/opencv2 ./src)
link_directories(/usr/local/Cellar/opencv@2/2.4.13.7_11/lib)

aux_source_directory(src/ BASE_SOURCE)

set(LIBS xml2  opencv_core opencv_highgui opencv_imgproc)
set (CMAKE_CXX_STANDARD 11)

add_executable (bodyEdgeD ${BASE_SOURCE})
target_link_libraries(bodyEdgeD ${LIBS})
