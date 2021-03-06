#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void
myFunction(int i)
{
	cout << ' ' << i;
}

int
main()
{
	vector<int> doot (5, 2);
	// for (int c : doot) cout << c << " ";
	// for_each (doot.end(), doot.begin(), myFunction);
	for_each (doot.begin(), doot.end(), myFunction);
	cout << endl;
	for (auto c : doot) cout << c << " ";
	cout << endl;
	for (auto c : "Sucka") cout << c << endl;

	vector<int> vector1, vector2;
	vector1.push_back(10);
	vector1.push_back(20);
	cout << vector1.at(0) << " " << vector1.at(1) << " " << vector1.size() << endl;
	vector2.push_back(100);
	vector2.push_back(200);
	cout << vector2.at(0) << " " << vector2.at(1) << " " << vector2.size() << endl;

	vector<vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;
	cout << vector1.at(0) << " " << vector1.at(1) << endl;

	return 0;
}
