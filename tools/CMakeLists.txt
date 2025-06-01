set(LLVM_LINK_COMPONENTS
  Core
  Support
  nativecodegen
  OrcJIT
)

get_property(dialect_libs GLOBAL PROPERTY MLIR_DIALECT_LIBS)
get_property(conversion_libs GLOBAL PROPERTY MLIR_CONVERSION_LIBS)
get_property(extension_libs GLOBAL PROPERTY MLIR_EXTENSION_LIBS)

add_executable(mlir-toy-opt mlir-toy-opt.cpp)

target_link_libraries(mlir-toy-opt PRIVATE
  ${dialect_libs}
  ${conversion_libs}
  ${extension_libs}
  MLIRIR
  MLIROptLib
  MLIRParser
  MLIRSupport
  MLIRTransforms
  MLIRPass
  MLIRToyTransforms
)
mlir_check_all_link_libraries(mlir-toy-opt)
