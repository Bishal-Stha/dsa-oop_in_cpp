#include<iostream>
using namespace std;

class Calculate{
    public:
    float X,Y;

    float sum(){
        return X+Y;
    }
    float diff(){
        return X-Y;
    }
    float prod(){
        return X*Y;
    }
    float div(){
        try{
            if(Y !=0)
            return X/Y;
            else
            throw string("Division by Zero");
        }
        catch(string error){
            cout <<"Error: " <<error<<endl;
        }
    }

    Calculate(float x,float y){
        X =x;
        Y =y;
    }
};

int main(){
    Calculate calc(10,0);
    cout <<"Calculations: "<<endl;
    cout<<"sum is "<<calc.sum()<<endl;
    cout<<"diff is "<<calc.diff()<<endl;
    cout<<"prod is "<<calc.prod()<<endl;
    cout<<"div is "<<calc.div()<<endl;

}