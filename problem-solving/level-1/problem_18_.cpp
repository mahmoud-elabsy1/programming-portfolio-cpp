#include <iostream>

#include <cmath>

using namespace std;

void ReadRadios(float& R){

    cout << "Please enter Radios R: ";
    cin >> R;
}

float CircleArea(float r) {

    const float pi = 3.14;
    float Area = pi * pow(r, 2);
    return Area;
    
}

void PrintResult(float Area){

    cout << "Circle Area = " << Area << endl;
}

int main() {

    float R;

    ReadRadios(R);
    PrintResult(CircleArea(R));


    










}