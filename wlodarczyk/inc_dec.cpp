#include <iostream>

using namespace std;

main()
{
    int a = 5;
    cout << a << " " << ++a << " " << a << endl;
    int b = 5;
    cout << b << " " << b++ << " " << b << endl;

    for(int i = 0; i < 10;) {
        cout << ++i << " ";
    }
    cout << endl;

    for(int j = 0; j < 10;) {
        cout << j++ << " ";
    }
    cout << endl;

    for(int k=0; k<10; cout << ++k << " ") {}
    cout << endl;

    for(int l=0; l<10; cout << l++ << " ") {}
    cout << endl;
}
