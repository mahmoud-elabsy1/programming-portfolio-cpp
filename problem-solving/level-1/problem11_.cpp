#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3){

    cout << "Enter first Mark1: ";
    cin >> Mark1;

    cout << "Enter second Mark2: ";
    cin >> Mark2;

    cout << "Enter third Mark3: ";
    cin >> Mark3;

}

int SumOf3Numbers(int Mark1, int Mark2, int Mark3){
    return  (float)(Mark1 + Mark2 + Mark3) /3;
}

enPassFail CheckAverage(float average){
    if (average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(float average){
    cout << "the total sun of numbers is: " << average << endl;

    if(CheckAverage(average) == enPassFail::Pass)
        cout << "pass" << endl;

    else
        cout << "fail" << endl;

}

int main(){

    int Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);
    PrintResults(SumOf3Numbers(Mark1, Mark2, Mark3));

}