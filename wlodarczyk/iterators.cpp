#include <iostream>
using namespace std;

main()
{
    cout << 1 / 10 << endl;

    int nr = 12312312, digits = 1, tmp;
    tmp = nr;
    while (tmp /= 10) digits++;
    cout << nr << " has " << digits << " digits" << endl;

    for(int i = 1; i <= 10; i++) {
        for(int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}
