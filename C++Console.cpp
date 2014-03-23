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
		else if (commandexe == "installer update console") {
			std::stringstream stream;
			stream <<"update"<<"http://www.cppconsole.org/CPPConsole/Latest/.version"<<".version";
			system(stream.str().c_str());;
			std::ifstream ifs(".version");
  			std::string content;
			content.assign( (std::istreambuf_iterator<char>(ifs) ),
                		(std::istreambuf_iterator<char>()    ) );
                	if (content > "1.1") {
				#ifdef __APPLE__
					std::stringstream stream;
					stream <<"update"<<"http://www.cppconsole.org/CPPConsole/Latest/C++ConsoleMac"<<"C++Console";
					system(stream.str().c_str());
				#elif __WIN32__
					std::stringstream stream;
					stream <<"update.exe"<<"http://www.cppconsole.org/CPPConsole/Latest/C++Console.exe"<<"C++Console.exe";
					system(stream.str().c_str());
				#elif __WIN64__
					std::stringstream stream;
					stream <<"update.exe"<<"http://www.cppconsole.org/CPPConsole/Latest/C++Console.exe"<<"C++Console.exe";
					system(stream.str().c_str());
				#elif __linux__
					std::stringstream stream;
					stream <<"update"<<"http://www.cppconsole.org/CPPConsole/Latest/C++ConsoleLinux"<<"C++Console";
					system(stream.str().c_str());
				#endif
				
                	}	
		}
		else {
			std::cout << "The command you have entered has not been defined in command.h, or has not been added to C++Console.cpp.\n";
			}
		}
	return 0;
}
		
