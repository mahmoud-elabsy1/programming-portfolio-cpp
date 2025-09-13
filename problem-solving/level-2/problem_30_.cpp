#include <iostream>  
// #include <cstdlib>  
#include <ctime>   

using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;          
    } while (Number <= 0);        

    return Number;             
}

// دالة بتولّد رقم عشوائي بين From و To
int RandomNumber(int From, int To) {
    int random = rand() % (To - From + 1) + From; // توليد رقم عشوائي داخل المدى
    return random;
}

// دالة بتحط أرقام عشوائية في المصفوفة
void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    // cout << "\nEnter number of elements: \n"; // اطلب من المستخدم عدد العناصر
    // cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100); // حط رقم عشوائي من 1 لـ 100 في كل عنصر
    }
}

void SumOf2Arrays(int arr[100], int arr2[100], int arrSum[100], int arrLength){

    for (int i = 0; i < arrLength; i++){
        arrSum[i] = arr[i] + arr2[i];
    }
}

// دالة بتطبع عناصر المصفوفة
void PrintArray(int arr[100], int &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; // اطبع كل عنصر وبينهم مسافات
    }
    cout << endl;
}


int main() {

    srand((unsigned)time(NULL)); // تهيئة العشوائية باستخدام الوقت الحالي

    int arr[100], arr2[100], arrSum[100];

    int arrLength = ReadPositiveNumber("\nHow many elements ? ");


    FillArrayWithRandomNumbers(arr, arrLength); // املاها بأرقام عشوائية
    FillArrayWithRandomNumbers(arr2, arrLength); // املاها بأرقام عشوائية

    SumOf2Arrays(arr, arr2, arrSum, arrLength);


    cout << "\nArray 1 elements: ";
    PrintArray(arr, arrLength); // اطبع المصفوفة الأصلية

    cout << "\nArray 2 elements: ";
    PrintArray(arr2, arrLength); // اطبع المصفوفة اللي اتنسخ فيها

    cout << "\nsum of array1 and array2 elements: \n";
    PrintArray(arrSum, arrLength);
    cout << endl;

    return 0;
}
