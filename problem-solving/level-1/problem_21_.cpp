            //**مساحة الدائره عن طريق محيطها  */

#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumference(){
    float L;
    cout << "please enter Circumference L: ";
    cin >> L;
    return L;

}

float CircleAreaByCircumference(float L) {

    const float pi = 3.14;
    float Area = pow(L, 2) / (4 * pi);
}

void PrintResult(float Area){
    cout << "Circle Area = " << Area << endl;
}

int main(){

PrintResult(CircleAreaByCircumference(ReadCircumference()));

}