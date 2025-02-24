// Copyright 2021 NNTU-CS
#include "alg.h"
int gcd(int a, int b) {
  while (b) {
    int nod = b;
    b = a % b;
    a = nod;
  }
  return a;
}
