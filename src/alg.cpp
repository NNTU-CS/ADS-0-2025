// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  for (int i = a / 2 + 1;i > 0;i -= 1) {
	if (a %i == 0) { return i; }
      }
  }
