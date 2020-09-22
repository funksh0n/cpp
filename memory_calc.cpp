#include <iostream>
using namespace std;

#define MEMORY_BYTES 15

long pow(int, int);

long
pow(int base, int exponent)
{
    long total = 1;
    for (int i = 0; i < exponent; i++) {
        total *= base;
    }
    cout << "pow(" << base << ", " << exponent << ") = " << total << endl;
    return total;
}

int
main()
{
    long total = 0;
    for (int i = 0; i < MEMORY_BYTES; i++) {
        total += 15 * pow(16, i);
    }
    cout << total << " is the maximum value with " << MEMORY_BYTES << " bytes." << endl;
}
