#include <benchmark/benchmark.h>

#include "interface/Factory.h"


static void CalculationConstExpr(benchmark::State& state) {
    auto fast_impl = Factory::CreateCalculation(Factory::CalculationType::CONSTEXPR);
    for (auto _ : state)
        fast_impl->PerformCalculation(0.5);
}
// Register the function as a benchmark
BENCHMARK(CalculationConstExpr);

// Define another benchmark
static void CalculationRuntime(benchmark::State& state) {
    auto slow_impl = Factory::CreateCalculation(Factory::CalculationType::RUNTIME);
    for (auto _ : state)
        slow_impl->PerformCalculation(0.5);
}
BENCHMARK(CalculationRuntime);

BENCHMARK_MAIN();
