/// Example that uses C++ strings

#include <iostream>
#include <string>

int main()
{
    std::string exampleString = "Hello";
    std::string anotherString = "World";

    int exampleLength = exampleString.length();
    char firstLetter = exampleString[0];
    char lastLetter = exampleString[exampleLength - 1];

    std::string fullString = exampleString + anotherString;

    std::cout << "The strings are:" << std::endl;
    std::cout << exampleString << std::endl;
    std::cout << anotherString << std::endl << std::endl;
    if (exampleString < anotherString)
    {
        std::cout << exampleString << " < " << anotherString << std::endl;
    }
    else if (exampleString > anotherString)
    {
        std::cout << exampleString << " > " << anotherString << std::endl;
    }
    else
    {
        std::cout << "The strings " << exampleString;
        std::cout << " and " << anotherString << " are equal" << std::endl;
    }
    std::cout << "The length of " << exampleString << " is " << exampleLength << std::endl;
    std::cout << "The combined string is " << fullString << std::endl;
    std::cout << "The first letter in " << exampleString;
    std::cout << " is " << firstLetter << std::endl;

    std::cout << "The last letter in " << exampleString;
    std::cout << " is " << lastLetter << std::endl;
}
