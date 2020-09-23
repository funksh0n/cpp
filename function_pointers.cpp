#include <iostream>
using namespace std;

void changeByRef(int &);
void changeByPointer(int *);
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
    *b = 50;
    cout << a << endl;

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

int *returnPointer(int *a)
{
    *a = 30;
    return a;
}
