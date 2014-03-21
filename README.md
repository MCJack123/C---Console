C++ Console
===========
Hello those of you that happen to come across this,
This program that is on the repo is a terminal program that I have written in C++. To run this program, you will need to download BOTH C++Console.cpp and command.h to run the program.


The simplified way of explaining how to run the console: 
Open Command Prompt (Windows) or Terminal (OS X or Linux). Type in "cd Downloads", but without the quotes. Type "cd C---Console-master", also without the quotes. Then type "g++ -o C++Console C++Console.cpp". To run the program after, go to your Downloads folder, then to the C---Console-master folder, then run C++Console.

The advanced way to explain how to run the console:
Open the command line, navigate to the C---Console-master folder, and compile C++Console.cpp. You can then run the compiled program to enter the command line.
(Note: You will need to use g++ to compile. If you use gcc, you will get a ton of problems and end up not being able to compile.)
Commands
==========
about
Gives information about the prompt

hello
A simple hello world program

help
A help program for the C++ console.

clear
A command that clears the screen

installer
A command to install, update, and remove items. Current arguments:
    update
    Updates an app or the console. Current arguments:
        console
        Updates the console.


If you want to add a command, you can make "apps" with header files. For every app, you need to make an installer that downloads app.h, and adds #include "app.h", the command syntax and (optional) adds a help article. For your app to be officialy supported with installer, open an issue with a link to the header and the name of the app.
Have great simplified coding!

MCJack123
