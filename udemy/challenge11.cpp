#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

void printMenu();
void printElements(const vector<int> &);
void addElement(vector<int> &);
void printMean(vector<int> &);
double calculateMean(vector<int> &);
void printMin(vector<int> &);
void printMax(vector<int> &);
void getInput(char &);

void
printMenu()
{
	cout << endl << endl << "-----------Elements-----------" << endl;
	cout << "P - Print Numbers" << endl;
	cout << "A - Add a Number" << endl;
	cout << "M - Dislpay Mean" << endl;
	cout << "S - Display Min" << endl;
	cout << "L - Display Max" << endl;
	cout << "Q - Quit" << endl;
}

void
printElements(const vector<int> &elements)
{
	if (elements.size()) {
		cout << "[";
		for (int e : elements) cout << " " << e;
		cout << " ]";
	} else {
		cout << "[] - the list is empty";
	}
}

void
addElement(vector<int> &elements)
{
	int e {};
	cout << "Enter integer element: ";
	cin >> e;
	elements.push_back(e);
	cout << e << " added";

}

void
printMean(vector<int> &elements)
{
	if (elements.size()) {
		cout << "Mean average = " << calculateMean(elements);
	} else {
		cout << "Unable to calculate the mean - no data";
	}
}

double
calculateMean(vector<int> &elements)
{
	int sum {};
	for (int e : elements) sum += e;
	return ( sum / elements.size() );
}

void
printMin(vector<int> &elements)
{
	if (elements.size()) {
		int min = elements.at(0);
		for (int e : elements)
			if (e < min) min = e;
		cout << "The smallest number is " << min;
	} else {
		cout << "Unable to determine the smallest number - list is empty";
	}
}

void
printMax(vector<int> &elements)
{
	if (elements.size()) {
		int max = elements.at(0);
		for (int e : elements)
			if (e > max) max = e;
		cout << "The largest number is " << max;
	} else {
		cout << "Unable to determine the largest number - list is empty";
	}
}

void
getInput(char &c)
{
	cin >> c;
	c = toupper(c);
}

int
main(int argc, char *argv[])
{
	vector<int> elements {};
	char input {};

	do {
		printMenu();
		getInput(input);

		switch (input) {
		case 'Q':
			break;
		case 'P':
			printElements(elements);
			break;
		case 'A':
			addElement(elements);
			break;
		case 'M':
			printMean(elements);
			break;
		case 'S':
			printMin(elements);
			break;
		case 'L':
			printMax(elements);
			break;
		default:
			cout << "Invalid option!";
			break;
		}
	} while (input != 'Q');

	return 0;
}

