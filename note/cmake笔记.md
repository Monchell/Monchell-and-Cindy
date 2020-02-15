# cmake笔记
* 最简单的cmakelists组成<br/><br/>
#最低CMake版本要求<br/>
cmake_minimum_required(VERSION 3.10.0)<br/>
#项目名称<br/>
project(cmake-test)<br/>
#头文件路径<br/>
include_directories(" ")<br/>
#枚举源文件<br/>
aux_source_directory("Src" SOURCES)<br/>
#生成可执行的文件，可执行文件名，源文件<br/>
add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDE}

* 包含lib文件，预编译头和c/c++标准可以看附件
* vscode能写md，真香！
  * 打开md文件点击右上角即可编译和预览
* vscode能用git，真香！
  * 直接在终端里面执行各种git命令即可，<br/>而且可以在左侧分支栏查看分支状态







