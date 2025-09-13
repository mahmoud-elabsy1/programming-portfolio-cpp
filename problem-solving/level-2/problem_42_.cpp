#include <iostream> 
// #include <cstdlib>  
#include <ctime>    

using namespace std;

int RandomNumber(int From, int To) {
    int random = rand() % (To - From + 1) + From;
    return random;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements: \n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100); 
    }
}

void PrintArray(int arr[100], int &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

int OddCount(int arrSource[100], int arrLength) {
    int counter = 0;
    for(int i = 0; i < arrLength; i++) {

        if(arrSource[i] % 2 != 0){

            counter++;
        }
    }
    return counter;
}


int main() {
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0; 

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    int arr2Length = 0;

    cout << "\nArray 1 elements: " << endl;
    PrintArray(arr, arrLength); 
    
    cout << "\nOdd Numbers count is: " << endl;
    cout << OddCount(arr, arrLength) << endl; 

    cout << endl;


    return 0;
}
