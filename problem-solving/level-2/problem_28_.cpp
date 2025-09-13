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
    cout << "\nEnter number of elements: \n"; // اطلب من المستخدم عدد العناصر
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100); // حط رقم عشوائي من 1 لـ 100 في كل عنصر
    }
}

// دالة بتطبع عناصر المصفوفة
void PrintArray(int arr[100], int &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; // اطبع كل عنصر وبينهم مسافات
    }
    cout << endl;
}

// دالة بتنسخ عناصر من مصفوفة لمصفوفة تانية
void CopyArray(int arrSource[100], int arrDestination[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrDestination[i] = arrSource[i]; // انسخ كل عنصر واحد واحد
    }
}

int main() {

    srand((unsigned)time(NULL)); // تهيئة العشوائية باستخدام الوقت الحالي

    int arr[100];      // المصفوفة الأصلية
    int arrLength;     // عدد عناصر المصفوفة

    FillArrayWithRandomNumbers(arr, arrLength); // املاها بأرقام عشوائية

    int arr2[100];     // المصفوفة اللي هينتسخ فيها البيانات
    CopyArray(arr, arr2, arrLength); // انسخ البيانات من arr لـ arr2

    cout << "\nArray 1 elements: ";
    PrintArray(arr, arrLength); // اطبع المصفوفة الأصلية

    cout << "\nArray 2 elements after copy: ";
    PrintArray(arr2, arrLength); // اطبع المصفوفة اللي اتنسخ فيها

    return 0;
}
