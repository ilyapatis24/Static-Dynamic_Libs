#include <iostream>
#include "greeter.h"

int main(int argc, char** argv) {
	system("chcp 1251");
	Greeter greeter;
	std::string name = "";
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << greeter.greet(name);
	return 0;
}
