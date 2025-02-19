// Copyright 2021 NNTU-CS
int gcd(int a, int b) {
  int x = 0;
  if (a > b) {
    for (int i = 1; i <= a; i++) {
      if ((a % i == 0) && (b % i == 0)) {
        x = i;
      }
    }
  } else {
    for (int i = 1; i <= b; i++) {
      if ((a % i == 0) && (b % i == 0)) {
          x = i;
        }
      }
    }
    return x;
  }
