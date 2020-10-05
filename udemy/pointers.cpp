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

//	int *nullPointer {nullptr};
//	cout << *nullPointer << "... " << endl;
	cout << endl;
	return 0;
}

