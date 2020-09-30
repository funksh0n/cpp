#include <iostream>
using namespace std;

int
main(int argc, char** argv)
{
	int x = 0;
	int *p = &x;
	cout << &x << " " << p << " " << &p;
	return 0;
}

