#include <iostream>
#include <cstring>
using namespace std;

int
main(int argc, char *argv[])
{
	char str[80];
	char doot[] = { "doot" };
	size_t doot_len = strlen(doot);
	cout << doot << " " << doot_len << endl;


	cout << str << endl;
	cout << strcpy(str, "Hello ") << str << endl;
	cout << strcat(str, "World!") << str << endl;
	cout << strlen(str) << endl;
	cout << strcmp(str, "Another") << endl;
	cout << strcmp("a", "a") << " " << strcmp("b", "a") << " " << strcmp("a", "b") << endl;

	cout << endl << "Enter something with spaces: ";
	cin.getline(str, 30);
	cout << str << endl;

	for (size_t c {0}; c < strlen(str); c++) {
		if (isalpha(str[c]))
			str[c] = toupper(str[c]);
	}
	cout << str << endl;

	return 0;
}

