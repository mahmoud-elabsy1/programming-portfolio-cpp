#include <iostream>
using namespace std;

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3){

    cout << "Enter first Mark1: ";
    cin >> Mark1;

    cout << "Enter second Mark2: ";
    cin >> Mark2;

    cout << "Enter third Mark3: ";
    cin >> Mark3;

}

int SumOf3Numbers(int& Mark1, int& Mark2, int& Mark3){
    return  (float)(Mark1 + Mark2 + Mark3) /3;
}

void PrintResults(float average){
    cout << "the total sun of numbers is: " << average << endl;
}

int main(){

    int Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);
    PrintResults(SumOf3Numbers(Mark1, Mark2, Mark3));

}