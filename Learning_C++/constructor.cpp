/*
Note:
# You can make a constructor just by making a function without any datatype and naming the same name of class.
# Class is by default private.

*/


#include<iostream>
using namespace std;

class Book {
    private:
    string Title;
    string Author;
    float Price;

    public:
    Book(string title, string author, float price){
        Title = title;
        Author = author;
        Price = price;
    }

    void bookDetail(){
        cout <<"Book Details" <<endl;
        cout <<"Title: "<<Title<<endl;
        cout <<"Author: "<<Author <<endl;
        cout <<"Price: "<<Price <<endl;
    }
};

int main()
{
    Book book1("Lord of the Rings", "John Michel", 1230);
    book1.bookDetail();
    return 0;
}