// Copyright 2021 NNTU-CS

#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    std::cout << gcd(10, 15) << std::endl;
    return 0;
}
