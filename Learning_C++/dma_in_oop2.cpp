#include<iostream>
using namespace std;

enum Status {Extremely_Poor,Poor, Rich, Ultra_Rich};
string Status_str[4] = {"Extremely Poor","Poor","Rich","Ultra Rich"};

class PubG_Player {
    private:
    long int Money =0;
    string Name;

    public:
    void setMoney(long int money){
        try{
            if(money >=0)
            Money = money;
            else
            throw string("Money can not be negative");
        }
        catch(string err){
            cout <<"Error: "<<err<<endl;
        }
    }
    long int getMoney(){
        return Money;
    }

    void setName(string name){
        Name =name;
    }
    string getName(){
        return Name;
    }

    void GameStatus(){
        int stat;

        //Status Code
        if (Money < 100000) stat = 0;
        else if (Money <= 1000000) stat = 1;
        else if (Money <= 10000000) stat = 2;
        else stat = 3;


        cout <<"Player: "<<Name <<endl;
        cout <<"Your game status is "<<Status_str[stat] <<endl;
    }

};

int main(){
int n;
cout <<"How many pubg players do you want to make?: ";
cin >>n;

PubG_Player *gamer = new PubG_Player[n];
for(int i=0; i<n; i++)
{
    long int mon;
    string name;
    cout <<"enter name: ";
    cin >>name;
    cout <<"enter money: ";
    cin >> mon;
    gamer[i].setName(name);    
    gamer[i].setMoney(mon);
}

for(int i=0; i<n; i++){
    gamer[i].GameStatus();
}

delete[] gamer;
return 0;

}