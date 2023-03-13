#pragma once

//!  Calculation virtual interface class
/*!
  Interface used to execute a calculation operation. In principle it is intended
  to use this operation to exchange different ways of implementing the
  operations.
*/

class ICalculation {
public:
  //! The ICalculation class destructor.
  /*!
    Keyword virtual is added so that we don't run into undefined behavior.
  */
  virtual ~ICalculation() = default;

  //! Method to execute a calculation based on the input value.
  /*!
  This method receives a float value, performs an operation, and returns the
  result. \param input float input used to execute the calculation. \return The
  tresult of executing the implemented operation
  */
  virtual float PerformCalculation(float input) = 0;
};