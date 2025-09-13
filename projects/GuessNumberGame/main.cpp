
//*              لعبه تخمين الرقم


#include <iostream>  
#include <cstdlib>  
#include <ctime>   

using namespace std;

int GenerateRandomNumber(int From, int To){
    return rand() % (To - From + 1) + From;
}

int main() {
    srand(time(0)); 

    int secretNumber = GenerateRandomNumber(1, 100);
    int userGuess;
    
    cout << "please enter the number From 1 To 100: " << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > secretNumber)
            cout << "Too high! Try a smaller number." << endl;
        else if (userGuess < secretNumber)
            cout << "Too low! Try a bigger number." << endl;
        else
            cout << "Congratulations! You guessed the correct number: " << secretNumber << "!" << endl;

    } while (userGuess != secretNumber);

    return 0;
}
