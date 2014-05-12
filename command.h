/* This header is used for the C++ Console made by MCJack123 on 2/23/14. If you want to make a new command, add a new function for your command here, add your command to C++Console.cpp, add the command to the command list and make a help article, and compile C++Console.cpp. You may distribute the header and cpp file MODIFIED, but you may not redistribute them unmodified.*/

#include <iostream>
#include <string>
#include <fstream>
#include "techStuff.h"

float appversion = 0.0
//This is a hello world program
int hello () {
	std::cout << "Hello World!\n";
	return 0;
	}
//This is the help command
int help (std::string arg) {
	if (arg == "all") {
		std::cout << "The valid commands are: \nhelp hello about exit clear installer\nIf you want to see more about a command, type 'help (command)'.\n";
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
	else if (arg == "installer") {
		std::cout << "Syntax: \ninstaller\nInstaller helps you install and update apps and the console.\nWARNING: You can only have one app at a time (for now).";
	}
	else {
		std::cout << "Something went wrong! Either it was that you put in an invalid argument or you entered no argument.\n";
		}
	return 0;
	}
//This is the about command
int about () {
	std::cout << "C++ Console v1.1\n";
	return 0;
	}
int clearscreen () {
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	return 0;
	}
int installer() {
	std::cout << "---C++ Console Installer---\nSelect an app:\n";
	list();
	std::cout << data << ":";
	std::string app;
	std::cin >> app;
	if (app == "CPPConsole) {
                std::cout << "\nCPPConsole is the system. Would you like to check for updates? (Y/N)\n:";
                char checkupdate;
                std::cin >> checkupdate;
                if (checkupdate == "Y") {
                        std::cout << "\nChecking for updates...";
        ifstream ifile(filename);
	if (ifile) {
		std::cout << app << "is installed. Choose an option:\n1. Update  2. Delete\n:"
		int option;
		std::cin >> option;
		if (option == "1") {
			std::cout >> \n"Checking for updates...\n";
			download("http://cppconsole.bruienne.com/"app"/.version" "."app"version");
			dumpFile("."app"version");
			if (contents > appversion) {
				std::cout << "A new update is available. Would you like to update (Y/N)\n:";
				char optupdate;
				std::cin >> optupdate;
				if (optupdate == "Y") {
					std::cout << "\nDownloading update...\n";
					download("cppconsole.bruienne.com/"app"/"app".h" app".h");
					std::cout << "Please restart the console to complete.\n";
				}
				else if (optupdate == "N") {
					std::cout << "Cancelling update...\n";
					return 1;
				}
			}
			else {
				std::cout << "No update is available for "<< app <<".\n";
				return 2;
			}
		}
		else if (option == "2") {
			std::cout << "\nAre you sure you want to delete? (Y/N)\n:";
			char optdelete;
			std::cin >> optdelete;
			if (optdelete == "Y") {
				std::cout << "\nDownloading clean files...\n"
				download("http://cppconsole.bruienne.com/CPPConsole/Latest/command.h", "command.h");
				download("http://cppconsole.bruienne.com/techStuff/Latest/techStuff.h", "techStuff.h");
				#ifdef __APPLE__
					download("http://cppconsole.bruienne.com/CPPConsole/Latest/C++ConsoleMac", "C++ Console");
				#elif __WIN32__
					download("http://cppconsole.bruienne.com/CPPConsole/Latest/C++Console.exe", "C++ Console.exe");
				#elif __WIN64__
					download("http://cppconsole.bruienne.com/CPPConsole/Latest/C++Console.exe", "C++ Console.exe");
				#elif __linux__
					download("http://cppconsole.bruienne.com/CPPConsole/Latest/C++ConsoleLinux", "C++ Console");
				#endif
			}
			else {
				std::cout << "\nCancelling delete...\n";
				return 1;
				
			}
		}
	}
	else {
		std::cout << app << "is not installed. Do you want to install it? (Y/N)\n:";
		char install;
		std::cin >> install;
		if (install == "Y") {
			std::cout << "\nInstalling...\n"
			download("http://cppconsole.bruienne.com/"app"/Latest/"app".h", app".h");
			#ifdef __APPLE__
				download("http://cppconsole.bruienne.com/"app"/Latest/C++ConsoleMac", "C++ Console");
			#elif __WIN32__
				download("http://cppconsole.bruienne.com/"app"/Latest/C++Console.exe", "C++ Console.exe");
			#elif __WIN64__
				download("http://cppconsole.bruienne.com/"app"/Latest/C++Console.exe", "C++ Console.exe");
			#elif __linux__
				download("http://cppconsole.bruienne.com/"app"/Latest/C++ConsoleLinux", "C++ Console");
			#endif
		}
		else {
			std::cout << "\nCancelling installation...\n";
			return 1;
		}
	}
	return 0;
}
string data; //will hold the url's contents

size_t writeCallback(char* buf, size_t size, size_t nmemb, void* up)
{ //callback must have this declaration
    //buf is a pointer to the data that curl has for us
    //size*nmemb is the size of the buffer

    for (int c = 0; c<size*nmemb; c++)
    {
        data.push_back(buf[c]);
    }
    return size*nmemb; //tell curl how many bytes we handled
}

int list()
{
    CURL* curl; //our curl object

    curl_global_init(CURL_GLOBAL_ALL); //pretty obvious
    curl = curl_easy_init();

    curl_easy_setopt(curl, CURLOPT_URL, "http://cppconsole.bruienne.com/");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &writeCallback);
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L); //tell curl to output its progress

    curl_easy_perform(curl);

    cout << endl << data << endl;
    cin.get();

    curl_easy_cleanup(curl);
    curl_global_cleanup();

    return 0;
