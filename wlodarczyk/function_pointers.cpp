#include <iostream>
using namespace std;

void changeByRef(int &);
void changeByPointer(int *);
void changeArray(int *);
void changeArrayBySize(int *, int);
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
    cout << sizeof(arr) << " / " << sizeof(arr[0]) << endl;
    for (int i : arr) cout << i << " ";
    cout << endl;
    changeArray(arr);
    for (int i : arr) cout << i << " ";
    cout << endl;
    changeArrayBySize(arr, sizeof(arr) / sizeof(arr[0]));
    for (int i : arr) cout << i << " ";
    cout << endl << endl;

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

int*
returnPointer(int *a)
{
    *a = 30;
    return a;
}

void
changeArray(int *arr)
{
    /* 8 not 4, because it's the size of the pointer, not  the type ??? */
    cout << sizeof(arr) << " / " << sizeof(arr[0]) << endl;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < arrSize; i++) {
        arr[i] = 10;
    }
}

void
changeArrayBySize(int *arr, int arrSize)
{
    while (arrSize--) arr[arrSize] = 10;
}
