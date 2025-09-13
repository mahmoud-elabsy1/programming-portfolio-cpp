#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(){
    float Number;

    cout << "please enter a number? ";
    cin >> Number;

    return Number;
}

float MyFloor(float Number){

    if(Number > 0)
        return int(Number);
    else
        return int(Number) - 1;
}

int main (){

    float Number = ReadNumber();

    cout << "My MyFloor Result: " << MyFloor(Number) << endl;
    cout << "c++ floor Result: " << floor(Number) << endl;
}