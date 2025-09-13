#include <iostream>
using namespace std;

enum enOperationType { ADDITION = '+', SUBTRACTION = '-', MULTIPLICATION = '*', DIVISION = '/' };

float ReadNumber(string Message) {
    float Number = 0;
    cout << Message;
    cin >> Number;
    return Number;
}

enOperationType ReadOperation() {
    char Ot = '+';

    cout << "Please enter operation type (+, -, *, /): ";
    cin >> Ot;
    return enOperationType(Ot);
}

float Calculate(float num1, float num2, enOperationType operationType) {
    switch (operationType) 
    {
    case enOperationType::ADDITION:
        return num1 + num2;
    case enOperationType::SUBTRACTION:
        return num1 - num2;
    case enOperationType::MULTIPLICATION:
        return num1 * num2; 
    case enOperationType::DIVISION:
        return num1 / num2;
    default:
        return num1 + num2;
    }
}

int main() {

    float num1 = ReadNumber("Enter first number: ");
    float num2 = ReadNumber("Enter second number: ");

    enOperationType operationType = ReadOperation(); // Read the operation choice
    cout << "Result: " << Calculate(num1, num2, operationType) << endl; // Perform calculation and display result
    
    return 0;
}