#include<iostream>
using namespace std;

class GirlFriend {
    private:
    string gf_name;
    string gf_address;
    unsigned int gf_age;

    public:
    GirlFriend():gf_name("Google"), gf_address("California"), gf_age(26){}

    // Setters
    void setGFName(string name){gf_name = name;}
    void setGFAddress(string address){gf_address = address;}
    void setGFAge(unsigned int age){gf_age = age;}

    // Getters
    string getGFName(){return gf_name;}
    string getGFAddress(){return gf_address;}
    int getGFAge(){return gf_age;}

    // Friend functions
    friend void showGF(const GirlFriend& gf);
    friend void changeGFName(GirlFriend& GF, string newName);
    friend void changeGFAddress(GirlFriend& GF, string newAddress);
    friend void changeGFAge(GirlFriend& GF, unsigned int newAge);

};

void showGF(const GirlFriend& gf){
    cout <<"GF Details: "<<endl;
    cout <<"Name: " <<gf.gf_name <<endl;
    cout <<"Address: " <<gf.gf_address <<endl;
    cout <<"Age: " <<gf.gf_age <<endl;
}

void changeGFName(GirlFriend& GF, string newName){GF.gf_name = newName;}
void changeGFAddress(GirlFriend& GF, string newAddress){GF.gf_address = newAddress;}
void changeGFAge(GirlFriend& GF, unsigned int newAge){GF.gf_age = newAge;}

int main()
{
    GirlFriend gf1;
    cout <<"Printing default gf info\n";
    showGF(gf1);

    cout<<"\n" <<"setting gf info using setter";
    gf1.setGFName("Scarlet Witch");
    gf1.setGFAddress("Stark Tower");
    gf1.setGFAge(23);

    cout <<"\n" <<"Checking gf info manually using getters\n";
    cout <<gf1.getGFName()<<endl;
    cout <<gf1.getGFAddress()<<endl;
    cout <<gf1.getGFAge()<<endl;

    cout <<"\n" <<"Changing the gf info using friend functions\n";
    changeGFName(gf1,"Natasha Romanoff");
    changeGFAddress(gf1,"Russia, Moscow");
    changeGFAge(gf1,28);

    showGF(gf1);
    return 0;
}