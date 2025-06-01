#ifndef TOY_DIALECT_H
#define TOY_DIALECT_H

#include "mlir/IR/Dialect.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/Interfaces/ControlFlowInterfaces.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/IR/OpImplementation.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"

//===----------------------------------------------------------------------===//
// Toy Dialect
//===----------------------------------------------------------------------===//

#include "Dialect/Toy/IR/ToyOpsDialect.h.inc"

//===----------------------------------------------------------------------===//
// Toy Dialect Operations
//===----------------------------------------------------------------------===//

#define GET_OP_CLASSES
#include "Dialect/Toy/IR/ToyOps.h.inc"


#endif // TOY_DIALECT_H
