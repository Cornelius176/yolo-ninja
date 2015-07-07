// CH1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void part1() {
	std::cout << "Please enter your first name: ";

	std::string name;
	std::cin >> name;

	std::cout << "Hello, " << name << "!" << std::endl;
	return; 
}

void part2() {
	std::cout << "Please enter your first name: ";

	std::string name;
	auto length = 0;
	std::cin >> name;

	length = name.length() + 12;

	for (auto i = 0; i < length; i++) {
		std::cout << "*";
	}
	std::cout << std::endl << "*";
	for (auto i = 2; i < length; i++) {
		std::cout << " ";
	}
	std::cout << "*" << std::endl << "* " << "Hello, " << name << "! *" << std::endl << "*";
	for (auto i = 2; i < length; i++) {
		std::cout << " ";
	}
	std::cout << "*" << std::endl;
	for (auto i = 0; i < length; i++) {
		std::cout << "*";
	}

	return;
}

void part3(std::string val) {
	for (auto c : val)
		std::cout << c;
	std::cout << std::endl;
}

int _tmain(int argc, _TCHAR* argv[]) {
	part1();
	part2();
	part3("trouble");
	return 0;
}

