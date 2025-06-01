add_mlir_dialect_library(MLIRToyDialect
    ToyOps.cpp
    ${PROJECT_SOURCE_DIR}/include/Dialect/Toy/IR/ToyOps.h

    DEPENDS
    MLIRToyOpsIncGen

    LINK_LIBS PUBLIC
    MLIRIR
    MLIRSupport
    MLIRDialect
    MLIRFuncDialect
    MLIRCallInterfaces
    MLIRControlFlowInterfaces
    MLIRSideEffectInterfaces
    MLIRViewLikeInterface
)