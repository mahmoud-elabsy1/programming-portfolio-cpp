#include <iostream>
// #include <string>
using namespace std;

struct stPiggyBankContent {
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent() {

    stPiggyBankContent PiggyBankContent;

    cout << "Please Enter a Total pennies: ";
    cin >> PiggyBankContent.Pennies;

    cout << "Please Enter a Total nickels: ";
    cin >> PiggyBankContent.Nickels;

    cout << "Please Enter a Total dimes: ";
    cin >> PiggyBankContent.Dimes;

    cout << "Please Enter a Total quarters: ";
    cin >> PiggyBankContent.Quarters;

    cout << "Please Enter a Total dollars: ";
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent) {
    int TotalPennies = 0;
    TotalPennies = PiggyBankContent.Pennies * 1 + 
                   PiggyBankContent.Nickels * 5 + 
                   PiggyBankContent.Dimes * 10 + 
                   PiggyBankContent.Quarters * 25 + 
                   PiggyBankContent.Dollars * 100;
    return TotalPennies;    
}

int main(){

    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout << "Total pennies: " << TotalPennies << endl;
    cout << "Total dollars: " << (float)TotalPennies / 100 << endl;


}