// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  int nod = 0;
  while (!nod) {
    if (a > b) {
      for (int i = b; i; i--) {
        if (((b % i) == 0) && ((a % i) == 0)) {
          nod = i;
          break;
        }
      }
    }
    if (a < b) {
      for (int i = a; i; i--) {
        if (((b % i) == 0) && ((a % i) == 0)) {
          nod = i;
          break;
        }
      }
    }
    if (a == b) {
      nod = a;
    }
  }
  return nod;
}
