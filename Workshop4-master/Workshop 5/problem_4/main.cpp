/// Implement strcmp function: count the length of a C-style string variable initialized with a string literal

#include <iostream>

int custom_strcmp (const char string1[], const char string2[])
{
    int i = 0;
    while (string1[i] == string2[i] && string1[i] != '\0'){
        i++;
    }
    if (string2[i] == '\0'){
        return 0;
    }
    else{
        if (string1[i] > string2[i]){
            return 1;
        }
        else{
            return -1;
        }
    }

}

int main()
{
    std::cout << custom_strcmp("b", "a")<< std::endl;
    return 0;
}
