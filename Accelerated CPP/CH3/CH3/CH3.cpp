#include "stdafx.h"
#include "CH3.h"

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


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


auto Example2() -> void
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

	vector<double> homework;
	auto x = 0.0;
	while (cin >> x) {
		homework.push_back(x);
	}
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	if (size == 0) {
		cout << endl << "You must enter your grades. "
			"Please try again." << endl;
		return;
	}

	sort(homework.begin(), homework.end());

	vec_sz mid = size / 2;
	auto median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
		: homework[mid];

	auto prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;
}


auto Exercise0() -> void
{
	Example1();
	Example2();
}


int main()
{
	Exercise0();

	return 0;
}