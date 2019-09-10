#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
  int empty[] = {};
    assertEquals(0,
  	       maxOfArray(empty,0),
  	       "maxOfArray(empty,0)" );

    return 0;
}
