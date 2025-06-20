#include<iostream>
using namespace std;

class Matrices {
    public:
    int mat1[2][2];

    Matrices operator + (const Matrices& m1){
        Matrices m2;

        for(int i=0; i<2; i++){
            {
                for(int j=0; j<2; j++)
                {
                    m2.mat1[i][j] = m1.mat1[i][j] + mat1[i][j];
                }
            }
        }
        return m2;     

    }

    Matrices operator * (const Matrices& m1) const{
        Matrices m2;
        m2.mat1;

        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++){
                m2.mat1[i][j] = 0;
            }
        }

     for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
        m2.mat1[i][j] = 0;
        for (int k = 0; k < 2; ++k) {
            m2.mat1[i][j] += mat1[i][k] * m1.mat1[k][j];
        }
    }
}
        return m2;     

    }
};

void returnResult(const Matrices& m3){
        for( int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++){
            cout <<m3.mat1[i][j] <<"\t";
        }
        cout <<endl;
    }
    }

int main(){
    Matrices m1, m2;
    for( int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++){
            cout <<"Enter value for mat1["<<i<<"]["<<j <<"]: ";
            cin >>m1.mat1[i][j];
        }
    }

    for( int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++){
            cout <<"Enter value for mat2["<<i<<"]["<<j <<"]: ";
            cin >>m2.mat1[i][j];
        }
    }

    Matrices m3 = m1 + m2;
    cout <<"Matrix Addition" <<endl;
    returnResult(m3);

    Matrices m4 = m1 * m2;
    cout <<"Matrix Multiplication" <<endl;
    returnResult(m4);
    
}