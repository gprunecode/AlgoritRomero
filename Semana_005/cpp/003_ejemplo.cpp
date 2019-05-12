#include <iostream>
using namespace std;

int factorial(int num) {
  int i, factor = 1;
  for (int i = 1; i<=num; i++) {
    factor = factor*i;
  }
  return factor;
}
