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

float MyRound(float Number){

    int IntPart = int(Number);

    float FractionPart = GetFractionPart(Number);

    if(Number > 0)
        return ++IntPart;
    else
        return --IntPart;
}

int main (){

    float Number = ReadNumber();

    cout << "My MyRound Result: " << MyRound(Number) << endl;
    cout << "c++ round Result: " << round(Number) << endl;
}