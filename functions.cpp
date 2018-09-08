#include <iostream>
#include <vector>
using namespace std;

int vecSize(char c) {
	int r;

	do {
		cout << "Wprowadz rozmiar tablicy " << c << ": ";
		cin >> r;
	} while (r < 1);

	return r;
}


void vecFill(vector<int> &x, int n, char c) {
	for (int i = 0; i < n; i++) {
		cout << "Wprowadz " << i + 1 << ". liczbe do tablicy " << c << ": ";
		cin >> x[i];

		if (i > 0) {
			while (x[i] < x[i - 1]) {
				cout << i + 1 << ". liczba nie moze byc mniejsza od " << i << ". liczby. ";
				cin >> x[i];
			}
		}
	}
}