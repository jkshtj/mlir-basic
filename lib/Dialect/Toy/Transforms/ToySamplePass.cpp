#include <iostream>

#include "mlir/Pass/Pass.h"
#include "Dialect/Toy/Transforms/Passes.h"

using namespace mlir;
using namespace mlir::toy;

namespace {
struct ToySamplePass : public ToySamplePassBase<ToySamplePass> {
    void runOnOperation() override {
        std::cout << "Running sample pass..." << std::endl;        
    }
};
}

std::unique_ptr<Pass> mlir::toy::createToySamplePass() {
    return std::make_unique<ToySamplePass>();
}