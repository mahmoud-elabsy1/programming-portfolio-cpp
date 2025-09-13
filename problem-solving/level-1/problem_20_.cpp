#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSide(){
    float A;
    cout << "pleas enter square side A: ";
    cin >> A;
    return A;
}

float CircleAreaInscribedInSquare(float A) {

    const float pi = 3.14;
    float Area = pi * pow((A / 2), 2); 
    return Area;

}

void PrintResult(float Area){
    cout << "Circle Area = " << Area << endl;
}

int main(){

PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));

 





}