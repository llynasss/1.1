#include "Fraction.h"

void Fraction::set_first(int a) {
	first = a;
}

void Fraction::set_second(int a) {
	second = a;
}

int Fraction::get_first() {
	return first;
}

int Fraction::get_second() {
	return second;
}

void Fraction::display() {
	cout << "First: " << first << endl;
	cout << "Second: " << second << endl;
}

void Fraction::read() {
	cout << "First: "; cin >> first;
	cout << "Second: "; cin >> second;
}

bool Fraction::init() {
	if (first > 0 && second > 0) {
		return 0;
	}
	else {
		return 1;
	}
}

int Fraction::ipart() {
	if (second != 0) {
		return first / second;
	}
	else {
		cout << "Second = 0" << endl;
		return 0;
	}
}

