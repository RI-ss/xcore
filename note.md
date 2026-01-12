# 编译 运行
cmake -B build -S .
cmake --build build

# 打包
cmake --build build --config Release
cmake --install build --config Release --prefix ./package