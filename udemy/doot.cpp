#include <iostream>
#include <limits>
using namespace std;

int
main(int argc, char *argv[])
{
	double total {102.34};
	int guests {5};
	double bill {total / guests};
	cout << bill << endl;
	return 0;
}

