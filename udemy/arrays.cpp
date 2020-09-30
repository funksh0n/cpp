#include <iostream>
using namespace std;

int
main()
{
	int myArray[100] {};
	cout << myArray << endl;
	for(int i : myArray) cout << i << " ";
	
	int noArray[0];
	cout << endl << endl << noArray << " size " << sizeof(noArray) << endl;

	return 0;
}
