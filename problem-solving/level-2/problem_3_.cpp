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
        if (Number % i == 0) {
            sum += i;
        }
    }
    return sum == Number;
}

void PrintResults(int Number) {
    
    if(isPerfectNumber(Number)) {
        cout << Number << " is a perfect number." << endl;
    } 
    else {
        cout << Number << " is not a perfect number." << endl;
    }

}

int main(){

    PrintResults(ReadPositiveNumber("Please Enter a positive number: "));


}
