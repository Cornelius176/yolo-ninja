#include "pch.h"
#include <iostream>
#include <string>
#include <boost/range/iterator_range.hpp>

using namespace std;

string getGreeting() 
{
	string name;
	cout << "Please enter your first name: " << std::endl;
	cin >> name;
	return "Hello, " + name + "!";
}

int printOut(const string& greeting, const int& xPad, const int& yPad, const string& border)
{
	const auto rows = (yPad * 2) + 3;
	const auto cols = greeting.size() + (xPad * 2) + 2;

	for (auto r = 0; r < rows; ++r) {
		for (auto c = 0; c < cols; ++c) {
			if (r == 0 || c == 0 || r == rows - 1 || c == cols - 1) {
				cout << border;
			}
			else {
				if (r == yPad + 1 && c == xPad + 1) {
					cout << greeting;
					c += greeting.size() - 1;
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}

	return 0;
}

void ex0(const string& greeting)
{
	cout << "Exercise 0: " << endl;
	printOut(greeting, 1, 1, "*");
	cout << endl;
}

void ex1(const string& greeting)
{
	cout << "Exercise 1: " << endl;
	printOut(greeting, 0, 0, "*");
	cout << endl;
}

void ex2(const string& greeting)
{
	cout << "Exercise 2: " << endl;
	printOut(greeting, 1, 2, "*");
	cout << endl;
}

void ex3(const string& greeting)
{
	int xPad, yPad;
	cout << "Exercise 3: " << endl;
	cout << " xPad = ";
	cin >> xPad;
	cout << " yPad = ";
	cin >> yPad;
	printOut(greeting, xPad, yPad, "*");
	cout << endl;
}

void createSquare(const char& c, const int& x)
{
	cout << endl;
	for (auto i = 0; i < x; ++i) {
		cout << string(x, c) << endl;
	}
	cout << endl;
}

void createRectangle(const char& c, const int& x, const int& y)
{
	cout << endl;
	for (auto i = 0; i < y; ++i) {
		cout << string(x, c) << endl;
	}
	cout << endl;
}

void createTriangle(const char& c, const int& height)
{
	cout << endl;
	for (auto i = 1; i <= height; ++i)
	{
		cout << string(height - i, ' ') << string(2*(i)-1, c) << endl;
	}
	cout << endl;
}

void ex5(const char& c, const int& x, const int& y)
{
	cout << "Exercise 5: " << endl;
	createSquare(c, x);
	createRectangle(c, x, y);
	createTriangle(c, x);
	cout << endl;
}

void ex6()
{
	cout << "Exercise 6: " << endl;
	int i = 0;
	while (i < 10) {
		i += 1;
		std::cout << i << std::endl;
	}
	cout << endl << endl;
}

void ex7()
{
	cout << "Exercise 7: " << endl;
	for (auto i = 10; i > -6; --i)
		cout << i << " ";
	cout << endl << endl;
}

void ex8()
{
	cout << "Exercise 8: " << endl;
	auto product = 1;
	for (auto i = 1; i < 10; i++)
		product *= i;
	cout << product << endl << endl;
}

void ex9()
{
	cout << "Exercise 9: " << endl;
	int x;
	int y;
	cout << " x = ";
	cin >> x;
	cout << " y = ";
	cin >> y;

	if (x > y)
	{
		cout << "x is greater than y" << endl << endl;
	}
	else if (y > x)
	{
		cout << "y is greater than x" << endl << endl;
	}
	else
	{
		cout << "These are the same damn number Morty!" << endl << endl;
	}
}

int main()
{
	auto greeting = getGreeting();
	ex0(greeting);
	ex1(greeting);
	ex2(greeting);
	ex3(greeting);
	ex5('*', 3, 2);
	ex6();
	ex7();
	ex8();
	ex9();

	return 0;
}