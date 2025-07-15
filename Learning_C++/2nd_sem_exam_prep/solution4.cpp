/*
Problem Statement: Create two classes Rupee and Dollar respectively. Write conversion operator to convert between Rupee and Dollar assuming that 1 dollar equals 133 rupees. Write a main program that allows the user to enter an amount in either currncy and then converts it to other currency and displays the result.
*/

// $0.75 in nepali. then  
// $1 = 133
// $0.75 = 0.75 * 133 = 99.75
// Rs. 345 in $
// 345/133 = 2.5939
#include<iostream>
using namespace std;
#define RATE 133

class Rupee {
    private:
    float money_rs;
    public:
    Rupee(float money_rs): money_rs(money_rs){};
    void toDollar(){
        float temp = money_rs/RATE;
        cout <<"Rs "<<money_rs <<" = $ "<<temp <<endl;
    }
};

class Dollar {
    private:
    float money_$;
    public:
    Dollar(float money_$): money_$(money_$){};
    void toNPR(){
        float temp = money_$*RATE;
        cout <<"$ "<<money_$ <<" = Rs "<<temp<<endl;
    }
};

int main(){
    Rupee NPR(13300);
    Dollar USD(100);
    NPR.toDollar();
    USD.toNPR();
}