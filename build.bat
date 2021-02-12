@echo off
echo                                           *****************************
echo                                           * Author:- Pashant Bhandari *
echo                                           *****************************
echo                                           *  =======================  *
echo                                           *      Project Bulider      *
echo                                           *  =======================  *
echo                                           *****************************
echo                            ***Executable file can be found inside the "bin" folder.***
echo++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
set /P src="Enter the name of source file[ for eg: "example.c" ]:-"
set /p exec="Enter the name of executable file you want to create[ for eg:"example.exe" ]:-"
echo++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
echo                                                 ================
echo                                                   Building...
echo                                                 ================
echo gcc -Wall -c drawing.c 
echo gcc -Wall drawing.o %src% -o %exec%
echo mkdir bin
echo move %exec% .\bin
echo++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
echo                                                 ================
echo                                                 *****Status*****
echo                                                 ================
gcc -Wall -c drawing.c 
gcc -Wall drawing.o %src% -o %exec%
mkdir bin
move %exec% .\bin
echo++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
echo                                                 ================
echo                                                     Finished
echo                                                 ================
echo++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@pause