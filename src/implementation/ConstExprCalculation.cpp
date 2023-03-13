#include "ConstExprCalculation.h"

#include "utils/EvaluationFunctions.h"
#include "utils/LookUpTable.h"

namespace {
using namespace LookUpTable;
auto table = GenerateTable<target_range_samples>(
    FunctionCompileTime, target_range_min, target_range_step_size);
} // namespace

float ConstExprCalculation::PerformCalculation(float input) {
  using namespace LookUpTable;
  return TableLookWithInterpolation<decltype(table) &>(input, table);
}
