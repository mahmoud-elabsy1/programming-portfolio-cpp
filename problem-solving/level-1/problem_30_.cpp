                   //* مضروب العدد


#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message){
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int Factorial(int N){
    int F = 1;

    for(int counter = N; counter >= 1; counter--){
        F = F * counter;
    }
    return F;
}
//**************************************** */

// void mynum(){
    
//     int num, sum = 1;
//     cout << "enter num positive: " ;
//     cin >> num;

//     while(num % 2 !=0){
//         cin >> num;
//     }

    
//     for (int i = num; i >= 1; i--){
//         sum *= i;
//      }
    
        
//         cout << sum << endl;

// }

int main(){

    cout << Factorial(ReadPositiveNumber("Enter N ?")) << endl;

}