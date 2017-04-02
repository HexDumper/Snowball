// Function for (integer) exponents
#include"pow.h"

namespace math
{

  /**
   * Returns the power of the number.
   * @param  base The base of the exponent, a positive integer
   * @param  expo       The exponent
   * @return           The result of the operation
   */
long double pow(unsigned int base, int expo) {
  long double result;

  result = 1;
  if (base == 0) {
    std::cout<<"Invalid base"<<std::endl;
  }
  else {
    for (int i = 0; i < expo; i++) {
      result *= base;
    }
  }
  return result;
}
}
