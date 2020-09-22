#include <iostream>
using namespace std;

void foo();

int timesToRecurse = 10;

void
foo()
{
    cout << "foo " << timesToRecurse << endl;
    timesToRecurse--;
    if(timesToRecurse > 0)
        foo();
    cout << "foo finished" << endl;
}

int
main()
{
    foo();
}
