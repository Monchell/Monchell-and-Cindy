# 最低CMake版本要求
cmake_minimum_required(VERSION 3.10.0)

# 项目名称
project(cmake-test)
# 设置C/C++标准,c11,c++17
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# 预编译头添加 add_definitions(-D NDEBUG)看需求，有些库需要确定一些预编译头
# Inc头文件路径
include_directories("Inc")
include_directories("shape/Inc")

# opencv头文件路径
include_directories("D:/Program Files/opencv/build/include/opencv2")
include_directories("D:/Program Files/opencv/build/include")

# vrep头文件路径
include_directories("C:/Program Files/CoppeliaRobotics/CoppeliaSimEdu/programming/remoteApi")
include_directories("C:/Program Files/CoppeliaRobotics/CoppeliaSimEdu/programming/include")
include_directories("C:/Program Files/CoppeliaRobotics/CoppeliaSimEdu/programming/common")

# 链接库路径
link_directories("D:/Program Files/opencv/build-mingw/lib")

# 添加链接库
link_libraries("libopencv_videoio400")
link_libraries("libopencv_calib3d400")
link_libraries("libopencv_core400")
link_libraries("libopencv_dnn400")
link_libraries("libopencv_features2d400")
link_libraries("libopencv_flann400")
link_libraries("libopencv_highgui400")
link_libraries("libopencv_imgcodecs400")
link_libraries("libopencv_imgproc400")
link_libraries("libopencv_ml400")
link_libraries("libopencv_photo400")
link_libraries("libopencv_stitching400")
link_libraries("libopencv_video400")

# 枚举头文件,不知道有什么用
file(GLOB_RECURSE INCLUDES "Inc/*.h" "Inc/*.hpp")

# 枚举源文件
# src，main函数所在
aux_source_directory("Src" SOURCES)
# shape 父类容器指针指向子类对象的例程
aux_source_directory("shape/Src" SHAPE)

# 输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# 生成可执行的文件，名字，源文件，头文件
add_executable(${PROJECT_NAME} ${SOURCES} ${SHAPE} ${INCLUDE})