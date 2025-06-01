#include "Dialect/Toy/IR/ToyOps.h"

using namespace mlir;
using namespace mlir::toy;

#include "mlir/Dialect/Tensor/IR/Tensor.h"
#include "Dialect/Toy/IR/ToyOpsDialect.cpp.inc"

#define GET_OP_CLASSES
#include "Dialect/Toy/IR/ToyOps.cpp.inc"

//===----------------------------------------------------------------------===//
// Toy dialect initialization.
//===----------------------------------------------------------------------===//

void ToyDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "Dialect/Toy/IR/ToyOps.cpp.inc"
      >();
  addTypes<
#define GET_TYPEDEF_LIST
#include "Dialect/Toy/IR/ToyOpsTypes.cpp.inc"
      >();
}