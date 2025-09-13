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
    
    for(int i = 1; i <= Number; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){

    PrintInvertedNumber(ReadPositiveNumber("\nPlease Enter a positive number: "));

    return 0;
}