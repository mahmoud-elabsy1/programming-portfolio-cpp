#include <iostream>
using namespace std;

string ReadPassword(){
    string Password;
    cout << "please enter a 3_Letter password (all capital letters): ";
    cin >> Password;   
    
    return Password;

}

bool GuessPassword(string OriginalPassword) {

        int counter = 0;
    string word = "";
    for (char first = 'A'; first <= 'Z'; first++) {
        for (char second = 'A'; second <= 'Z'; second++) {
            for (char third = 'A'; third <= 'Z'; third++) {

                word = word + char(first);
                word = word + char(second); 
                word = word + char(third);

                counter++;
                cout << "Trial [" << counter << "]: " << ": " << word << endl;

                if (word == OriginalPassword) {
                    cout << "Password is " << word << endl;
                    cout << "Found after " << counter << " Trials" << endl;
                    return true;
                }

                word = ""; // بصفرها علشان تعيد م الاول
            }
        }
    }
    return false; // If the password was not found
}

int main() {

    GuessPassword(ReadPassword());

    return 0;
}