#include <iostream>
#include <string>
using namespace std;

int
main(int argc, char *argv[])
{
	string doot {"StephenHawking"};
	string first {doot, 0, 7};
	string second = doot.substr(7);
	cout << doot << endl;
	cout << first << endl;
	cout << second << endl;


	string allX (256, 'X');

	string str {"Ricky Valentine Oswald"};
	for (int c : str) cout << c << "\t";
	cout << endl;
	for (char c : str) cout << c << "\t";
	cout << endl;
	for (auto c : str) cout << c << "\t";
	cout << endl;

	cout << str.substr(1,2) << endl;

	cout << str.find("Val") << endl;
	cout << str.find("i") << endl;
	cout << str.find("zzz") << endl;
	cout << string::npos << endl;

	cout << str.erase( str.find("Valentine"), str.find("Oswald") - str.find("Valentine") ) << endl;
	cout << str << endl;
	str.clear();
	cout << str << "." << endl;

	cout << "Enter something with spaces: ";
	getline(cin, str);
	cout << str << endl;

	cout << "Enter something with x in the middle: ";
	getline(cin, str, 'x');
	cout << str << endl;

	cout << endl;
	return 0;
}

