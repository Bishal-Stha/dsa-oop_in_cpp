# include<iostream>
using namespace std; 

// template <typename T> T maximum(T a, T b){
//     return (a > b) ? a : b;
// }

//Normal way
// int maximum(int a, int b){
//     return (a>b) ? a:b;
// }

// string maximum(string &a, string &b){
//     return (a>b) ? a:b;
// }

// float maxiumum(float a, float b){
//     return (a > b) ? a:b;
// }

// so the function is just two lines so, i can do function overloading manually. but when the individual function is hundreds of lines and you need to make it function overloading. You're doomed.

//Using Function template to do it optimally.
template <typename T>
T maximum(T a, T b){
    return (a>b) ? a : b;
}

template <typename X>
X sum(X a, X b){
    return a+b;
}


int main(){
    // float x =10.35;
    // float y = 4.562;
    float x{10.35};
    float y{4.562};

    string a{"Computer"};
    string b{"Calculator"};

    string p{"Alex"}, q{"Net"}; // works as a concatenation.

    cout <<"Maximum: "<<maximum(x,y) <<endl;
    cout <<"Maximum: "<<maximum(a,b) <<endl;
    cout <<endl;
    cout <<"sum: " <<sum(x,y) <<endl;
    cout <<"sum: " <<sum(p,q) <<endl;
    return 0;
}