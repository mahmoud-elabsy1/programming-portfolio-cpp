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

float TotalMonths(float LoanAmount, float MonthlyInstallment) {
    return LoanAmount / MonthlyInstallment;
}

int main(){

    float LoanAmount = ReadPositiveNumber("Please enter the total amount of the loan: ");
    float MonthlyInstallment = ReadPositiveNumber("Please enter the monthly payment amount: ");
    
    cout << "Total months to pay off the loan: " << TotalMonths(LoanAmount, MonthlyInstallment) << " months" << endl;

}