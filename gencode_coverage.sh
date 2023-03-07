cd build
ctest -C Debug --output-on-failure --verbose
cd ../
lcov --directory ./build/ --capture --output-file ./code_coverage.info -rc lcov_branch_coverage=1
lcov --remove code_coverage.info -o filtered_coverage.info \
     "`pwd`/test/*" \
      '/usr/include/*' \
      "*gtest*" \
      "*benchmark*" \
      "*interface* " \
      "`pwd`/src/main.cpp " 
genhtml filtered_coverage.info --branch-coverage --output-directory ./code_coverage_report/
