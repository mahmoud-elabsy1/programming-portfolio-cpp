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

int ReadPositiveNumber(string Message){
int Number = 0;
    do {
        cout << Message;
        cin >> Number;

    } while (Number <= 0);

    return Number;
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

void GenerateKeys(short NumberOfKeys) {
    for (int i = 1; i <= NumberOfKeys; i++) {
        cout << "Key [" << i << "]:" << GenerateKey() << endl;
    }
}

int main(){

    srand((unsigned)time(NULL));
    
    GenerateKeys(ReadPositiveNumber("Please Enter the number of keys to generate: "));

    return 0;
}