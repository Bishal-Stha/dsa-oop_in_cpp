#include<iostream>
using namespace std;

int main()
{
    float weight, height;
    cout <<"enter weight in kg: ";
    cin >> weight;

    cout <<"enter height in meter: ";
    cin  >>height;

    try {
        float bmi;
        if(height != 0.0){
        bmi = weight/(height*height);
        cout <<"BMI: " <<bmi <<endl;
        }
        else {
        throw runtime_error("Number can not be divided by 0.");
        }
    }
    catch(const exception &err) {
        // cerr <<"Error: " << err.what()<<endl;
        clog <<"Error: " << err.what()<<endl;
    }
}