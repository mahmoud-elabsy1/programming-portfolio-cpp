#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message) {
    float Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float CalculateRemainder(float TotalBill, float TotalCashPaid) {
    return TotalCashPaid - TotalBill;
}

int main(){

    float TotalBill = ReadPositiveNumber("Please enter the total bill : ");
    float TotalCashPaid = ReadPositiveNumber("Please enter the total cash paid : ");

    cout << "Total bill: " << TotalBill << endl;
    cout << "Total cash paid: " << TotalCashPaid << endl;
    cout << "***********************************" << endl;
    cout << "Remainder: " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;


}