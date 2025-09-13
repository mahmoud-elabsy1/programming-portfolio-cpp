#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void PrintInvertedNumber(int Number) {
    
    for(int i = 65; i <= 65 + Number - 1; i++) {
        
        for(int j = 1; j <= Number - (65 + Number - 1 - i); j++) {
            cout << char(i);
        }
        cout << endl;
    }
}

//* حل اخر لاخر فنكشن

// void PrintInvertedNumber(int Number) {
    
//     for(int i = 65; i <= 65 + Number - 1; i++) {

//         for(int j = 1; j <= i - 65 + 1; j++) {
//             cout << char(i);
//         }
//         cout << endl;
//     }
// }

//* حل اخر لاخر فنكشن

// void PrintInvertedNumber(int Number) {
    
//     for(int i = 1; i <= Number; i++) {
        
//         for(int j = 1; j <= i; j++) {
//             cout << char(64 + i); // Convert number to corresponding letter
//         }
//         cout << endl;
//     }
// }

//* حل اخر لاخر فنكشن

// void PrintInvertedNumber(int Number) {
    
// for(int i = 1; i <= Number; i++) {
//     char letter = 'A' + i - 1; // Convert number to corresponding letter
//         for(int j = 1; j <= i; j++) {
//             cout << letter << " ";
//         }
//         cout << endl;
//     }
// }

int main(){

    PrintInvertedNumber(ReadPositiveNumber("\nPlease Enter a positive number: "));

    return 0;
}