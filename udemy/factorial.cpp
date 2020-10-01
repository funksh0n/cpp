#include <iostream>
using namespace std;

int factorial(int);

int
factorial(int n)
{
	if (n)
		return n * factorial(n - 1);
	else
		return 1;
}

int
main(int argc, char *argv[])
{
	int f {};
	cout << "Input number: ";
	cin >> f;
	cout << f << "! = " << factorial(f) << endl;
	return 0;
}

