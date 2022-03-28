#pragma once
#include <iostream>

using namespace std;

class Fraction
{
private:
	int first;
	int second;
public:
	void set_first(int a);
	void set_second(int a);
	int get_first();
	int get_second();

	void display();
	void read();

	bool init();

	int ipart();
};

