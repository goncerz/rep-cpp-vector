#include <iostream>
#include "header.h"

int main(void)
{
	int na;
	int nb;
	vector<int> a;
	vector<int> b;
	vector<int> c;
	int i = 0;
	int j = 0;
	vector<int>::iterator it;

	cout << "Program prosi uzytkownika o wprowadzenie liczb calkowitych do dwoch tablic A i B w taki sposob,"
		<< " aby tworzyly ciagi niemalejace. Nastepnie program tworzy tablice C, ktora stanowi polaczenie tablic"
		<< " A i B w taki sposob, ze tez tworzy ciag niemalejacy." << endl << endl;

	na = vecSize('A');
	a.resize(na);
	vecFill(a, na, 'A');
	cout << endl;

	nb = vecSize('B');
	b.resize(nb);
	vecFill(b, nb, 'B');
	cout << endl;

	while (i < na && j < nb) {
		if (a[i] < b[j]) {
			c.push_back(a[i]);
			i++;
		}
		else {
			c.push_back(b[j]);
			j++;
		}
	}

	if (i == na) {
		while (j < nb) {
			c.push_back(b[j]);
			j++;
		}
	}
	else if (j == nb) {
		while (i < na) {
			c.push_back(a[i]);
			i++;
		}
	}

	cout << "Tablica C:" << endl;
	for (i = 0, it = c.begin(); it != c.end(); i++, it++) {
		cout << "C[" << i << "] = " << *it << endl;
	}

	return 0;
}