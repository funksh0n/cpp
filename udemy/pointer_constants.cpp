#include <iostream>
using namespace std;

int
main(int argc, char** argv)
{
	int highScore {100};
	int lowScore {70};

	const int *scoreConstPtr {&highScore};
	// *scoreConstPtr = 101;
	scoreConstPtr = &lowScore;
	cout << *scoreConstPtr << endl;

	int *const scorePtrConst {&highScore};
	// scorPtrConst = &lowScore;
	*scorePtrConst = 101;
	cout << *scorePtrConst << endl;

	const int *const scorePtr {&highScore};
	/*
	*scorePtr = 101;
	scorePtr = &lowScore;
	*/

	return 0;
}

