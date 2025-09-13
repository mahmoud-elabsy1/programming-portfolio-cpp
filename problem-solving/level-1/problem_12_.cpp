#include <iostream>
using namespace std;

int ReadNumbers (int& num1, int& num2){

    cout << "please enter num1: ";
    cin >> num1;
    cout << "please enter num2: ";
    cin >> num2;

}

void printNumbers(int num1, int num2){

    if (num1 > num2){
        cout << num1 << endl;
    }
    else if(num2 > num1){
        cout << num2 << endl;
    }
    else{
        cout << "num1 == num2" << endl;
    }
}


int main(){
    int num1, num2;
    ReadNumbers(num1, num2);
    printNumbers(num1, num2);

}