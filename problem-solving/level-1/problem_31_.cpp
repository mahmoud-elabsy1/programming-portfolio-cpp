#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber() {
    float Number;
    cout << "please enter a Number: " << endl;
    cin >> Number;
    return Number;
}

float PowerOg_2_3_4(float Number){
    float a, b, c;

    a = pow(Number, 2);
    b = pow(Number, 3);
    c = pow(Number, 4);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}

int main(){


    PowerOg_2_3_4(ReadNumber());
}