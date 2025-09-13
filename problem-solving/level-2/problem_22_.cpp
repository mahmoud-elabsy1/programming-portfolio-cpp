#include <iostream> 
using namespace std;

// دالة بتقرأ من المستخدم رقم موجب فقط (وتكرره لحد ما يدخله صح)
int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl; // اطبع الرسالة
        cin >> Number;           // خزن الرقم اللي المستخدم هيكتبه
    } while (Number < 0);        // لو الرقم أصغر من 0، عيد الطلب تاني

    return Number;               // رجّع الرقم
}

// دالة بتقرأ عناصر المصفوفة من المستخدم
void ReadArray(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements: \n"; // اطلب عدد العناصر
    cin >> arrLength;

    cout << "\nEnter array of elements: \n"; // اطلب العناصر نفسها

    for (int i = 0; i < arrLength; i++) {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i]; // خزّن كل عنصر في مكانه داخل المصفوفة
    }
    cout << endl;
}

// دالة بتطبع عناصر المصفوفة
void PrintArray(int arr[100], int &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; // اطبع كل عنصر
    }
    cout << endl;
}

// دالة بتحسب كام مرة الرقم بيتكرر في المصفوفة
int TimesRepeated(int Number, int arr[100], int &arrLength) {
    int count = 0; // عدّاد للتكرار

    for (int i = 0; i < arrLength; i++) { // امشي على كل عناصر المصفوفة
        if (Number == arr[i]) {           // لو الرقم الحالي بيساوي اللي بندور عليه
            count++;                      // زوّد العدّاد
        }
    }
    return count; // ارجع عدد المرات اللي اتكرر فيها الرقم
}

int main() {
    int arr[100];        // تعريف مصفوفة فيها 100 عنصر (أقصى حد)
    int arrLength;       // عدد العناصر اللي المستخدم هيحددهم
    int NumberToCheck;   // الرقم اللي عايزين نشوف اتكرر كام مرة

    ReadArray(arr, arrLength); // نقرأ المصفوفة من المستخدم

    // نقرأ الرقم اللي المستخدم عايز يعرف اتكرر كام مرة
    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

    // نطبع المصفوفة الأصلية
    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);

    // نطبع عدد التكرارات
    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " times\n\n";

    return 0;
}
