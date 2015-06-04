#include <iostream>
#include <string>
#include "CH0.h"

void zero() {
	std::cout << "0. Hello, world!" << std::endl;
}

void one() {
	int resultint;
	resultint = 3 + 4;
	std::cout << "1. The statement produces no visual side effect but produces a result of: " + std::to_string(resultint) << std::endl;
}

void two() {
	std::cout << "2. This (\") is a quote, and this (\\) is a backslash." << std::endl;
}

void three() {
	std::cout << "\t3. Testing the string literal \\t here." << std::endl;
}

void four() {
	std::cout << "4. " << std::endl;
	std::cout << "// a small C++ program" << std::endl;
	std::cout << "#include <iostream>" << std::endl;
	std::cout << "int main()" << std::endl;
	std::cout << "{ " << std::endl;
	std::cout << "	std::cout << \"Hello, world!\" << std::endl;" << std::endl;
	std::cout << "	return 0;" << std::endl;
	std::cout << "} " << std::endl;
}

void fivetoten() {
	std::cout << "5. No, because it does not establish function start and end with necessary curly braces." << std::endl;
	std::cout << "6. Yes, because it has all require features of a program with no errors." << std::endl;
	std::cout << "7. No, because the freeform comments are misused, forcing \" as its starting and ending delimiters */\" to become an uninterpretable statement in main()." << std::endl;
	std::cout << "8. Yes, because the line comment overrides the freeform comments." << std::endl;
	std::cout << "9. int main(){}" << std::endl;
	std::cout << "10. Newlines are possible everywhere except within individual entities." << std::endl;
}

int main() {
	std::string pause;

	zero();

	one();

	two();

	three();

	four();

	fivetoten();

	std::cin >> pause;
	return 0;
}
