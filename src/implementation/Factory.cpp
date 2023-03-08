#include <interface/Factory.h>
#include <implementation/ConstExprCalculation.h>
#include <implementation/RunTimeCalculation.h>

namespace Factory
{
    std::unique_ptr<ICalculation> CreateCalculation(CalculationType type)
    {
        switch (type)
        {
        case CalculationType::CONSTEXPR:
            return std::make_unique<ConstExprCalculation>();
        case CalculationType::RUNTIME:
            return std::make_unique<RunTimeCalculation>();
        default:
            return nullptr;
        }
    }
}