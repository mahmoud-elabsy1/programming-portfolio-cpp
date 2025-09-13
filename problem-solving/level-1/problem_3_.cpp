
//** برنامج يقرا رقم من الشاشة ويشوف هل هو odd او even **/

#include <iostream>
using namespace std;

    enum enNumberType { Odd = 1, Even = 2 };

    int ReadNumber(){
        int Number;
        cout << "Please Enter Of Number: ";
        cin >> Number;

        return Number;
    }

    enNumberType CheckNumberType(int Number){
        int Result = Number % 2;
        if(Result == 0)
        return enNumberType::Even;
        else
        return enNumberType::Odd;
    }

    void PrintNumberType(enNumberType NumberType){
        if (NumberType == enNumberType::Even)
            cout << "\n Number is Even. \n";
        
        else
                cout << "\n Number is Odd. \n";
    }

int main(){

PrintNumberType(CheckNumberType(ReadNumber()));
}

                            // * حل اخر *//


// #include <iostream>
// #include <string>

// using namespace std;

//     int read_num(){
//         int num;
//         cout << " num: ";
//         cin >> num;

//         return num;
//     }
//     void print_num(int num){
//         if(num % 2 == 0){
//             cout << "The num is Odd" << endl;
//         }
//         else{
//             cout << "The num is Even" << endl;
//         }
//     }

// int main(){

//     print_num(read_num());

// }



