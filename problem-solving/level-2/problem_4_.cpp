
//*         يطبع الارقام الكامله من 1 ل N

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message;
        cin >> Number;
    } while (Number <= 0); // لازم يكون الرقم موجب لو غير كدا يرجع يطلبه
    return Number;
}

bool isPerfectNumber(int Number) {
    int sum = 0;
    for (int i = 1; i < Number; i++) {
        if (Number % i == 0) {//* يفحص هل i عدد كامل ولا لأ
            sum += i;
        }
    }
    return sum == Number;
}

void PrintPerfectNumbersFrom1ToN(int Number) {
    int counter = 0; // عدد الأرقام الكاملة

    for (int i = 1; i <= Number; i++) {
        if (isPerfectNumber(i)) {
            cout << i << endl;// يطبع الرقم الكامل
            //* لو الرقم كامل يطبعه
            counter++; // كل ما يلاقي عدد كامل يزود العداد
        }
    }

    cout << "\nTotal Perfect Numbers from 1 to " << Number << " = " << counter << endl;
}



int main(){

    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please Enter a positive number: "));

    
    return 0;
}