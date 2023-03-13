#pragma once

#include "Calculation.h"

#include <memory>

namespace Factory {

enum class CalculationType { CONSTEXPR = 0, RUNTIME, INVALID };

std::unique_ptr<ICalculation> CreateCalculation(CalculationType type);

} // namespace Factory