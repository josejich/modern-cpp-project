/** @file
 *  @brief Main file.
 *  @description Just contains some example code. Adapt it in the way you like.
 */

#include "interface/Factory.h"

#include <iostream>

int main(int argc, char *argv[])
{
  auto fast_impl = Factory::CreateCalculation(Factory::CalculationType::CONSTEXPR);
  auto slow_impl = Factory::CreateCalculation(Factory::CalculationType::RUNTIME);
  if (fast_impl && slow_impl)
  {
    std::cout << "Result using result table: " << fast_impl->PerformCalculation(0.5) << "\n";
    std::cout << "Result computed at runtime: " << slow_impl->PerformCalculation(0.5) << "\n";
  }
  else
  {
    std::cout << "Instantiation error! check that you have available resources\n";
  }
  return 0;
}
