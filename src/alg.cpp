// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  if (a == 0) return b;
  if (b == 0) return a;

  while (b != 0) {
    int ost = a % b;
    a = b;
    b = ost;
  }

  return a;
}
