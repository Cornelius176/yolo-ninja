// CH1.cpp : Defines the entry point for the console application.
//
#include <boost/algorithm/string.hpp>
#include "pch.h"
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

void ex1() {
	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";
	std::cout << std::endl << "Exercise 1: " << std::endl;
	std::cout << hello << std::endl;
	std::cout << message << std::endl;
}

void ex2() {
	const std::string exclam = "!";
	const std::string message = "This does not work" + exclam;
	std::cout << std::endl << "Exercise 2: " << std::endl;
	std::cout << message << std::endl;
}

int ex3() {
	std::cout << "Exercise 3: " << std::endl;
	{ const std::string s = "a string";
	std::cout << s << std::endl; }
	{ const std::string s = "another string";
	std::cout << s << std::endl; }
	return 0;
}

int ex4() {
	std::cout << "Exercise 4: " << std::endl;
	{ const std::string s = "a string";
	std::cout << s << std::endl;
	{ const std::string s = "another string";
	std::cout << s << std::endl; }}
	return 0;
}

int ex5() {
	std::cout << "Exercise 5: " << std::endl;
	{ std::string s = "a string";
	std::string x = s + ", really";
	std::cout << s << std::endl; 
	std::cout << x << std::endl;
	}
	return 0;
}

int ex6() {
	std::cout << "Exercise 6: " << std::endl;
	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name
		<< std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name
		<< "; nice to meet you too!" << std::endl;
	return 0;
}

int main() {
	part1();
	part2();
	part3("trouble");
	ex1();
	ex2();
	ex3();
	ex4();
	ex5();
	ex6();
	return 0;
}

