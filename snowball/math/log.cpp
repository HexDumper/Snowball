// function for logarithms
#include"log.h"
/**
 * @brief This namespace contains mathematical functions that may be useful, they are added as needed.
 */
namespace math
{
  /**
   * Returns the logarithms of a positive integer.
   * @param  base The base of the logarithm, a positive integer
   * @param  arg       The number of which the logarithm of base "base" will be taken,
   * also a positive integer.
   * @return           The result of the operation
   */
long double log(unsigned int base, long double arg) {
  long double count;
  unsigned long int loopCap;
  long double result;

  loopCap = 99999999;
  count = 1;
  result = 1;

  for (int i = 0; i <= loopCap; i++) {
    if (count != arg) {
      result *= base;
      count += 1;
    }
    else if(result == arg) {
    }
  }
  return count;
}
}
