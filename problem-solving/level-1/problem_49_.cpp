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
    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234") {
            return 1;
        } else {
            system("color 4F"); // بيخلي الشاشة حمراء
            cout << "Wrong PIN." << endl;
        }
    } while (PinCode != "1234");

    return 0;
    

}

int main() {

    if (Login()){
        system("color 2F");//* بيخلي الشاشة خضراء 
        cout << "Your Acount Balance Is: " << 7500 << endl;
    }


//******************************************************* */


    // int ATM_PIN;

    // cout << "Enter your ATM PIN: ";

    // while(true){
    //     cin >> ATM_PIN;

    //     if (ATM_PIN == 1234) {
    //         cout << "your balance is: 7500" << endl;
    //     } else {
    //         cout << "wrong PIN" << endl;
    //     }
    // }    


}