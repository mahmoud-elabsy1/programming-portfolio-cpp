#include <iostream> 
// #include <cstdlib>  
#include <ctime>     

using namespace std;

// دالة بتولّد رقم عشوائي بين قيمتين (From و To)
int RandomNumber(int From, int To) {
    int random = rand() % (To - From + 1) + From; 
    return random;
}

// دالة بتحط أرقام عشوائية داخل مصفوفة
void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements: \n"; 
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100); 
    }
}

// دالة بتطبع عناصر المصفوفة بشكل مرتب
void PrintArray(int arr[100], int &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void AddArrayElement(int Number, int arr[100], int &arrLength){
    arrLength++;            
    arr[arrLength - 1] = Number; 
}

void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength) {
    for(int i = 0; i < arrLength; i++) {

        if(arrSource[i] % 2 != 0){

            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
    }
}


int main() {
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0; 

    FillArrayWithRandomNumbers(arr, arrLength); 

    int arr2[100];
    int arr2Length = 0;

    CopyOddNumbers(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements: " << endl;
    PrintArray(arr, arrLength); 
    
    cout << "\nArray 2 Odd Numbers: " << endl;
    PrintArray(arr2, arr2Length); 

    cout << endl;
    return 0;
}
