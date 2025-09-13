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

float MonthlyInstallment(float LoanAmount, float HowManyMonths) {
    return LoanAmount / HowManyMonths;
}

int main(){

    float LoanAmount = ReadPositiveNumber("Please enter loan amount: ");
    float HowManyMonths = ReadPositiveNumber("Please many months: ");
    
    cout << "monthly installment: " << MonthlyInstallment(LoanAmount, HowManyMonths) << " months" << endl;


}