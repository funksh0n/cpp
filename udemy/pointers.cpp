#include <iostream>
#include <vector>
using namespace std;

int
main(int argc, char *argv[])
{
	vector<string> vecStrings {"foo", "bar", "bin", "bash"};
	vector<string> *vecPointer {nullptr};
	vecPointer = &vecStrings;
	for (auto s : *vecPointer) cout << s << " ";

	cout << endl;

	/* No ampersand needed sinces array is already an address */
	int array[] {10, 20, 30};
	int *arrayPointer {nullptr};
	arrayPointer = array;
	cout << arrayPointer[0] << " ";

	/* Can't dereference a null pointer.
	int *nullPointer {nullptr};
	cout << *nullPointer << "... " << endl;
	*/
	cout << endl;
	return 0;
}

