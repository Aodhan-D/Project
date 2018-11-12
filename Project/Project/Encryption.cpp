#include "Encryption.h"
#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

bool Encryption::EncryptFile(std::string name) {

	std::fstream f;
	std::string s = name;

	f.open(name);
	//temporary file to hold the encrypted data
	std::fstream temp;
	temp.open("temp.txt");

	char fName[19], ch, choice;

	while (f.eof() == 0)
	{
		f >> ch;
		ch = ch + 100;
		temp << ch;
	}
	temp.close();
	f.close();

	f.open(name);
	if (!f)
	{
		std::cout << "Error in opening source file..!!";
		std::cout << "\nPress any key to exit...";
		exit(3);
		return false;
	}
	temp.open("temp.txt");
	if (!temp)
	{
		std::cout << "Error in opening temp.txt file...!!";
		f.close();
		std::cout << "\nPress any key to exit...";
		exit(4);
		return false;
	}
	while (temp.eof() == 0)
	{
		temp >> ch;
		f << ch;
	}
	std::cout << "File has been encrypted successfully..!!"<<std::endl;
	std::cout << "\nPress any key to exit..." << std::endl;
	f.close();
	temp.close();
	return true;
}