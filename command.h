/* This header is used for the C++ Console made by MCJack123 on 2/23/14. If you want to make a new command, add a new function for your command here, add your command to C++Console.cpp, add the command to the command list and make a help article, and compile C++Console.cpp. You may distribute the header and cpp file MODIFIED, but you may not redistribute them unmodified.*/

#include <iostream>
#include <string>

//This is a hello world program
int hello () {
	std::cout << "Hello World!\n";
	return 0;
	}
//This is the help command
int help (std::string arg) {
	if (arg == "all") {
		std::cout << "The valid commands are: \nhelp hello about exit clear\nIf you want to see more about a command, type 'help (command)'.\n";
		}
	else if (arg == "help") {
		std::cout << "Syntax: \nhelp <commands | (command)>\nHelp gives you help about the console, from seeing all the commands possible to getting help on one specific command.\n";
		}
	else if (arg == "hello") {
		std::cout << "Syntax: \nhello\nHello is a simple Hello World program written in C++.\n";
		}
	else if (arg == "about") {
		std::cout << "Syntax: \nabout\nAbout gives you information on the console.\n";
		}
	else if (arg == "clear") {
		std::cout << "Syntax: \nclear\nClear clears your screen so you can have a clutterless console.";
	}
	else {
		std::cout << "Something went wrong! Either it was that you put in an invalid argument or you entered no argument.\n";
		}
	return 0;
	}
//This is the about command
int about () {
	std::cout << "C++ Console v1.0, command.h v1.0 unmodded, written in C++11\n";
	return 0;
	}
int clearscreen () {
	std::cout << "/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n/n";
	return 0;
	}
