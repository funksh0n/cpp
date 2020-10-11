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
	cout << sizeof(arrDblPtr) << endl;
	cout << arrDblPtr << endl;
	delete[] arrDblPtr;

	double *derefNullPtr {nullptr};
	cout << *derefNullPtr << endl;

	/* Will run out of memory on the heap
	double *memoryLeak {nullptr};
	while(true) memoryLeak = new double[99999];
	*/

	return 0;
}

