#include <iostream>
using namespace std;

int
main(int argc, char** argv)
{
	cout << boolalpha;
	cout << (10 == 11) << " " << (10 != 11) << endl;
	cout << ('a' == 'A') << " " << ('a' != 'A') << endl;
	cout << (10.0 == 9.999) << " " << (10.0 != 9.999) << endl;
	cout << (10.0 == 9.99999999999999999) << " " << (10.0 != 9.999999999999999999) << endl;
	cout << (10 == 10.0) << " " << (10 != 10.0) << endl;
	cout << (10 == 10.000000000000000001) << " " << (10 != 10.000000000000000001) << endl;

	return 0;
}

