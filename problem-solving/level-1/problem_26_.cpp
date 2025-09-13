#include <iostream>
using namespace std;

int ReadNumber(){
    int Number;
    cout << "Please enter a number: " ;
    cin >> Number;
    return Number;
}

void PrintRangeFrom1ToN_UsingFor(int N){//! N > بيتخزن فيها قيمه النمبر

    cout << "Range Printing Using Do..While Statement: " << endl;
    for (int Counter = 1; Counter <= N; Counter++){
        cout << Counter << endl;
    }
}
    //* طريقه اخري

void PrintRangeFrom1ToN_UsingWhile(int N){
    int Counter = 0;

    cout << "Range Printing Using Do..While Statement: " << endl;

    while(Counter < N){
        Counter++;
        cout << Counter << endl;
    }
}

    //* طريقه اخري

void PrintRangeFrom1ToN_UsingDoWhile(int N){
    int Counter = 0;
    
    cout << "Range Printing Using Do..While Statement: " << endl;

    do
    {
        Counter++;
        cout << Counter << endl;
    } while (Counter < N);
    
}

int main(){

    int N = ReadNumber();
    
    PrintRangeFrom1ToN_UsingFor(N);
    PrintRangeFrom1ToN_UsingWhile(N);
    PrintRangeFrom1ToN_UsingDoWhile(N);




}