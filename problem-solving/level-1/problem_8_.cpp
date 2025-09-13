#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark(){
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;
    return mark;
}

enPassFail CheckMark(int mark){

    if (mark >= 50) {
       return enPassFail::Pass;
    } 
    else {
        return enPassFail::Fail;
    }
}

void PrintResult(int mark){
     if (CheckMark(mark) == enPassFail::Pass) {
        cout << "pass" << endl;
    } 
    else {
        cout << "fail" << endl;
    }
}

int main() {
    
    PrintResult(ReadMark());





    return 0;
}