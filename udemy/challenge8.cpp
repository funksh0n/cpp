/*
 * Given some value, show the minimum coins used.
 * e.g. 92p
 * $1  : 0
 * 50p : 1
 * 20p : 2
 * 10p : 0
 * 2p  : 1
 * 1p  : 0
 */

#include <iostream>
using namespace std;

int
main(int argc, char** argv)
{
	int pennies {0};
	cout << "Enter amount in pennies: ";
	cin >> pennies;

	cout << "number of quids = " << (pennies / 100) << endl;
	pennies %= 100;
	cout << "number of 50p = " << (pennies / 50) << endl;
	pennies %= 50;
	cout << "number of 20p = " << (pennies / 20) << endl;
	pennies %= 20;
	cout << "numbers of 10p = " << (pennies / 10) << endl;
	pennies %= 10;
	cout << "number of 5p = " << (pennies / 5) << endl;
	pennies %= 5;
	cout << "number of 2p = " << (pennies / 2) << endl;
	pennies %= 2;
	cout << "number of 1p = " << (pennies) << endl;

	return 0;
}

