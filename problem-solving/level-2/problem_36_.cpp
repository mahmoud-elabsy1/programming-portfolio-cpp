#include <iostream> 
// #include <cstdlib>  
#include <ctime>    

using namespace std;

// دالة بتقرأ رقم من المستخدم
int ReadNumber() {
    int Number;
    cout << "\nPlease enter a number to search for?\n";
    cin >> Number;
    return Number; 
}

// دالة بتضيف رقم إلى المصفوفة وتزود الطول بتاعها
void AddArrayElement(int Number, int arr[100], int &arrLength){
    arr[arrLength] = Number; 
    arrLength++;            
}

// دالة بتخلي المستخدم يدخل أكتر من رقم في المصفوفة
void InputUserNumbersInArray(int arr[100], int &arrLength){
    bool AddMore = true; 

    do {
        // اقرأ رقم من المستخدم وضيفه للمصفوفة
        AddArrayElement(ReadNumber(), arr, arrLength);

        cout << "\nDo you want to add more numbers? [0]:No, [1]:Yes?";
        cin >> AddMore;

    } while (AddMore); // طالما المستخدم بيقول نعم، كرّر
}

// دالة بتطبع عناصر المصفوفة كلها
void PrintArray(int arr[100], int &arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];        
    int arrLength = 0;  

    // خلي المستخدم يدخل الأرقام اللي عايزها
    InputUserNumbersInArray(arr, arrLength); 

    // اطبع عدد العناصر اللي المستخدم دخلها
    cout << "\nArray Length: " << arrLength << endl;

    // اطبع كل الأرقام اللي في المصفوفة
    cout << "\nArray elements: ";
    PrintArray(arr, arrLength);

    cout << endl;
    return 0; 
}
