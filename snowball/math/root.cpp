#include <iostream>
#include"root.h"
/**
 * Returns squate root of a positive integer.
 * @param  arg The number of which the square root will be taken
 * @return           The result of the operation
 */
long double sqrt(long double arg) {
  int loopCap = 1000;
  long double invArg;
  invArg = arg;
  for (int i = 0; i < loopCap; i++) {
    arg = 0.5 * (arg + (invArg/arg));
  }
  return arg;
}
