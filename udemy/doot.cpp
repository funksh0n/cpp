#include <iostream>
#include <limits>
using namespace std;

int
main(int argc, char *argv[])
{
	int limit = numeric_limits<int>::max() - 1;
	cout << limit;
	char crazy[limit] {};
	cout << crazy;
	return 0;
}

