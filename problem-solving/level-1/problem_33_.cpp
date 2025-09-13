#include <iostream>
using namespace std;

int ReadNumberInRange(int From, int To) {
    int Grade;
    do
    {
        cout << "Please enter a number between 0 and 100 " << endl;
        cin >> Grade;
    } while (Grade < From || Grade > To);
    
    return Grade;
}

char GerGradeLetter(float grade) {
    if (grade >= 90) {
        return 'A';
    } 
    else if (grade >= 80) {
        return 'B';
    } 
    else if (grade >= 70) {
        return 'C';
    } 
    else if (grade >= 60) {
        return 'D';
    } 
    else if (grade >= 50) {
        return 'E';
    } 
    else {
        return 'F';
    }
}


int main() {

    cout << "Result: " << GerGradeLetter(ReadNumberInRange(0, 100)) << endl;


    return 0;
}