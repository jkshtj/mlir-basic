// #ifndef TOY_OPS
// #define TOY_OPS

include "Dialect/Toy/IR/ToyBase.td"
include "mlir/Interfaces/SideEffectInterfaces.td"

class Toy_Op<string mnemonic, list<Trait> traits = []> : Op<Toy_Dialect, mnemonic, traits>;

def Toy_AddOp : Toy_Op<"add", [Pure, Commutative]> {
  let summary = "Elementwise addition operator";

  let arguments = (ins
    AnyRankedTensor:$input1,
    AnyRankedTensor:$input2
  );

  let results = (outs
    AnyRankedTensor:$output
  );
}

// #endif