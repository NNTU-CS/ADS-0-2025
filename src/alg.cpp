// Copyright 2021 NNTU-CS

int gcd(int x, int y) {
	int nod = 0;
	while (!nod) {
		if (x > y) {
			for (int i = y; i; i--) {
				if (((y % i) == 0) && ((x % i) == 0)) {
					nod = i;
					break;
				}
			}
		}
		if (x < y) {
			for (int i = x; i; i--) {
				if (((y % i) == 0) && ((x % i) == 0)) {
					nod = i;
					break;
				}
			}
		}
		if (x == y) {
			nod = x;
		}
	}
	return nod;
}
