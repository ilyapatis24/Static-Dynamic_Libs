#include <iostream>
#include "leaver.h"

int main(int argc, char** argv) {
	system("chcp 1251");
	Leaver leaver;
	std::string name = "";
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << leaver.leave(name);
	return 0;
}