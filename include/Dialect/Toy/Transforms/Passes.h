#include "llvm/Support/CommandLine.h"
#include "mlir/Pass/Pass.h"
#include "mlir/IR/BuiltinOps.h"
#include "mlir/Dialect/Tensor/IR/Tensor.h"

namespace mlir {
namespace toy {
    #define GEN_PASS_DECL
    #define GEN_PASS_REGISTRATION
    #define GEN_PASS_CLASSES
    #include "Dialect/Toy/Transforms/Passes.h.inc"
}
}