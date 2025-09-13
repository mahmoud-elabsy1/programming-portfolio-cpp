//*              عدد الرقم اللي تكرر     

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CountDigitsFrequency(short DigitToCheck,int Number) {
    int Freqcount = 0, remainder = 0;

    while (Number > 0) {
        remainder = Number % 10; // احصل على الرقم الأخير
        Number = Number / 10; // احذف الرقم الأخير
        if (remainder == DigitToCheck) { // إذا كان الرقم الأخير يساوي الرقم الذي نبحث عنه
            Freqcount++; // زيادة العداد
        }
    }
    return Freqcount; // ارجع عدد الأرقام
}


int main(){
    int Number = ReadPositiveNumber("\nPlease Enter the main number: ");
    short DigitToCheck = ReadPositiveNumber("\nPlease Enter one digit to check: ");

    int frequency = CountDigitsFrequency(DigitToCheck, Number);

    cout << "\nThe digit " << DigitToCheck << " Frequency is " 
         << frequency << " times" << endl << endl;

    return 0;


}