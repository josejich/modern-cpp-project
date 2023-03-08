#include <gtest/gtest.h>
#include "interface/Factory.h"

TEST(RunTime, ValidOutput1){
  auto slow_impl = Factory::CreateCalculation(Factory::CalculationType::RUNTIME);
  slow_impl->PerformCalculation(0.5);
  ASSERT_EQ(slow_impl->PerformCalculation(0.5),slow_impl->PerformCalculation(0.5));
}