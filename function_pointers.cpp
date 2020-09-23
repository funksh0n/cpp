#include <iostream>
using namespace std;

void changeByRef(int &);
void changeByPointer(int *);
void changeArray(int *);
int *returnPointer(int *);

int
main()
{
    int a = 0;
    cout << a << endl;
    changeByRef(a);
    cout << a << endl;
    changeByPointer(&a);
    cout << a << endl << endl;

    int *b = returnPointer(&a);
    cout << a << endl;
    cout << *b << endl;
    *b = 50;
    cout << a << endl;
    cout << *b << endl << endl;

    int arr[10];
    for (int i : arr) cout << i << " ";
    cout << endl;
    changeArray(arr);
    for (int i : arr) cout << i << " ";
    cout << endl;

    return 0;
}

void
changeByRef(int &a)
{
    a = 10;
}

void
changeByPointer(int *a)
{
    *a = 20;
}

int
*returnPointer(int *a)
{
    *a = 30;
    return a;
}

void
changeArray(int *arr)
{
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrSize; i++) {
        arr[i] = 10;
    }
}
