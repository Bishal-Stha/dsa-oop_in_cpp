#include <iostream>
using namespace std;

class Time {
    int hour, minute;

    public:
    Time(){
        hour= 0;
        minute=0;
    }

    Time(int t){
        hour =t/60;
        minute = t%60;
    }

    void display()
    {
        cout <<hour <<" hour" <<" " <<minute  <<" " <<"minutes" <<endl;
    }
};

int main() {
    Time t1;
    // Time t1(100);
    t1 = 100;
    t1.display();
    return 0;
}