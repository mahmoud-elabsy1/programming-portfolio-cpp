#include <iostream>  
#include <cstdlib>   
#include <ctime>     

using namespace std;

int RandomNumber(int From, int To){
    int random = rand() % (To - From + 1) + From;

    return random;
}

enum enCharType {
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4,
};

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

int main(){

    srand((unsigned)time(NULL));
    

    cout << GetRandomCharCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharCharacter(enCharType::Digit) << endl;

    return 0;
}