#include <iostream>
using namespace std;

main()
{
    double var1, var2;

    while(true) {
        cout << "Enter first number: ";
        cin >> var1;

        cout << "Enter second number: ";
        cin >> var2;

        char op;
        cout << "Select operator + - / *: ";
        cin >> op;

        switch(op) {
        case '+':
            cout << var1 + var2 << endl;
            break;
        case '-':
            cout << var1 - var2 << endl;
            break;
        case '/':
            cout << var1 / var2 << endl;
            break;
        case '*':
            cout << var1 * var2 << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
            break;
        }
    }
}
