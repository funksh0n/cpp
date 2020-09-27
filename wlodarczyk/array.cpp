#include <iostream>
using namespace std;

main()
{
    int arr[4];
    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 8;
    arr[3] = 16;
    arr[4] = 32; // out of bounds?

    // arr == &arr == &arr[0]
    cout << arr << " " << &arr << " " << &arr[0] << ", size " << sizeof(arr) / sizeof(arr[0]) << endl;
    for(int i = 0; i <= sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " " << &arr[i] << endl;
    }

    cout << arr << endl; // address of first element
    cout << arr + 1 << endl; // address of second element
    cout << arr + 2 << endl; // address of thrid element
    cout << *arr << endl; // value at first element
    cout << *(arr + 1) << endl; // value at second element
    cout << *arr + 1 << endl << endl; // value at first element, plus one

    int arr2[4];
    arr2[0] = 20;
    arr2[1] = 40;
    arr2[2] = 60;
    int *pArr = arr2;
    cout << *pArr << endl; // value at first element
    cout << ++*pArr << endl; // increment value at first element
    cout << *++pArr << endl; // point to next element then get value
    cout << *pArr++ << endl; // get value then point to next element
    cout << *pArr << endl; // pointer has moved along two elements
    cout << *++pArr << endl; // jumped past the end of the array
    cout << *++pArr << endl; // jumped past the end of the array

    // 1 2 a := 1 * 16^2 + 2 * 16^1 + a * 16^0 = 256 + 32 + 10 = 298

    int foo;
    cin >> foo;
    int bar[foo];
    for(int i = 0; i < foo; i++) {
        cout << bar[i] << endl;
    }
    cout << sizeof(bar) / sizeof(bar[0]) << endl;
}
