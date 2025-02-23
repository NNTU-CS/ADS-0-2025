// Copyright 2021 NNTU-CS

int gcd(int a, int b) { //проверка комма
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}