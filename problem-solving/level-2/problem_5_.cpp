#include <iostream>
#include <string>
using namespace std;

string ReadPositiveNumber(string Message) {
    string Number = "0";
    do {
        cout << Message;
        cin >> Number;
    } while (Number <= "0");
    return Number; //
}

void PrintResult(string Number) {
    for (int i = Number.length() ; i >= 0; i--) { //* لينجس بترجع عدد الاعداد اللي دخلها 
    cout << Number[i] <<endl; // اطبع الرقم الأخير
}

}

int main(){

    PrintResult(ReadPositiveNumber("Please Enter a positive number: "));
    
    return 0;

}

//* حل بطريقه اخري

// #include <iostream>
// #include <string>
// using namespace std;


// int ReadPositiveNumber(string Message) {
//     int Number = 0;
//     do {
//         cout << Message;
//         cin >> Number;
//     } while (Number <= 0);
//     return Number;
// }

// // void PrintDigits(int Number) {
// //     if (Number == 0) {
// //         cout << "0" << endl; // إذا كان الرقم 0، اطبعه مباشرة
// //         return;
// //     }
    
// //     while (Number > 0) {
// //         cout << Number % 10 << endl; // اطبع الرقم الأخير
// //         Number /= 10; // احذف الرقم الأخير
// //     }
// // }
// //* طريقه اخري لاخر فنكشن

// // void PrintDigits(int Number){
// //     while (Number > 0) {
// //         cout << Number % 10 << endl; // اطبع الرقم الأخير
// //         Number /= 10;
// //     }
// //     cout << endl;
// // }

// //* طريقه اخري لاخر فنكشن

// void PrintDigits(int Number){
//     int Remainder = 0;

//     while(Number > 0) {
//         Remainder = Number % 10; //  يعني: اقسم الرقم على 10، وهات الباقي الي هو 4 ويطبعه ويرجع يكمل
//         Number = Number / 10; // احذف الرقم الأخيريعني مثلا بيطبع 4 ويحذف الباقي اللي هو 123 ويرجع يكمل باقي الرقم
//         cout << Remainder << endl; // اطبع الرقم الأخير
//     }
// }

// int main(){

//     PrintDigits(ReadPositiveNumber("Please Enter a positive number: "));

// }