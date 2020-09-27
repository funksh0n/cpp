#include <iostream>
#include <vector>
using namespace std;

int
main() {
    vector<bool> results;
    int numberOfTriangles = 0;
    cout << "data:" << endl;
    cin >> numberOfTriangles;

    while(numberOfTriangles--) {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        results.push_back( (a + b >= c) && (b + c >= a) && (c + a >= b) );
    }

    cout << "answer:" << endl;
    for (bool b : results) cout << b << " ";

    return 0;
}
