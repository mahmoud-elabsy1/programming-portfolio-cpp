#include <iostream>
using namespace std;

int ReadAge(){
    int Age;
    cout << "please enter your Age: ";
    cin >> Age;
    return Age;
}

bool ValidateNumberInRange(int Number, int From, int To){
    return (Number >= From && Number <= To);
}

void PrintResult(int Age){

    if (ValidateNumberInRange (Age, 18, 45)) {
        cout << Age << " is a valid age" << endl;
    } 
    else {
        cout << Age << " is a invalid age" << endl;
    }
}

int main() {
    
   PrintResult(ReadAge());

    return 0;
}