#include "ConstExprCalculation.h"

#include "utils/LookUpTable.h"
#include "utils/EvaluationFunctions.h"

namespace{
using namespace LookUpTable;
auto table = GenerateTable<target_range_samples>(FunctionCompileTime, target_range_min, target_range_step_size);
}

float ConstExprCalculation::PerformCalculation(float input) {
using namespace LookUpTable;
return TableLookWithInterpolation<decltype(table)&>(input, table);
}
