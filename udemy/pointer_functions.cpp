#include <iostream>
#include <vector>
#include <string>
using namespace std;

void doubleNumber(int*);
void printVector(vector<string>*);

void
doubleNumber(int *n)
{
	*n *= 2;
}

void
printVector(vector<string> *v)
{
	for (auto s : *v) cout << s << " ";
	cout << endl;
}

int
main(int argc, char** argv)
{
	int number {10};
	cout << number << endl;
	doubleNumber(&number);
	cout << number << endl;

	int *numberPtr {&number};
	cout << *numberPtr << endl;
	doubleNumber(numberPtr);
	cout << *numberPtr << endl;

	vector<string> v {"foo", "bar"};
	printVector(&v);

	return 0;
}

