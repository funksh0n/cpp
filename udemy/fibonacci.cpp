#include <iostream>
using namespace std;

int fibonacci(int);

int
fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int
main(int argc, char *argv[])
{
	int f {};
	cout << "Enter number: ";
	cin >> f;
	for (int i {}; i < f; i++) 
		cout << fibonacci(i) << " ";
	cout << endl;

	return 0;
}

