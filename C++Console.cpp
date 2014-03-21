#include <iostream>
#include <string>
#include <fstream>
#include <curl/curl.h>
#include <curl/types.h>
#include <curl/easy.h>
#include "command.h"
#include "update.h"

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
			download("http://www.cppconsole.org/CPPConsole/Latest/.version");
			std::ifstream ifs(".version");
  			std::string content;
			content.assign( (std::istreambuf_iterator<char>(ifs) ),
                		(std::istreambuf_iterator<char>()    ) );
                	if (content > "1.1") {
				#ifdef __APPLE__
					download("http://www.cppconsole.org/CPPConsole/Latest/C++ConsoleMac");
					std::stringstream stream;
					stream <<"update";
					system(stream.str().c_str());
				#elif __WIN32__
					download("http://www.cppconsole.org/CPPConsole/Latest/C++Console.exe");
					std::stringstream stream;
					stream <<"update.exe";
					system(stream.str().c_str());
				#elif __WIN64__
					download("http://www.cppconsole.org/CPPConsole/Latest/C++Console.exe");
					std::stringstream stream;
					stream <<"update.exe";
					system(stream.str().c_str());
				#elif __linux__
					download("http://www.cppconsole.org/CPPConsole/Latest/Linux/C++ConsoleLinux");
					std::stringstream stream;
					stream <<"update";
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
		
