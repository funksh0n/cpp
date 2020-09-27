#include <iostream>

main()
{
    int A;
    std::cout << "A = " << A << std::endl << "&A = " << &A << std::endl;
    A = 5;
    std::cout << "A = " << A << std::endl << "&A = " << &A << std::endl;

    std::string str;
    std::cout << "str = " << str << std::endl << "&str = " << &str << std::endl;
    str = "foo";
    std::cout << "stf = " << str << std::endl << "&str = " << &str << std::endl;z

}
