/// Working with C-style string
/// strlen
/// strcmp

#include <iostream>
#include <string.h>


int main()
{
    char example[] = "C-style string";
    // Length of C-strings
    std::cout << strlen(example) << std::endl;

    // String comparison for C-strings
    std::cout << strcmp(example, "Some other string") << std::endl;

    // Access to char elements
    example[0] = 'c';
    std::cout << example << std::endl;
}
