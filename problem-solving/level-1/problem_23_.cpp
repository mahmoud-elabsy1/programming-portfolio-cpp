            //* مساحة الدائره داخلها مثلث غير متساي الساقين  */

#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B, float& C){
    
    cout << "please enter Triangle Side A: ";
    cin >> A;
    cout << "please enter Triangle Base B: ";
    cin >> B;
    cout << "please enter Triangle Side C: ";
    cin >> C;

}

float CircleAreaByATriangle(float A, float B, float C) {

    const float pi = 3.14;
    float P = (A + B + C) / 2;
    float Area =  pi * (pow(((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)))), 2));
    return Area;
}

void PrintResult(float Area){
    cout << "Circle Area = " << Area << endl;
}

int main(){
    
float A, B, C;

ReadTriangleData(A, B, C);
PrintResult(CircleAreaByATriangle(A, B, C));

}