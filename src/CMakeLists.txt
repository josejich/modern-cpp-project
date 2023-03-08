add_library(factory)

target_sources(factory
  PRIVATE
    implementation/ConstExprCalculation.cpp
    implementation/RunTimeCalculation.cpp
    implementation/ConstExprCalculation.h
    implementation/RunTimeCalculation.h
    implementation/Factory.cpp
  PUBLIC
    interface/Calculation.h
    interface/Factory.h
    utils/LookUpTable.h
  )

target_include_directories(factory
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
    )

if(CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux" AND CMAKE_BUILD_TYPE STREQUAL "Debug")
  message("Enabling coverage data")
  target_compile_options(factory
    PUBLIC
      "--coverage"
    )
  target_link_options(factory
    INTERFACE
      "--coverage"
    )
endif()

add_executable(main main.cpp)

target_link_libraries(main factory)
