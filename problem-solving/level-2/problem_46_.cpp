#include <iostream>
#include <cmath>
using namespace std;

float MyABS(float Number){

    if(Number > 0)
        return Number;
    else
    return Number * -1;
}

float ReadNumber(){
    float Number;

    cout << "please enter a number? ";
    cin >> Number;

    return Number;
}

int main (){

    float Number = ReadNumber();

    cout << "My ABS Result: " << MyABS(Number) << endl;
    cout << "c++ ABS Result: " << abs(Number) << endl;
}