#include <iostream>
#include <vector>
using namespace std;

int
main(int argc, char *argv[])
{
	vector<int> elements {};
	char input {};

	do {
		cout << endl << endl << "-----------Elements-----------" << endl;
		cout << "P - Print Numbers" << endl;
		cout << "A - Add a Number" << endl;
		cout << "M - Dislpay Mean" << endl;
		cout << "S - Display Min" << endl;
		cout << "L - Display Max" << endl;
		cout << "Q - Quit" << endl;
		cin >> input;

		switch (input) {
		case 'Q':
		case 'q':
			break;
		case 'P':
		case 'p':
			if (elements.size()) {
				cout << "[";
				for (int e : elements) cout << " " << e;
				cout << " ]";
			} else {
				cout << "[] - the list is empty";
			}
			break;
		case 'A':
		case 'a':
		{
			int e {};
			cout << "Enter integer element: ";
			cin >> e;
			elements.push_back(e);
			cout << e << " added";
			break;
		}
		case 'M':
		case 'm':
		{
			if (elements.size()) {
				int sum {};
				for (int e : elements) sum += e;
				cout << "Mean average = " << ( sum / elements.size() );
			} else {
				cout << "Unable to calculate the mean - no data";
			}
			break;
		}
		case 'S':
		case 's':
		{
			if (elements.size()) {
				int min = elements.at(0);
				for (int e : elements)
					if (e < min) min = e;
				cout << "The smallest number is " << min;
			} else {
				cout << "Unable to determine the smallest number - list is empty";
			}
			break;
		}
		case 'L':
		case 'l':
		{
			if (elements.size()) {
				int max = elements.at(0);
				for (int e : elements)
					if (e > max) max = e;
				cout << "The largest number is " << max;
			} else {
				cout << "Unable to determine the largest number - list is empty";
			}
			break;
		}
		default:
			cout << "Invalid option!";
			break;
		}
	} while (input != 'Q' && input != 'q');

	return 0;
}

