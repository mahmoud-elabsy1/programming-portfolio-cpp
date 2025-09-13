#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(){
    float Number;

    cout << "please enter a number? ";
    cin >> Number;

    return Number;
}

float GetFractionPart(float Number){

    return Number - int(Number);
}

float MyCeil(float Number){

    int IntPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if(abs(GetFractionPart(Number))){
        if(Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
    return Number;
}

int main (){

    float Number = ReadNumber();

    cout << "My MyCeil Result: " << MyCeil(Number) << endl;
    cout << "c++ ceil Result: " << ceil(Number) << endl;
}