// CH1.cpp : Defines the entry point for the console application.
//
#include <boost/algorithm/string.hpp>
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

std::string firstName;

void part1() {
	if (firstName.empty()) {
		std::cout << "Please enter your first name: ";
		std::cin >> firstName;
	}

	std::cout << "Hello, " << firstName << "!" << std::endl;
	return; 
}

void part2() {
	if (firstName.empty()) {
		std::cout << "Please enter your first name: ";
		std::cin >> firstName;
	}
	auto length = firstName.length() + 12;
	std::string stars(length, '*');
	std::string spaces(length - 2, ' ');

	std::cout << stars << std::endl;
	std::cout << "*" << spaces << "*" << std::endl;
	std::cout << "* " << "Hello, " << firstName << "! *" << std::endl;
	std::cout << "*" << spaces << "*" << std::endl;
	std::cout << stars << std::endl;

	return;
}

void part3(std::string val) {
	for (auto c : val)
		std::cout << c;
	std::cout << std::endl;
}

int _tmain() {
	part1();
	part2();
	part3("trouble");
	return 0;
}

