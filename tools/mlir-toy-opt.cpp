#include "mlir/InitAllDialects.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/DialectRegistry.h"
#include "mlir/Tools/mlir-opt/MlirOptMain.h"

#include "Dialect/Toy/IR/ToyOps.h"
#include "Dialect/Toy/Transforms/Passes.h"

int main(int argc, char **argv) {
  mlir::DialectRegistry registry;
  registry.insert<mlir::toy::ToyDialect>();
  mlir::registerAllDialects(registry);
  mlir::toy::registerToyPasses();
  return mlir::asMainReturnCode(mlir::MlirOptMain(argc, argv, "Toy MLIR tool\n", registry));
}
