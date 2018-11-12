#include <iostream>
#include <String>
#include <fstream>
#include <cstdlib>
#include "Encryption.h"
using namespace std;
int main() {
	std::string name;
	cout << "Enter the name of the file: " << endl;
	getline(cin, name);
	bool x;
	Encryption e;
	x = e.EncryptFile(name);
	if (x == true)
	{
		cout << "The file has been successfully Encrypted" << endl;
	}
	else {
		cout << "There was an error Encrypting the file"<<endl;
	}
	

	return 0;
}