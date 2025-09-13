#include <iostream>
using namespace std;

struct StInfo
{    
string first_Name;
string last_Name;
};

StInfo ReadInfo(){
    StInfo Info;    
    cout << "Enter your first Name: ";
    cin >> Info.first_Name;
    cout << "Enter your last Name: ";
    cin >> Info.last_Name;

    return Info;   
}

string Get_fullName(StInfo Info){
    string fullName = "";
    fullName = Info.first_Name + " " + Info.last_Name;

    return fullName;
}

void print_fullName(string fullName)
{

    cout << "your full name is: " << fullName << endl;
}

int main()
{

    print_fullName(Get_fullName(ReadInfo()));

}