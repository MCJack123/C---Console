#include <iostream>
#include <string>
#include <fstream>
#include "command.h"

int main() {
	int cont = 1;
    std::cout << "C++ Console v1.0\n";
    while (cont == 1) {
        std::string commandexe;
        std::cout << "Console: ";
        std::getline(std::cin, commandexe);
		std::cin.ignore(100,'\n');
		if (commandexe == "hello") {
			hello();
			}
		else if (commandexe == "help commands") {
			help("all");
			}
		else if (commandexe == "help about") {
			help("about");
			}
		else if (commandexe == "help help") {
			help("help");
			}
		else if (commandexe == "help hello") {
			help("hello");
			}
		else if (commandexe == "about") {
			about();
			}
		else if (commandexe == "exit") {
			break;
			}
		else {
			std::cout << "The command you have entered has not been defined in command.h, or has not been added to C++Console.cpp.\n";
			}
		}
	return 0;
}
		
