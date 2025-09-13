#include <iostream>
using namespace std;

int ReadNumber(){
    
    int Number;
    cout << "please enter a number " ;
    cin >> Number;
    return Number;
}

void PrintRangeFrom_N_To_1_UsingFor(int Number){

    cout << "Range Printing Using For Statement: " << endl;

    for (int Counter = Number; Counter >= 1; Counter--){
        cout << Counter << endl;
    }
}

    //* طريقه اخري
    
    void PrintRangeFromNTo1_UsingWhile(int Number){
        int Counter = Number;

        cout << "Range Printing Using While Statement: " << endl;

        while(Counter >= 1){
            cout << Counter << endl;
            Counter--;
        }
    }
    
    // * طريقه اخري

void PrintRangeFromNTo1_UsingDoWhile(int Number){

    int Counter = Number + 1;

    cout << "Range Printing Using Do..While Statement: " << endl;

    do
    {
        Counter--;
        cout << Counter << endl;
        
    } while (Counter > 1);
    
}


int main(){

    int N = ReadNumber();
    PrintRangeFrom_N_To_1_UsingFor(N);
    PrintRangeFromNTo1_UsingWhile(N);
    PrintRangeFromNTo1_UsingDoWhile(N);







}