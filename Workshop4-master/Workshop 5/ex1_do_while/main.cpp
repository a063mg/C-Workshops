/// In addition to while and for loops C++ has do .. while loop.
/// It may be convenient eg in the following case:

#include <iostream>
#include <vector>

std::vector split(std::string str, char delimiter){
    std::string vector;
    std::vector<std::string> lst;
    lst.clear();

    int i = 0;


    vector = "";

    while (str[i] != '\0'){
        if (str[i] == delimiter){
            lst.push_back(vector);
            vector = "";
        }
        else{
            vector += str[i];
        }
        i++;
    }
    lst.push_back(vector);
    i = 0;

    return vector;

}


int main(){
    std::string str, delimiter;

    std::cin>>str;
    std::cin>>delimiter;

    std::cout<<split(str, delimiter)<<std::endl;

    return 0;
}