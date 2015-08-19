#include "pch.h"
#include <iostream>
#include <string>

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
void createSquare(const string& obj, const int& x)
{
	for (auto i = 0; i < x; ++i) {
		cout << string(x, '*');
	}
}

void createRectangle(const string& obj, const int& x, const int& y)
{
	for (auto i = 0; i < y; ++i) {
		cout << string(x, '*') << endl;
	}
}

int main()
{
	auto greeting = getGreeting();
	ex0(greeting);
	ex1(greeting);
	ex2(greeting);
	ex3(greeting);
	return 0;
}