#include<iostream>
using namespace std;

class Vault {
    int secret;

    public:
    Vault(): secret(100){}

    friend void revealSecret(Vault& obj);
    friend void changeSecret(Vault& myobj, int newSecret);
};

void revealSecret(Vault& obj){
    cout <<"Secret is "<<obj.secret <<endl;
}

void changeSecret(Vault& myobj, int newSecret){
    myobj.secret = newSecret;
}



int main(){
    Vault v1;
    revealSecret(v1);
    changeSecret(v1,50);
    revealSecret(v1);
}