
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

void PrintAllDigitsFrequency(int Number) {
    for (int i = 0; i <= 9; i++) { // من 0 إلى 9
        short DigitFrequency = CountDigitsFrequency(i, Number);
        if (DigitFrequency > 0){
        cout << "Digit " << i << " Frequency is: " 
             << DigitFrequency
             << " times." << endl;
        }
    }
}


int main(){
    int Number = ReadPositiveNumber("\nPlease Enter the number: ");
    PrintAllDigitsFrequency(Number);

    return 0;
}