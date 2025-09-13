#include <iostream>
using namespace std;

int ReadNumbers (int& num1, int& num2, int& num3){

    cout << "please enter num1: ";
    cin >> num1;
    cout << "please enter num2: ";
    cin >> num2;
    cout << "please enter num3: ";
    cin >> num3;

}

void printNumbers(int num1, int num2, int num3){

    if (num1 > num2 & num1 > num3){
        cout << num1 << endl;
    }
    else if(num2 > num1 & num2 > num3){
        cout << num2 << endl;
    }
    else if(num3 > num1 & num3 > num2){
        cout << num3 << endl;
    }
    else{
        cout << "num1 == num2 == num3" << endl;
    }
}


int main(){
    int num1, num2, num3;
    ReadNumbers(num1, num2, num3);
    printNumbers(num1, num2, num3);

}