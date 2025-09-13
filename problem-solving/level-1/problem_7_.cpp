#include <iostream>
using namespace std;

int ReadNumber (){
    int num;
    cout << "please enter a number: ";
    cin >> num;
    return num;
}

float Calculate_Half_Number(int num){
    return (float)num / 2;
}

void printResults(int num){
    string Result = "Half of " + to_string(num) + " is " + to_string(Calculate_Half_Number(num));
    cout << Result << endl;
}

int main(){

    printResults(ReadNumber());




}