#include <iostream>  
// #include <cstdlib>
#include <ctime>     

using namespace std;

int RandomNumber(int From, int To) {
    int random = rand() % (To - From + 1) + From; 
    return random;
}

// دالة بتحط أرقام عشوائية في المصفوفة
void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements: \n"; 
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100); //
    }
}

// دالة بتطبع عناصر المصفوفة
void PrintArray(int arr[100], int &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength){

    for(int i = 0; i < arrLength; i++){

        arrDestination[i] = arrSource[arrLength - 1 - i];
    }
}


int main() {

    srand((unsigned)time(NULL)); // تهيئة العشوائية باستخدام الوقت الحالي

    int arr[100], arrLength;

    // int arrLength = ReadPositiveNumber("\nHow many elements ? ");


    FillArrayWithRandomNumbers(arr, arrLength); // املاها بأرقام عشوائية

    int arr2[100];


    CopyArrayInReverseOrder(arr, arr2, arrLength);


    cout << "\nArray 1 elements: ";
    PrintArray(arr, arrLength); // اطبع المصفوفة الأصلية

    cout << "\nArray 2 elements after copy: ";
    PrintArray(arr2, arrLength); // اطبع المصفوفة اللي اتنسخ فيها

    cout << endl;

    return 0;
}
