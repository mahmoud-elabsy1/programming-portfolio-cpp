#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3){

    cout << "Enter first number: ";
    cin >> Num1;

    cout << "Enter second number: ";
    cin >> Num2;

    cout << "Enter third number: ";
    cin >> Num3;

}

int SumOf3Numbers(int& Num1, int& Num2, int& Num3){
    return  Num1 + Num2 + Num3;
}

void PrintResults(int Total){
    cout << "the total sun of numbers is: " << Total << endl;
}

int main(){

    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    PrintResults(SumOf3Numbers(num1, num2, num3));

}