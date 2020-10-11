#include <iostream>
using namespace std;

int
main(int argc, char** argv)
{
	int num {25};
	int &ref {num};
	
	cout << num << " " << ref << endl;

	int num2 {35};
	ref = num2;
	cout << num << endl;

	int number {15};
	int *ptr {&number};
	int &refPtr {*ptr};
	cout << number << " " << refPtr << " " << *ptr << endl;
	refPtr = 16;
	cout << number << " " << refPtr << " " << *ptr << endl;
	*ptr = 17;
	cout << number << " " << refPtr << " " << *ptr << endl;

	return 0;
}

