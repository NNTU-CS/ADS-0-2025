// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
    }
    return a;
}
