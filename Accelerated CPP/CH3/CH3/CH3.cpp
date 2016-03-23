#include "stdafx.h"
#include "CH3.h"

#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Example1();

	return 0;
}


auto Example1() -> void
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Please enter your midterm and final exam grades: ";
	auto midterm = 0.0, final = 0.0;
	cin >> midterm >> final;

	cout << "Enter all your homework grades, "
		"followed by end-of-file: ";
	auto count = 0;
	auto sum = 0.0;
	auto x = 0.0;
	while (cin >> x) {
		++count;
		sum += x;
	}

	auto prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		<< setprecision(prec) << endl;
}
