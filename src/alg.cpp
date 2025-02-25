// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  int min = a > b ? b : a;
  int ind = 0;
  for (int i = min; i > 0; i--) {
      if (a % i == 0 && b % i == 0) {
      ind = i;
      break;
    }
  }
  return ind;
}
