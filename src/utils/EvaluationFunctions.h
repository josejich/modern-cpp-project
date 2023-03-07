#pragma once

constexpr float FunctionCompileTime(float _x)
{
    float a = 0;
    for (int i = 0; i < 10000; i++) {
        a += i * 0.0001 * _x ;
    }
	return a;
}

static float FunctionRuntime(float _x)
{
    float a = 0;
    for (int i = 0; i < 10000; i++) {
        a += i * 0.0001 * _x ;
    }
	return a;
}