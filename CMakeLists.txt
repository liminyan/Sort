cmake_minimum_required(VERSION 3.10)
project(SortingVisualization)

# 手动指定 SFML 的包含路径
include_directories(/opt/homebrew/Cellar/sfml/3.0.0/include)

# 手动指定 SFML 的库路径
link_directories(/opt/homebrew/Cellar/sfml/3.0.0/lib)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 设置源文件
set(SOURCES
    sorting_visualization.cpp
    sort.cpp
)

# 创建可执行文件
add_executable(sorting_visualization ${SOURCES})

# 手动链接 SFML 库
target_link_libraries(sorting_visualization
    sfml-graphics
    sfml-window
    sfml-system
)
