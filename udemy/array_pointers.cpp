#include <iostream>
using namespace std;

int
main(int argc, char** argv)
{
	int scores[] {10, 20, 30};
	cout << scores << " " << *scores << endl;

	int *scoresPtr {scores};
	cout << scoresPtr << " " << *scoresPtr << endl;

	cout << scores[1] << " = " << scoresPtr[1] << " = " << *(scores + 1) << " = " << *(scoresPtr + 1) << endl;

	cout << (scores + 2) << " = " << &scores[2] << endl;

	cout << (scoresPtr) << " = " << *(scoresPtr) << endl;
	cout << (scoresPtr + 1) << " = " << *(scoresPtr + 1) << endl;

	/* Out of bounds */
	cout << scoresPtr[99] << endl;

	return 0;
}

