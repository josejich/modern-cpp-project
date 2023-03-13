#pragma once

//!  Calculation using a given float input as an argument in compile time.
/*!
   The value returned can be resolved in compile time
*/
constexpr float FunctionCompileTime(float _x) {
  float a = 0;
  for (int i = 0; i < 10000; i++) {
    a += i * 0.0001 * _x;
  }
  return a;
}

//!  Calculation using a given float input as an argument in Runtime.
/*!
   Same calculation as the one resolved in compile time just that the
   result can only be obtain in run time.
*/
static float FunctionRuntime(float _x) {
  float a = 0;
  for (int i = 0; i < 10000; i++) {
    a += i * 0.0001 * _x;
  }
  return a;
}