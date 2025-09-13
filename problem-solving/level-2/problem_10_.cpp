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

int ReverseNumber(int Number) {
    int Number2 = 0, Remainder = 0;

    while(Number > 0) {
        Remainder = Number % 10; //  يعني: اقسم الرقم على 10، وهات الباقي الي هو 4 ويطبعه ويرجع يكمل
        Number = Number / 10; // احذف الرقم الأخيريعني مثلا بيطبع 4 ويحذف الباقي اللي هو 123 ويرجع يكمل باقي الرقم
        Number2 = Number2 * 10 + Remainder; 
    }
    return Number2; // ارجع الرقم المعكوس
}

void PrintDigits(int Number) {
    if (Number == 0) {
        cout << "0 ";
        return;
    }
    while (Number > 0) {
        cout << Number % 10 <<endl; // اطبع الرقم الأخير
        Number /= 10; // احذف الرقم الأخير
    }
}

int main() {

    PrintDigits(ReverseNumber(ReadPositiveNumber("\nPlease Enter a positive number: ")));

    return 0; 
}