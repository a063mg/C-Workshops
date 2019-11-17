/// Recreate the multiplication table task, allowing the user to rerun the program again after it prints the multiplication table.

#include <iostream>

int table(int n, int m){
    int i = 1;

    std::cout<<"\t";
    while (i < n+1){
        if (i != n){
            std::cout<<i<<"\t";
        }
        else{
            std::cout<<i;
        }
        i++;
    }
    //Верхняя часть печатает первую строчку

    std::cout<<std::endl;
    i = 1;
    while (i < n+1){ // пробегает по строчкам
        int j = 1;
        std::cout<<i<<"\t";// пробел
        while (j < n+1){ // пробегает по столбцам
            std::cout<<(i*j)%m;
            if (j != n){
                std::cout<<"\t";
            }
            j++;
        }
        i++;
        std::cout<<std::endl;
    }

    return 0;
}

int main() {
    int m, n;
    char request;
    do
        {
            std::cin >> n >> m;
            table(n, m);
            std::cout<<"Do you want to rerun program (y/n)?"<<std::endl;
            std::cin>>request;
        } while (request != 'N' && request != 'n');
    // std::cout<<table(n,m)<<std::endl;
}

