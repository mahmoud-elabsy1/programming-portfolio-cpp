
//*       باخد رقم واطبع الارقام الاوليه لحد الرقم اللي اداهولي

#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message){
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);//* لازم يكون الرقم موجب لو غير كدا يرجع يطلبه
    return Number;
    
}

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);//* round بتقرب لاقرب عدد صحيح
    for (int counter = 2; counter <= M; counter++)
    {
        if (Number % counter == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    
    return enPrimeNotPrime::Prime;

}

void PrintPrimeNumbersFrom_1_To_N(int Number)
{
    cout << "\n";
    cout << "The Prime Numbers From 1 To " << Number << " Are: " << endl;
    for (int i = 2; i <= Number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
        {
            cout << i << endl;
        }
    }

}


int main()
{

    PrintPrimeNumbersFrom_1_To_N(ReadPositiveNumber("Please Enter A Positive Number: "));
    
    return 0;

}