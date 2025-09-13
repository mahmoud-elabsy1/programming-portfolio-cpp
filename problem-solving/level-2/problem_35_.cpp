#include <iostream>  
// #include <cstdlib> 
#include <ctime>    

using namespace std;

// دالة لقراءة رقم من المستخدم للبحث عنه في المصفوفة
int ReadNumber() {
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number;
}

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

// دالة بتبحث عن رقم داخل المصفوفة وبترجع موقعه (الفهرس)، أو -1 لو مش موجود
short FindNumberPositionInArray(int Number, int arr[100], int arrLength) {
    for(int i = 0; i < arrLength; i++) {
        if (arr[i] == Number)
            return i;        
    }
    return -1; 
}

bool IsNumberInArray(int Number, int arr[100], int arrLength){

    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

int main() {
    // إعداد العشوائية بناءً على الوقت الحالي
    srand((unsigned)time(NULL));

    int arr[100], arrLength; // تعريف المصفوفة وعدد عناصرها

    FillArrayWithRandomNumbers(arr, arrLength); // نملأ المصفوفة بأرقام عشوائية

    cout << "\nArray 1 elements: ";
    PrintArray(arr, arrLength); // نطبع المصفوفة

    int Number = ReadNumber();  // نقرأ الرقم اللي عايزين ندوّر عليه
    cout << "\nNumber you are looking for is: " << Number << endl;

    // short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength); // نبحث عن الرقم

    if (!IsNumberInArray (Number, arr, arrLength))
        cout << "No, The number is not found :-( " << endl;
    else {
        // لو الرقم موجود
        cout << "The number found at position (index): " << endl;
        cout << "Yes,it is found:-) " << endl;
    }

    cout << endl;
    return 0;
}
