#include<iostream>
using namespace std;

class Book {
    private:
    string title;
    float price;

    public:
    Book(string t, float p):title(t),price(p){};

    friend void show(Book b);
};

void show(Book b){
    cout <<"Title: "<<b.title<<endl;
    cout <<"Price: "<<b.price<<endl;
}

int main(){
    Book b("The Brief History of Time.",1699.99);
    show(b);

    return 0;
}

