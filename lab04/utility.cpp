// utility.cpp

#include "utility.h"

bool isOdd(int x) {
  if (x % 2) {
    return true;
  }
  return false;
}

bool isEven(int x) {
  if (x % 2) {
    return false;
  }
  return true;
}

bool isPrime(int x) {
  if (x < 2) {
    return false;
  }
  for (int i = 2; i <= (x / 2); i++) {
    if ((x % i) == 0) {
      return false;
    }
  }
  return true;
}
