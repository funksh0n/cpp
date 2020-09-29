#include <iostream>
using namespace std;

int
main(int argc, char** argv)
{
	int a {10}, b {20};
	cout << a / b << endl;
	cout << static_cast<double>(a) / b << endl;

	return 0;
}

