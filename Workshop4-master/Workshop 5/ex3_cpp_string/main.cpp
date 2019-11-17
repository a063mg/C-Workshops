/// Working with C++ strings

#include <iostream>
#include <string>

int main()
{
    // Constructor from char array (C-style string)
    std::string string_1 = std::string("String A");

    // Reading string from cin
    std::string string_2;
    std::cin >> string_2;

    // length of string
    std::cout << "length of the string_1: " << string_1.size() << std::endl;
    // alias syntax
    std::cout << "length of the string_2: " << string_1.length() << std::endl;

    // string comparison
    std::cout << "Comparison: " << (string_1 < string_2) << std::endl;

    // string concatenation
    std::cout << "Concatenation: " << (string_1 + string_2) << std::endl;

    // Strings copy
    string_1 = string_2;
    std::cout << string_1 << " = " << string_2 << std::endl;

    return 0;
}
