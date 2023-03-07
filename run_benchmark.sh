#! /bin/bash

cd build/bin
./bench_impl --benchmark_format=json | tee benchmark_result.json
cp benchmark_result.json ../../
