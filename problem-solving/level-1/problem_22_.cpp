            //* مساحة الدائره داخل مثلث متساي الساقين  */

#include <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B){
    
    cout << "please enter Triangle Side A: ";
    cin >> A;
    cout << "please enter Triangle Base B: ";
    cin >> B;

}

float CircleAreaByITriangle(float A, float B) {

    const float pi = 3.14;
    float Area = (pi * pow(B, 2) / 4 ) * ((2 * A - B) / (2 * A + B));
    return Area;
}

void PrintResult(float Area){
    cout << "Circle Area = " << Area << endl;
}

int main(){

float A, B;

ReadTriangleData(A, B);
PrintResult(CircleAreaByITriangle(A, B));

}


