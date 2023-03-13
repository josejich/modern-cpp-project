#pragma once

#include "interface/Calculation.h"

//!  RunTime Calculation implementation
/*!
  This calculation performs an operation at runtime using the defined
  interface and returns the result.
*/
class RunTimeCalculation : public ICalculation {
public:
  RunTimeCalculation() = default;
  ~RunTimeCalculation() = default;
  virtual float PerformCalculation(float input) override;
};