//===----------------------------------------------------------------------===//
// Toy Passes
//===----------------------------------------------------------------------===//

include "mlir/Pass/PassBase.td"

def ToySamplePass : Pass<"toy-sample-pass", "mlir::ModuleOp"> {
    let summary = "A sample pass for the Toy dialect";
    let description = [{
        This is a sample pass for the Toy dialect. It demonstrates how to define
        a pass in TableGen.
    }];

    let dependentDialects = [
    "tensor::TensorDialect",
    ];
}