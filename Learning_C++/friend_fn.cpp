/*
# Points to be Noted:
1. Friend function can access both private and protected members. 

*/

#include<iostream>
using namespace std;

class Distance {
private: 
int kms, meters;

friend float calc_meters(Distance &d);

public:
void set_kms_ms(){
    cout <<"Enter kms ms" <<endl;
    cin >>kms >> meters;
}

float calc_meters(Distance &d){
    return ( kms*1000 + meters ) ;
}


};

int main()
{
    Distance d1;
    d1.set_kms_ms();
    float output = d1.calc_meters(d1);

    cout <<"Distance: " <<output << " meters" << endl;
    
    return 0;
}