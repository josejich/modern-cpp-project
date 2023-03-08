#pragma once

#include "interface/Calculation.h"


class ConstExprCalculation : public ICalculation {
public:
    ~ConstExprCalculation() = default;
    virtual float PerformCalculation(float input) override;
};