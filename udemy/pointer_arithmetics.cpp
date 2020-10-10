#include <iostream>
#include <string>
using namespace std;

int
main(int argc, char** argv)
{
	cout << boolalpha;

	int number {10};
	int *ptr1 {&number};
	int *ptr2 {&number};
	cout << (ptr1 - ptr2) << endl;
	cout << (ptr1 == ptr2) << endl;

	string str1 {"foo"};
	string str2 {"foo"};
	string *strPtr1 {&str1};
	string *strPtr2 {&str2};
	cout << (*strPtr1 == *strPtr2) << endl;

	int scores[] {10, 20, 30, 0};
	int *scoresPtr {scores};
	/* Increase address, then dereference */
	while (*scoresPtr) cout << *scoresPtr++ << endl;

	return 0;
}

