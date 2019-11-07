/// In addition to while and for loops C++ has do .. while loop.
/// It may be convenient eg in the following case:

#include <iostream>

int main ()
{
    char ans;
    int iteration_number = 0;
    do
    {
        if (iteration_number > 3)
        {
            std::cout << "Exceeded iterations limit" << std::endl;
        }
        std::cout << "Press y to exit" << std::endl;
        std::cin >> ans;
        ++iteration_number;

    } while (ans != 'y' && ans != 'Y');

    std::cout << "Exited!" << std::endl;

    return 0;
}
