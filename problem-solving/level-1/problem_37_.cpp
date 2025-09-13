#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string Message) {
    float Number;
    cout << Message; 
    cin >> Number;
    return Number;
}

float SumNumbers() {
    int sum = 0, Number = 0, counter = 1;
    
    do
    {
        Number = ReadNumber("Please enter a number " + to_string(counter) + "\n ") ;
        
        if (Number == -99) {
            break;
        }

        sum += Number;
        counter++;

    } while (Number != -99);
    
    
    return sum;
}

int main(){

    cout << "\nResult: " << SumNumbers() << endl;



    //************ */
// float num, sum =0;
// cout << "enter num: ";
// cin >>  num;

// while(num != -99){
//     sum +=num;
//     cout << "wrong number: " << endl;
//     cin >> num;
    
// }


// cout << sum<< endl;




}