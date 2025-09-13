#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

enum enCharType {
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4,
};

int RandomNumber(int From, int To){
    int random = rand() % (To - From + 1) + From;

    return random;
}

char GetRandomCharCharacter(enCharType CharType) {
    switch (CharType) 
    {
        case enCharType::SmallLetter:
    
            return char(RandomNumber(97, 122)); // a-z
            break;
       
        case enCharType::CapitalLetter:
    
            return char(RandomNumber(65, 90)); // A-Z
            break;
    
        case enCharType::SpecialCharacter:
        
            return char(RandomNumber(33, 47)); // !-/
            break;
    
        case enCharType::Digit:
       
            return char(RandomNumber(48, 57)); // 0-9
            break;
        
    }
    
    return '\0';
}

void PrintStringArray(string arr[100], int arrLength) {
    cout << "\nArray elements:\n\n";

    for (int i = 1; i <= arrLength; i++) {

        cout << "Array [" << i << "]: " << arr[i] << endl;
    }
    cout << endl;
}

string GenerateWord(enCharType CharType, short Length) {
    string Word;
    for (int i = 1; i <= Length; i++) {
        Word += GetRandomCharCharacter(CharType);
    }
    return Word;
}

string GenerateKey() {
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    
    return Key;
}

void FillArrayWithKeys(string arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++) {
        arr[i] = GenerateKey();
    }
}

int ReadPositiveNumber(string Message){
int Number = 0;
    do {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

int main(){

    srand((unsigned)time(NULL));
    
    string arr[100];
    int arrLength =0;

    arrLength = ReadPositiveNumber("How many keys do you want togenerate?\n");
    
    FillArrayWithKeys(arr, arrLength);

    PrintStringArray(arr, arrLength);

    return 0;
}