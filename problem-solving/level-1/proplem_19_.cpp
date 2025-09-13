#include <iostream>
#include <cmath>

using namespace std;

float ReadDiameter(){
    float D;
    cout << "pleas enter radios D: ";
    cin >> D;
    return D;
}

float CircleAreaByDiameter(float D) {

    const float pi = 3.14;
    float Area = (pi * pow(D, 2)) /4; 
    return Area;

}

void PrintResult(float Area){
    cout << "Circle Area = " << Area << endl;
}

int main(){

PrintResult(CircleAreaByDiameter(ReadDiameter()));

}
