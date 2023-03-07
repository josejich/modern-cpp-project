#include "interface/Calculation.h"


class RunTimeCalculation: public ICalculation {
public:
    RunTimeCalculation() = default;
    ~RunTimeCalculation() = default;
    virtual float PerformCalculation(float input) override;
};