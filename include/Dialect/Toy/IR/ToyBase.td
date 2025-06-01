// #ifndef TOY_BASE
// #define TOY_BASE

include "mlir/IR/OpBase.td"
include "mlir/IR/DialectBase.td"

def Toy_Dialect : Dialect {
    let name = "toy";
    let cppNamespace = "mlir::toy";
    let description = [{
        Dummy description for Toy dialect.
    }];
    let dependentDialects = [
        "tensor::TensorDialect",
    ];
}

// #endif