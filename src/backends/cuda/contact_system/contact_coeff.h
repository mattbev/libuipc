#pragma once
#include <type_define.h>

namespace uipc::backend::cuda
{
class ContactCoeff
{
  public:
    // normal stiffness
    Float kappa = 0.0;
    // friction coefficient
    Float mu = 0.0;
    // Bowden-Tabor interfacial shear strength tau (Pa); area-dependent adhesion
    Float tau = 0.0;
};
}  // namespace uipc::backend::cuda
