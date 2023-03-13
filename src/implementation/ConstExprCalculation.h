#pragma once

#include "interface/Calculation.h"

//!  RunTime Calculation implementation
/*!
  This calculation performs an operation at compile time, creates a
  table of results that can be accessed at execution time.
*/
class ConstExprCalculation : public ICalculation {
public:
  ConstExprCalculation() = default;
  ~ConstExprCalculation() = default;
  virtual float PerformCalculation(float input) override;
};