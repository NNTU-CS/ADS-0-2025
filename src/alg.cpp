// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
  while (b != 0) {
    int tempik = b;
    b = a % b;
    a = tempik;
    }
return a;
}
