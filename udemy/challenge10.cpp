/*
 * A naïve substitution cypher
 */

#include <iostream>
#include <string>
using namespace std;

int
main(int argc, char *argv[])
{
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string key      {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

	string original {"RickyValentineOswald"};
	for ( auto c : original )
		cout << key.at( alphabet.find(c) );
	cout << endl;

	string encrypted {"uJNQScXDWVMJVWtOIXDL"};
	for ( auto c : encrypted )
		cout << alphabet.at( key.find(c) );
	cout << endl;

	return 0;
}

