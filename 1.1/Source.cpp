#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction makeFraction(int first, int second, bool& control) {
	Fraction a;

	if (first > 0 && second > 0) {
		a.set_first(first);
		a.set_second(second);
		return a;
	}
	else {
		cout << "Wrong input" << endl;
		control = 1;
	}
	return a;
}

int main() {
	Fraction a;
	Fraction p;
	int b;
	bool control = 0;

	a.set_first(3);
	a.set_second(2);

	p = makeFraction(12, 12, control);

	if (control) {
		return 1;
	}

	if (a.init()) {
		cout << "Wrong input" << endl;
		return 1;
	}

	a.read();
	a.display();

	b = a.ipart();
	cout << b << endl;

	return 0;
}

