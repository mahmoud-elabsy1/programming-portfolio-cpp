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

bool IsPalindromeNumber(int Number) {
    return Number == ReverseNumber(Number);
}


int main(){

    int Number = ReadPositiveNumber("\nPlease Enter a positive number: ");
    
    if (IsPalindromeNumber(Number)) {
        cout << "yes , it is a palindrome number.\n" << endl;
    } else {
        cout << "no , it is not a palindrome number.\n" << endl;
    }

    return 0;

}