#include <iostream>
using namespace std;

void swapValues(int &, int &);
int & swapValuesRef(int &, int &);

void
swapValues(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int &
swapValuesRef(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
    return a;
}

int
main()
{
    string str = "foo";
    string &refStr = str;
    const string &constRefString = str;
    cout << "str = " << str << " &str = " << &str << endl;
    cout << "refStr = " << refStr << " &refStr = " << &refStr << endl;
    cout << "constRefString = " << constRefString << " &constRefString = " << &constRefString << endl << endl;

    refStr = "bar";
    cout << "stf = " << str << " &str = " << &str << endl;
    cout << "refStr = " << refStr << " &refStr = " << &refStr << endl;
    cout << "constRefString = " << constRefString << " &constRefString = " << &constRefString << endl << endl;
    // constRefString = "whoops";

    /* References cannot be re-bound */
    string newStr = "baz";
    refStr = newStr;
    cout << "str = " << str << " &str = " << &str << endl;
    cout << "refStr = " << refStr << " &refStr = " << &refStr << endl;
    cout << "constRefString = " << constRefString << " &constRefString = " << &constRefString << endl;

    int a = 10, b = 20;
    swapValues(a, b);
    cout << "a: " << a << ", b: " << b << endl;

    a = 10, b = 20;
    int &c = swapValuesRef(a, b); // c is referring to a
    c = 50;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    return 0;
}
