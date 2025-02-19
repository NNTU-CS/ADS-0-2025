// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  while (a != 0) {
    int var = a;
    a = b%a;
    b = var;
  }
  return b;
}
