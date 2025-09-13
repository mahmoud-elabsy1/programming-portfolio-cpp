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

float TotalBillAfterServiceAndTax(float TotalBill) {
    TotalBill = TotalBill * 1.1; 
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main(){

    float TotalBill = ReadPositiveNumber("Please enter the total bill : ");

    cout << "Total bill: " << TotalBill << endl;
    cout << "Total Bill After Service Fee And Tax: " 
        << TotalBillAfterServiceAndTax(TotalBill) << endl; 



}