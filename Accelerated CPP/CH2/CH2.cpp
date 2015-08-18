#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int ex0()
{
	cout << "Please enter your first name: " << std::endl;
	string name;
	cin >> name;
	const auto greeting = "Hello, " + name + "!";
	const auto pad = 1;
	const auto border = "*";
	const auto rows = (pad * 2) + 3;
	const auto cols = greeting.size() + (pad * 2) + 2;

	for (auto r = 0; r < rows; r++) {
		for (auto c = 0; c < cols; c++) {
			if (r == 0 || c == 0 || r == rows - 1 || c == cols - 1) {
				cout << border;
			}
			else {
				if (r == pad + 1 && c == pad + 1) {
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

int main()
{
	ex0();
	return 0;
}
