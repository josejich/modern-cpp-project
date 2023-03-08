#pragma once

class ICalculation {
public:
    virtual ~ICalculation() = default;
    virtual float PerformCalculation(float input) = 0;
};