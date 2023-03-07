#include <gtest/gtest.h>
#include "interface/Factory.h"

TEST(ConstExpr, ValidOutput1){
  auto  impl = Factory::CreateCalculation(Factory::CalculationType::CONSTEXPR);
  impl->PerformCalculation(0.5);
  ASSERT_EQ(impl->PerformCalculation(0.5),impl->PerformCalculation(0.5));
}