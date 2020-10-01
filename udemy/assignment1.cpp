#include <iostream>
#include <string>
using namespace std;

int
main(int argc, char *argv[])
{
	string symbols {};
	cout << "Enter symbols: ";
	getline(cin, symbols);
	size_t height { symbols.length() };
	size_t width { (height * 2) - 1 };
	
	for (size_t row {0}; row < height; row++) {
		for (size_t col {0}; col < (width / 2) - row; col++) {
			cout << " ";
		}
		string substring = symbols.substr(0, row + 1);
		cout << substring;
		substring = substring.substr(0, substring.length() - 1);
		for (int i = substring.length() - 1; i >= 0; i--) {
			cout << substring.at(i);
		}
		cout << endl;
	}

	return 0;
}

