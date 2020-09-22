#include <iostream>
using namespace std;

int
main()
{
    cout << new int << endl;
    cout << *(new int) << endl;

    {
        int *p = new int(5);
        cout << p << " = " << *p << endl;
        *p = 10;
        cout << p << " = " << *p << endl;
        delete p;
        p = NULL;
        //cout << p << " = " << *p << endl;
    }

    int amount;
    cout << "Array size: ";
    cin >> amount;
    int *arr = new int[amount];

    while(amount--) {
        cout << amount << " " << arr[amount] << " " << &arr[amount] << endl;
    }

    // delete arr; ONLY FREES THE FIRST ELEMENT
    delete[] arr;
    arr = NULL;
}
