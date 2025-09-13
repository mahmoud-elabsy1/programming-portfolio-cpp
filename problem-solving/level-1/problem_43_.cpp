#include <iostream>
#include <cmath>
using namespace std;

struct strTaskDuration {
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds) {
    strTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;

    int Remainder = 0;
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);//* floor > عشان يطلع من غير كسور
    Remainder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;
    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration) {
    
    cout << "Task Duration Details:" << endl;
    cout << "Days: " << TaskDuration.NumberOfDays << endl;
    cout << "Hours: " << TaskDuration.NumberOfHours << endl;
    cout << "Minutes: " << TaskDuration.NumberOfMinutes << endl;
    cout << "Seconds: " << TaskDuration.NumberOfSeconds << endl;
}

// double MyDays(double total_seconds) {

// int days, hours, minutes, seconds;
    
// days = total_seconds / (24 * 60 * 60);
// cout << "days: " << days << endl;

// total_seconds = fmod(total_seconds , (24 * 60 * 60));
// hours = total_seconds / (60 * 60) ;
// cout << "hours: " << hours << endl;

// total_seconds = fmod(total_seconds , (60 * 60));
// minutes = total_seconds / 60;
// cout << "minutes: " << minutes << endl;

// seconds = fmod(total_seconds , 60);
// cout << "seconds: " << seconds << endl;


//     // return total_seconds / (24 * 60 * 60);
// }


int main(){

int TotalSeconds = ReadPositiveNumber("Please enter the number of total seconds: ");
PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));




}