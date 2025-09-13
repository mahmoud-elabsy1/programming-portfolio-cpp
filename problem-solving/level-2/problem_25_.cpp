#include <iostream>  
// #include <cstdlib>   
#include <ctime>     

using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;       
    } while (Number < 0);        

    return Number;              
}

int RandomNumber(int From, int To){
    int random = rand() % (To - From + 1) + From;

    return random;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength){
    cout << "\nEnter number of elements: \n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++){
        arr[i] = RandomNumber(1, 100);
    }
}

// دالة بتطبع عناصر المصفوفة
void PrintArray(int arr[100], int &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; // اطبع كل عنصر
    }
    cout << endl;
}

int MinNumberInArray(int arr[100], int &arrLength){
    int Min = arr[0];

    for(int i = 0; i < arrLength; i++){
        if(arr[i] < Min){
            Min = arr[i];
        }
    }
    return Min;
}

int main() {

    srand((unsigned)time(NULL));

    int arr[100];       
    int arrLength;       // عدد العناصر اللي المستخدم هيحددهم

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray elements: ";
    PrintArray(arr, arrLength);

    cout << "\nMin Number is: ";
    cout << MinNumberInArray(arr, arrLength) << endl;

    return 0;
}
