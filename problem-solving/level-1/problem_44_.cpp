#include <iostream>
using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon, Tue, Wed,Thu, Fri };

int ReadNumberInRange(string Message, int from, int to) {
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number < from || Number > to);

    return Number;
}

enDayOfWeek ReadDayOfWeek() {
    return (enDayOfWeek)ReadNumberInRange("Please enter the day number (1-7): ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek day) {
    switch (day) {
        case enDayOfWeek::Sat:
            return "Saturday";
        case enDayOfWeek::Sun:
            return "Sunday";
        case enDayOfWeek::Mon:
            return "Monday";    
        case enDayOfWeek::Tue:
            return "Tuesday";
        case enDayOfWeek::Wed:
            return "Wednesday";
        case enDayOfWeek::Thu:
            return "Thursday";
        case enDayOfWeek::Fri:
            return "Friday";
        default:
            return "Invalid day number!";
            
    }
}

int main() {

    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

    //*********************************** */
    // int day;
    // cout << "Enter the day number (1-7): ";
    // cin >> day;

    // switch(day){
    //     case 1:
    //         day = 1; // Sunday
    //         break;
    //     case 2:
    //         day = 2; // Monday
    //         break;
    //     case 3:
    //         day = 3; // Tuesday
    //         break;
    //     case 4:
    //         day = 4; // Wednesday
    //         break;
    //     case 5:
    //         day = 5; // Thursday
    //         break;
    //     case 6:
    //         day = 6; // Friday
    //         break;
    //     case 7:
    //         day = 7; // Saturday
    //         break;
    //     default:
    //         cout << "Invalid day number!" << endl; // Handle invalid input
    //         return 0; // Exit the program if input is invalid
    // }


    //حل اخر ب if 
    // if (day == 1) {
    //     cout << "Sunday" << endl;
    // } 
    // else if (day == 2) {
    //     cout << "Monday" << endl;
    // } 
    // else if (day == 3) {
    //     cout << "Tuesday" << endl;
    // } 
    // else if (day == 4) {
    //     cout << "Wednesday" << endl;
    // } 
    // else if (day == 5) {
    //     cout << "Thursday" << endl;
    // } 
    // else if (day == 6) {
    //     cout << "Friday" << endl;
    // } 
    // else if (day == 7) {
    //     cout << "Saturday" << endl;
    // } 
    // else {
    //     cout << "Invalid day number!" << endl; // Handle invalid input
    // }


    return 0;
}