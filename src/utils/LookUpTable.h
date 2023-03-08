#pragma once

#include <array>
#include <cmath>

namespace LookUpTable
{

	constexpr auto target_range_min = 0.f;
	constexpr auto target_range_max = 5.0f;
	constexpr auto target_range_samples = 1000;
	constexpr auto target_range_step_size = static_cast<float>(target_range_max - target_range_min) / static_cast<float>(target_range_samples);
	constexpr auto target_range_get_index = [](float x)
	{ return ((float)((x + (0.000001f) - target_range_min))) / (static_cast<float>(target_range_step_size)); };

	template <typename Function, std::size_t... CounterSequence>
	constexpr auto GenerateTableHelper(Function f, const float _min, const float _stepSize, std::index_sequence<CounterSequence...>) -> std::array<typename std::result_of<Function(float)>::type, sizeof...(CounterSequence)>
	{
		return {{f(_min + (CounterSequence * _stepSize))...}};
	}

	template <int N, class Function>
	constexpr auto GenerateTable(Function f, const float _min, const float _stepSize)
	{
		return GenerateTableHelper(f, _min, _stepSize, std::make_index_sequence<N>{});
	}

	template <typename T>
	constexpr float TableLookWithInterpolation(float _val, T &arrayIn)
	{
		float pos = target_range_get_index(_val);
		int leftIndex = (int)pos;
		int rightIndex = leftIndex + 1;
		float val0 = arrayIn[leftIndex];
		float val1 = arrayIn[rightIndex];

		float scale = pos - floor(pos);
		float res = ((1.0f - scale) * val0) + ((scale)*val1);

		return res;
	}

}