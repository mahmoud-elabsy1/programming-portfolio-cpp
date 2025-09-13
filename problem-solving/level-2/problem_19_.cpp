#include <iostream> 
#include <cstdlib>   
#include <ctime>    

using namespace std;

int RandomNumber(int From, int To){
    int random = rand() % (To - From + 1) + From;

    return random;
}

int main(){

    srand((unsigned)time(NULL));
    

    cout << RandomNumber (1, 10) << endl;
    cout << RandomNumber (1, 10) << endl;
    cout << RandomNumber (1, 10) << endl;

    return 0;
}

// 2. ✅ دالة العشوائية RandomNumber(int From, int To):


// int randNum = rand() % (To - From + 1) + From;
// rand() → بترجع رقم عشوائي كبير

// % (To - From + 1) → يقيده في المدى اللي انت عايزه

// + From → يبدأ من الحد الأدنى اللي اخترته

// مثال:
// لو From = 1, To = 10
// → الرقم الناتج هيكون من 1 إلى 10 (شامل)

// 3. ✅ تهيئة المولد العشوائي بـ srand((unsigned)time(NULL)):
// لو ما عملتش السطر ده، الكود كل مرة هيرجع نفس الأرقام

// time(NULL) بيرجع الوقت الحالي، وده بيخلي كل تشغيل يعطيك أرقام مختلفة

// 4. ✅ في الـ main:
// كل مرة بتشغل البرنامج، هتحصل على أرقام عشوائية جديدة من 1 إلى 10
// مثال:

// cout << RandomNumber(1, 10) << endl;
// cout << RandomNumber(1, 10) << endl;
// cout << RandomNumber(1, 10) << endl;
// هتطبع 3 أرقام عشوائية مختلفة بين 1 و10

