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

void Swap(int& A, int& B){
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}

// دالة بتحط أرقام عشوائية في المصفوفة
void FillArrayWith1ToN(int arr[100], int &arrLength) {
    // cout << "\nEnter number of elements: \n"; // اطلب من المستخدم عدد العناصر
    // cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = i + 1;
    }
}

// دالة بتولّد رقم عشوائي بين From و To
int RandomNumber(int From, int To) {
    int random = rand() % (To - From + 1) + From; // توليد رقم عشوائي داخل المدى
    return random;
}


void ShuffleArray(int arr[100], int arrLength){

    for (int i = 0; i < arrLength; i++){
        int index1 = RandomNumber(1, arrLength) - 1;
        int index2 = RandomNumber(1, arrLength) - 1;

        Swap(arr[index1], arr[index2]);
    }
}

// دالة بتطبع عناصر المصفوفة
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; // اطبع كل عنصر وبينهم مسافات
    }
    cout << endl;
}


int main() {

    srand((unsigned)time(NULL)); // تهيئة العشوائية باستخدام الوقت الحالي

    int arr[100];

    int arrLength = ReadPositiveNumber("\nenter number of elements ? ");


    FillArrayWith1ToN(arr, arrLength); // املاها بأرقام عشوائية

    
    
    cout << "\nArray elements befor shuffle: ";
    PrintArray(arr, arrLength); // اطبع المصفوفة الأصلية
    
    ShuffleArray(arr, arrLength);

    cout << "\nArray elements after shuffle: ";
    PrintArray(arr, arrLength); // اطبع المصفوفة اللي اتنسخ فيها

    cout << endl;

    return 0;
}
