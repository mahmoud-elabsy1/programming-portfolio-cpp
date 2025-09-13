#include <iostream>
using namespace std;

int ReadNumbers(int& num1, int& num2) 
{

cout << "Enter first number: ";
cin >> num1;

cout << "Enter second number: ";
cin >> num2;
}

void Swap(int& A, int& B){
    int temp;

    temp = A;
    A = B;
    B = temp;
}

void PrintNumbers(int num1, int num2){
    cout << "\nnumber1: " << num1 << endl;
    cout << "number2: " << num2 << endl;
}

int main(){

int num1, num2;
ReadNumbers(num1, num2);
PrintNumbers(num1, num2);
Swap(num1, num2);
PrintNumbers(num1, num2);

}