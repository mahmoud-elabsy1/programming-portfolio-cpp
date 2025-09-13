#include <iostream>
using namespace std;

void PrintWordsFromAAAtoZZZ() {
    int counter = 0;
    string word = "";
    for (char first = 'A'; first <= 'Z'; first++) {
        for (char second = 'A'; second <= 'Z'; second++) {
            for (char third = 'A'; third <= 'Z'; third++) {

                word = word + char(first);
                word = word + char(second); 
                word = word + char(third);

                cout << ++counter << ": " << word << endl;
                word = ""; // بصفرها علشان تعيد م الاول
            }
        }
        cout << "________________________" << endl; // خط فاصل بين كل حرفين
    }
}

//* حل اخر لاخر فنكشن

// void PrintWordsFromAAAtoZZZ() {
//     int counter = 0;
//         for (char first = 'A'; first <= 'Z'; first++) {
//                 for (char second = 'A'; second <= 'Z'; second++) {
//                         for (char third = 'A'; third <= 'Z'; third++) {

//                         cout << ++counter << ": " << first << second << third << endl;
//                             }
//                         }
//                 cout << "________________________" << endl; // خط فاصل بين كل حرفين
//     }
// }

int main() {
    PrintWordsFromAAAtoZZZ();

    return 0;
}
