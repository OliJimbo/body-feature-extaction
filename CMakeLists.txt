cmake_minimum_required (VERSION 2.8)

project (BodyEdgeDetection)

include_directories( /usr/local/include/opencv2 ./src)
link_directories( /usr/local/lib/ )

aux_source_directory(src/ BASE_SOURCE)
aux_source_directory(src/main MAIN_SOURCE)

set(LIBS xml2  opencv_core opencv_highgui opencv_imgproc) 

add_executable (bodyEdgeD ${BASE_SOURCE} ${MAIN_SOURCE})
target_link_libraries(bodyEdgeD ${LIBS})
