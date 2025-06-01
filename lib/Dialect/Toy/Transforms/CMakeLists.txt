add_mlir_library(MLIRToyTransforms
  ToySamplePass.cpp

  LINK_COMPONENTS
  Core

  DEPENDS
  MLIRToyPassIncGen

  LINK_LIBS PUBLIC
  MLIRIR
  MLIRPass
  MLIRTransforms
)
