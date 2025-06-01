# Usage instructions
```
export MLIR_DIR=/path/to/mlir
export LLVM_DIR=/path/to/llvm

mkdir build
cd build
cmake .. -G Ninja   -DMLIR_DIR=$MLIR_DIR   -DLLVM_DIR=$LLVM_DIR   -DCMAKE_BUILD_TYPE=Debug   -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

ninja
```