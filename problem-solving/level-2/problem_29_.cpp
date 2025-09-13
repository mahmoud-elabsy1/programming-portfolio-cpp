#include <iostream>  
#include <cmath>  
// #include <cstdlib> 
#include <ctime>   

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 0 };

enPrimeNotPrime CheckPrime(int Number) {
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++) {
        if (Number % i == 0) {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

// دالة بتولّد رقم عشوائي بين From و To
int RandomNumber(int From, int To) {
    int random = rand() % (To - From + 1) + From; // توليد رقم عشوائي داخل المدى
    return random;
}

// دالة بتحط أرقام عشوائية في المصفوفة
void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements: \n"; // اطلب من المستخدم عدد العناصر
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100); // حط رقم عشوائي من 1 لـ 100 في كل عنصر
    }
}

void CopyOnlyPrimaryNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arr2Length){
    
    int counter = 0;
    for (int i = 0; i < arrLength; i++){

        if(CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime){
            arrDestination[counter] = arrSource[i];
            counter++;
        }
    }

    arr2Length = counter;
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

    int arr[100];      // المصفوفة الأصلية
    int arrLength;     // عدد عناصر المصفوفة

    FillArrayWithRandomNumbers(arr, arrLength); // املاها بأرقام عشوائية

    int arr2[100], arr2Length = 0; 
    
    CopyOnlyPrimaryNumbers(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 1 elements: ";
    PrintArray(arr, arrLength); // اطبع المصفوفة الأصلية

    cout << "\nPrime numbers in array2: ";
    PrintArray(arr2, arr2Length); // اطبع المصفوفة اللي اتنسخ فيها

    return 0;
}
