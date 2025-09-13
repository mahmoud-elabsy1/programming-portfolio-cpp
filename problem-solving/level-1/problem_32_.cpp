#include <iostream>

#include <cmath>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Enter number: ";
    cin >> Number;
    return Number;
}

int ReadPower(){
    int m;
    cout << "Enter m: ";
    cin >> m;
    return m;
}

void PowerOf_M(int number, int m) {
    int result = 1;
    for (int i = 1; i <= m; i++) {
        result *= number; // result = result * number;
    }
    cout << "Result: " << result << endl;

}

//* طريقه اخري

void PowerOfM(int number, int m) {
    cout << "Result: " << pow(number, m) << endl;
    
}

//* طريقه اخري


int PowerOf_m(int number, int m) {
    if(m == 0) {

        return 1;
    }

    int P = 1;

    for (int i = 1; i <= m; i++) {
        P = P * number;
    }
    return P;

}

int main() {

    int number = ReadNumber();
    int m = ReadPower();

    PowerOf_M(number, m);
    //****************** */
    PowerOfM(number, m);
    //****************** */
    // PowerOf_m(ReadPower(), ReadNumber());
    cout << "Result: " << PowerOf_m(ReadPower(), ReadNumber()) << endl;    


    // //!_______________________________________________

    //بالطريقه العاديه

    // int num, m;
    // int result = 1;
    // cout << "Enter num: ";
    // cin >> num;

    // cout << "Enter m: ";
    // cin >> m;   

    // // cout << "Result: " << pow(num, m) << endl; 
    // for (int i = 1; i <= m; i++) {
    //     result *= num; // result = result * num;
    // }
    // cout << "Result: " << result  << endl;


}