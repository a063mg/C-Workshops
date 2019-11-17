/// Create a program that gets the name of the user and then outputs "Hello, <user>" where <user> is the name the user.

#include <iostream>

int main()
{
    std::string name;
    std::cin>>name;
    std::cout<<"Hello, "<<name<<std::endl;
    return 0;
}
