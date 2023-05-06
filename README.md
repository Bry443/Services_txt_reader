# Overview
This program is used to compare two .txt files of exported windows services and returns a list of the changes between the two. These .txt's are exported using the "Services" application on Winodows 10 and 11.

How to use:
Run "txtreader.cpp" in a folder directory with a services export called:
"services_export.txt" and a different one named:
"services_export_new.txt". A new .txt named: 
"changed_services.txt" will be made that tell you which services have been swapped to on -> off, automatic start -> manual, etc.

I wrote this program because I want a quick and easy way to list what services I've changed from previous launches. I do this because sometimes while disabling bloatware, it is easy to disable something you might use later on.

# Development Environment

This program was written in Visual Studio Code and compiled using Mingw-w64

I used C++, <iostream> to print into the console, and <fstream> to read/write files.

# Useful Websites

- [GeeksforGeeks](https://www.geeksforgeeks.org/file-handling-c-classes/)
- [Learn C++](https://www.learncpp.com/cpp-tutorial/basic-file-io/)

# Future Work

- Currently, txt files must have same amount of line to be compared. Make so that some lines can be detected as completely new then scan through rest of list.
- Make more options to name the files it scans.
- Make an actual GUI to show what's going on?