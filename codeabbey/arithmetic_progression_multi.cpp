#include <iostream>
#include <vector>
using namespace std;

int
main()
{
    vector<int> viResults;
    int iProgressionsToPerform = 0;
    cout << "data:" << endl;
    cin >> iProgressionsToPerform;
    while (iProgressionsToPerform) {
        iProgressionsToPerform--;
        int iStart = 0, iIncrement = 0, iSteps = 0, iSum = 0;
        cin >> iStart >> iIncrement >> iSteps;

        while (iSteps) {
            iSteps--;
            iSum += iStart;
            iStart += iIncrement;
        }

        viResults.push_back(iSum);
    }

    cout << "answer:" << endl;
    for (int n : viResults) cout << n << " ";

    return 0;
}
