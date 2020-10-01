#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int
main(int argc, char *argv[])
{
	srand(time(nullptr));
	for (size_t i {0}; i < 100; i++) {
		cout << rand() << " ";
	}

	return 0;
}

