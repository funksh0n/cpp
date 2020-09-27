#include <iostream>
using namespace std;

int
main()
{
    string text = "foo";
    for (int i = 0; i < text.length(); i++) {
        cout << text[i] << endl;
    }
    char ch = text[0];
    cout << ch << endl << endl;

    char chArray[6] = "fubar";
    // chArray = "foobar";
    cout << chArray << endl;
    cout << chArray[0] << endl;
    cout << *(chArray) << endl;
    cout << *chArray << endl;
    cout << &chArray << endl << endl;

    char *pChArray = chArray;
    cout << pChArray << endl;
    cout << pChArray[0] << endl;
    cout << *(pChArray) << endl;
    cout << *pChArray << endl;
    cout << &pChArray << endl << endl;

    /* string to character array */
    const char *pText = text.c_str();
    cout << pText << endl;

    /* character array to string */
    string chArrayToString = chArray;
    cout << chArrayToString << endl << endl;

    /* Cannot change value of characters in pointer,
       the compiler behaves differently with char foo[] and char *foo.
       Prefix with const to let compiler generate error rather
       than running into runtime error */
    char *pStringLiteral = "Can't touch this!"; // C++ forbids converting a string constant to char* (warn)
    // pStringLiteral[2] = 'b';
    cout << pStringLiteral << endl << endl;

    char *pDynamicArray = new char[10];
    cout << pDynamicArray << endl;
    pDynamicArray[0] = 'a';
    pDynamicArray[1] = '\0';
    // pDynamicArray = "0123456789";
    cout << pDynamicArray << endl << endl;
    delete []pDynamicArray;

    string stringArray[5] = {"String Array", "String Array", "String Array"};
    for (string s : stringArray) cout << s << endl;

    return 0;
}
