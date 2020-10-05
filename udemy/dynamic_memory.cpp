#include <iostream>
using namespace std;

int
main(int argc, char *argv[])
{
	int *intPtr {nullptr};
	intPtr = new int;
	cout << intPtr << " = " << *intPtr << endl;
	delete intPtr;

	double *arrDblPtr {nullptr};
	size_t size {0};
	cout << "Input array size: ";
	cin >> size;
	arrDblPtr = new double[size];
	cout << arrDblPtr << endl;

	delete[] arrDblPtr;

	return 0;
}

