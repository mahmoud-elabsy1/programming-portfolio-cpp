#include <iostream>
using namespace std;

string ReadPinCode(){
    string PinCode;
    cout << "Please enter your PIN code: ";
    cin >> PinCode;

    return PinCode;
}

bool Login(){

    string PinCode;
    int counter = 3; // عداد المحاولات 
    do
    {
        counter--;
        PinCode = ReadPinCode();

        if (PinCode == "1234") {
            return 1;
        } else {
            system("color 4F"); // بيخلي الشاشة حمراء
            cout << "Wrong PIN, you have " << counter << " more tries left." << endl;
        }
    } while (counter >= 1 && PinCode != "1234");

    return 0;
}

int main() {

    if (Login()){
        system("color 2F");//* بيخلي الشاشة خضراء 
        cout << "Your Acount Balance Is: " << 7500 << endl;
    }
    else {
        cout << "Card blocked!" << endl;
    }


//******************************************************* */





    // int PIN = 0; // 🟢 حطينا قيمة ابتدائية
    // int tries = 0;

    // while (PIN != 1234 && tries < 3) {
    //     cout << "Enter PIN: ";
    //     cin >> PIN;

    //     if (PIN != 1234) {
    //         cout << "Wrong PIN" << endl;
    //         tries++;
    //     }
    // }

    // if (PIN == 1234) {
    //     cout << "Your balance is: 7500" << endl;
    // } else {
    //     cout << "Card blocked" << endl;
    // }


//** */ حل اخر

// int pin ;
// cout << "enter pin: " << endl;
// cin >> pin;

// int x = 1;
// while(!(pin == 1234 || x == 3)){
//     cout << " wrong " << endl;
//     cin >> pin;
//     x++;
// }

// if(pin == 1234){
//     cout << "Your balance is: 7500" << endl;
// }

// else{
//     cout << " card is blocked! " << endl;
// }



}