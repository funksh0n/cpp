#include <iostream>
using namespace std;

int
main()
{
    int foo = 5;

    /* *& Get value from address */
    cout << &foo << " = " << *&foo << endl;

    /* Pointer variable stores the address of a variable */
    int *pFoo;
    pFoo = &foo;
    cout << pFoo << endl;

    /* The value can be retreived from the address */
    cout << pFoo << " = " << *pFoo << endl;

    /* The value at the address can be changed */
    *pFoo = 10;
    cout << foo << endl;

    /* You can point it elsewhere */
    int bar = 15;
    pFoo = &bar;
    cout << "&bar = " << &bar << ", pFoo = " << pFoo << ", *pFoo = " << *pFoo << endl;

    /* You can see the address of the pointer... */
    cout << "pFoo = " << pFoo << ", &pFoo = " << &pFoo << endl;

    /* ...and point to it! */
    int **pFubar = &pFoo;
    cout << "pFubar = " << pFubar << endl;

    /* A pointer that cannot point elsewhere, but can still change the value i.e. (const *) */
    int * const pConstFoo = &foo;
    // pConstFoo = &bar;
    *pConstFoo = 20;
    cout << "*pConstFoo = " << *pConstFoo << ", foo = " << foo << endl;

    /* A pointer that cannot change the value, but can point elsewhere i.e. (const int) */
    const int *pConstBar = &bar;
    pConstBar = &foo;
    // *pConstBar = 25;
    cout << "pConstBar = " << pConstBar << ", &foo = " << &foo << endl;

    const int * const pGoingNowhere = &foo;
    // pGoingNowhere = &bar;
    // *pGoingNowhere = 30;

    /* You can manually specify an address, if you are suicidal */
    pFoo = (int *)0x123456789abc;
    cout << pFoo << endl;
    /* Will likely segfault if you try to access the value */
    cout << *pFoo << endl;

    return 0;
}
