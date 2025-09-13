#include <iostream>
using namespace std;

void ReadNumbers(float& A, float& B){
    cout << "Enter first number: ";
    cin >> A;

    cout << "Enter second number: ";
    cin >> B;
}

float CalculateRectangleArea(float A, float B){
    return A * B;
}

void PrintResult(float Area){
    cout << "\nRectangle Area = " << Area << endl;
}

// int area(int num1, int num2) {
//     return num1 * num2;
// }

int main(){

    float A, B;
    
    ReadNumbers(A, B);
    PrintResult(CalculateRectangleArea(A, B));

}