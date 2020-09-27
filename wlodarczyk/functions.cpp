#include <iostream>
using namespace std;

bool
checkStringIsNumber(string number)
{
    bool isNumber = true;
    for (int i = 0; i < number.length(); i++) {
        if (number[i] < 48 || number[i] > 57) {
            cout << "Error: " << number[i] << " is not a number!" << endl;
            isNumber = false;
        }
    }
    return isNumber;
}

void
changeItToTen(int &x)
{
    x = 10;
}

int
power(int base, int exponent)
{
    int b = base;
    while (exponent-- > 1)
        b *= base;
    return b;
}

double
power(double base, double exponent)
{
    double b = base;
    while (exponent-- > 1)
        b *= base;
    return b;
}

int
main()
{
    int x = 5;
    changeItToTen(x);
    cout << x << endl;

    cout << power(2, 5) << endl;
    cout << power(2.5, 5.0) << endl;

    string tmp;

    cout << "Enter a number: " << endl;
    cin >> tmp;

    checkStringIsNumber(tmp);

    return 0;
}
