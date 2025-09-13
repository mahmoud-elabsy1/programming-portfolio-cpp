#include <iostream>

using namespace std;

struct StInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

StInfo ReadInfo(){
    StInfo Info;

    cout << "Please Enter Your Age? ";
    cin >> Info.Age;

    cout << "Do You Have Driver License? ";
    cin >> Info.HasDrivingLicense;

    cout << "Do You Have HasRecommendation? ";
    cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted(StInfo Info){
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (Info.Age > 21 && Info.HasDrivingLicense);
    }
}

void PrintResult(StInfo Info){
    if(IsAccepted(Info))
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl;
}

int main() {
    
    PrintResult(ReadInfo());



    return 0;
}
