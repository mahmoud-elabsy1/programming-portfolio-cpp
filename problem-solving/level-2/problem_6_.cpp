#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int SumOfDigits(int Number) {
    int sum = 0, Remainder = 0;

    while(Number > 0) {
        Remainder = Number % 10; //  يعني: اقسم الرقم على 10، وهات الباقي الي هو 4 ويطبعه ويرجع يكمل
        Number = Number / 10; // احذف الرقم الأخيريعني مثلا بيطبع 4 ويحذف الباقي اللي هو 123 ويرجع يكمل باقي الرقم
        sum += Remainder; // اجمع الأرقام
    }
    return sum; // ارجع مجموع الأرقام
}

int main(){

    cout << "Sum of digits: " 
         << SumOfDigits(ReadPositiveNumber("Please Enter a positive number: "))
         << endl;
    
    return 0;
}