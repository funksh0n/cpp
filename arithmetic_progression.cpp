#include <iostream>
using namespace std;

int
main()
{
    int iStart = 0, iIncrement = 0, iSteps = 0, iSum = 0;

    cout << "Enter start value: " << endl;
    cin >> iStart;
    cout << "Enter increment value: " << endl;
    cin >> iIncrement;
    cout << "Enter steps: " << endl;
    cin >> iSteps;

    while (iSteps) {
        iSteps--;
        cout << " + " << iStart;
        iSum += iStart;
        iStart += iIncrement;
    }

    cout << " = " << iSum << endl;

    return 0;
}
