             //* جمع الارقام الفرديه*

#include <iostream>
using namespace std;

enum enOodOrEven { Odd = 1, Even = 2 };

int ReadNumber(){
    
    int Number;
    cout << "please enter a Number: " ;
    cin >> Number;
    return Number;
}

enOodOrEven CheckOodOrEven(int Number){

    if(Number % 2 != 0)
        return enOodOrEven::Odd;
    else
        return enOodOrEven::Even;

}

int SumOodNumbersFrom1ToN_UsingFor(int Number){
    int sum = 0;
    cout << "sum ood numbers Using For Statement: " << endl;
    for(int i = 1; i <= Number; i++){
        
        if(CheckOodOrEven(i) == enOodOrEven::Odd ){
            sum += i;
        }
    }
    return sum;
}

int SumOodNumbersFrom1ToN_UsingWhile(int Number){
    int sum = 0;
    int i = 0;
    cout << "sum ood numbers Using While Statement: " << endl;
    while(i < Number){
        i++;
        if(CheckOodOrEven(i) == enOodOrEven::Odd){
            sum+= i;
        }
    }
    return sum;

}

int SumOodNumbersFrom1ToN_UsingDoWhile(int Number){
    int sum = 0;
    int i = 0;
    cout << "sum ood numbers Using Do..While Statement: " << endl;
    do
    {
        i++;
        if(CheckOodOrEven(i) == enOodOrEven::Odd ){
            sum += i;
        }
    } while (i < Number);
    return sum;
    
}



int main(){
int N = ReadNumber();
cout << SumOodNumbersFrom1ToN_UsingFor(N) << endl;
cout << SumOodNumbersFrom1ToN_UsingWhile(N) << endl;;
cout << SumOodNumbersFrom1ToN_UsingDoWhile(N) << endl;;

    
}
// *********************************************************


// #include <iostream>
// using namespace std;

// int ReadNumber(){
    
//     int Number;
//     cout << "please enter a Number: " ;
//     cin >> Number;
//     return Number;
// }

// void PrintRangeFrom_1_To_N_UsingFor(int Number){
    
//     int sum = 0;
//     cout << "sum ood numbers Using For Statement: " << endl;

//     for (int i = 1; i <= Number; i= i+2){
//         sum += i;
//     }
//     cout << sum << endl;
// }

// //* طريقه اخري

// void PrintRangeFrom_1_To_N_UsingWhile(int Number){
    //     cout << "Range Printing Using While Statement: " << endl;
    
    //     int sum = 0;
    //     int i = 1;
    //     while(i <= Number){
        //         sum+=i;
        //         i= i+2;
        //     }
        //     cout << sum << endl;
        // }
        
        // //* طريقه اخري
// void PrintRangeFrom_1_To_N_UsingDoWhile(int Number){
//     cout << "Range Printing Using Do..While Statement: " << endl;

//     int sum = 0;
//     int i = 1; 
    
//     do
//     {
//         sum+=i;
//         i= i+2;
//     } while (i <= Number);
//     cout << sum << endl; 
    
// }

// int main(){

//     int N = ReadNumber();

//     PrintRangeFrom_1_To_N_UsingFor(N);
//     PrintRangeFrom_1_To_N_UsingWhile(N);
//     PrintRangeFrom_1_To_N_UsingDoWhile(N);


// }