#include<iostream>

class Book {
public:
char author[20] ="Bishal";
int age = 18;
};

int main()
{
    std::cout <<"Hello world"<<std::endl;
    Book b1;
    std::cout<<b1.author<<std::endl;
    return 0;
}