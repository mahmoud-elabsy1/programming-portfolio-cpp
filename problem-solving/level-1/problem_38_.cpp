#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 0 };

float ReadPositiveNumber(string Message) {
    float Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

enPrimeNotPrime CheckPrime(int Number) {
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++) {
        if (Number % i == 0) {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number){

    switch (CheckPrime(Number)) 
    {
    case enPrimeNotPrime::Prime:
        cout << Number << " is a prime number." << endl;
        break;
    case enPrimeNotPrime::NotPrime:
        cout << Number << " is not a prime number." << endl;
        break;
    }
}

int main(){

    PrintNumberType(ReadPositiveNumber("Please enter a positive number? "));




}