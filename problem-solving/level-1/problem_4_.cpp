#include <iostream>
using namespace std;

struct StInfo
{
    int Age;
    bool HasDrivingLicense;
};

StInfo ReadInfo(){
    StInfo Info;

    cout << "Please Enter Your Age? ";
    cin >> Info.Age;

    cout << "Do You Have Driver License? ";
    cin >> Info.HasDrivingLicense;
    return Info;
}

bool IsAccepted(StInfo Info){
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(StInfo Info){
    if(IsAccepted(Info))
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;
}

int main() {
    
    PrintResult(ReadInfo());




//**  الطريقه العاديه */

    // int age;
    // bool drive;

    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "Do you have a driving license? (1 for Yes, 0 for No): ";
    // cin >> drive;

    // if (age >= 21 && drive == true) {
    //     cout << "Hired" << endl;
    // } 
    // else {
    //     cout << "Rejected" << endl;
    // }


    return 0;
}
