#include <iostream>
#include <string>
#include <fstream>
#include <curl/curl.h>
#include <curl/easy.h>
#include <ssring>
#include "command.h"
#include "techStuff.h"
#include "*.h"

int main() {
	int cont = 1;
    	std::cout << "C++ Console v1.2\n";
    	while (cont == 1) {
        	std::string commandexe;
        	std::cout << "Console: ";
        	std::getline(std::cin, commandexe);
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
			cont--;
			}
		else if (commandexe == "clear") {
			clearscreen();
		}
		else if (commandexe == "help clear") {
			help("clear");
		}
		else if (commandexe == "installer") {
			installer()
		}
		else {
			std::cout << "The command you have entered has not been defined in command.h, or has not been added to C++Console.\n";
			}
		}
	return 0;
}
		
