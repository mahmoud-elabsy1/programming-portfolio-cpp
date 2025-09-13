                //*حساب مساحه المستطيل */

#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& A, float& D){
    
    cout << "please enter rectangle diagonal A: ";
    cin >> A;

    cout << "please enter rectangle diagonal D: ";
    cin >> D;
}
float RectangleAreaBySideAndDiagonal(float A, float D) {
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));
    return Area;
}

void PrintResult(float Area){
    cout << "Rectangle Area = " << Area << endl;
}

int main() {

float A, D;
ReadNumbers(A, D);
PrintResult(RectangleAreaBySideAndDiagonal(A, D));

}