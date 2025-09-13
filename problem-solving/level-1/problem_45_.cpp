#include <iostream>
using namespace std;

enum enMonthOfYear { Jan = 1, Feb = 2, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

int ReadNumberInRange(string Message, int from, int to) {
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number < from || Number > to);

    return Number;
}

enMonthOfYear ReadDayOfWeek() {
    return (enMonthOfYear)ReadNumberInRange("Please enter a month (1-12): ", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month) {
    switch (Month) {
        case enMonthOfYear::Jan:
            return "January"; 
        case enMonthOfYear::Feb:
            return "February";
        case enMonthOfYear::Mar:
            return "March";
        case enMonthOfYear::Apr:
            return "April";
        case enMonthOfYear::May:
            return "May";
        case enMonthOfYear::Jun:
            return "June";    
        case enMonthOfYear::Jul:
            return "July";
        case enMonthOfYear::Aug:
            return "August";
        case enMonthOfYear::Sep:
            return "September";
        case enMonthOfYear::Oct:
            return "October";
        case enMonthOfYear::Nov:
            return "November";
        case enMonthOfYear::Dec:
            return "December";
        default:
            return "Invalid month number!";
            
    }
}

int main() {

    cout << GetMonthOfYear(ReadDayOfWeek()) << endl;




    // int month;

    // cout << "Enter the month number (1-12): ";
    // cin >> month;

    // switch(month){
    //     case 1:
    //         cout << "January" << endl; // January
    //         break;
    //     case 2:
    //         cout << "February" << endl; // February
    //         break;
    //     case 3:
    //         cout << "March" << endl; // March
    //         break;
    //     case 4:
    //         cout << "April" << endl; // April
    //         break;
    //     case 5:
    //         cout << "May" << endl; // May
    //         break;
    //     case 6: 
    //         cout << "June" << endl; // June
    //         break;
    //     case 7:
    //         cout << "July" << endl; // July
    //         break;
    //     case 8:
    //         cout << "August" << endl; // August
    //         break;
    //     case 9:
    //         cout << "September" << endl; // September
    //         break;
    //     case 10:    
    //         cout << "October" << endl; // October
    //         break;
    //     case 11:
    //         cout << "November" << endl; // November
    //         break;
    //     case 12:
    //         cout << "December" << endl; // December
    //         break;
    //     default:
    //         cout << "Invalid month number!" << endl; // Handle invalid input
    //         return 0; // Exit the program if input is invalid
    // }




//***************************************** */


    // if (month == 1) {
    //     cout << "January" << endl;
    // } 
    // else if (month == 2) {
    //     cout << "February" << endl;
    // } 
    // else if (month == 3) {
    //     cout << "March" << endl;
    // } 
    // else if (month == 4) {
    //     cout << "April" << endl;
    // } 
    // else if (month == 5) {
    //     cout << "May" << endl;
    // } 
    // else if (month == 6) {
    //     cout << "June" << endl;
    // } 
    // else if (month == 7) {
    //     cout << "July" << endl;
    // } 
    // else if (month == 8) {
    //     cout << "August" << endl;
    // } 
    // else if (month == 9) {
    //     cout << "September" << endl;
    // } 
    // else if (month == 10) {
    //     cout << "October" << endl;
    // } 
    // else if (month == 11) {
    //     cout << "November" << endl;
    // } 
    // else if (month == 12) {
    //     cout << "December" << endl;
    // } 
    // else {
    //     cout << "Invalid month number!" << endl; // Handle invalid input
    // }


    return 0;
}