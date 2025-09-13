#include <iostream>
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

strTaskDuration ReadTaskDuration() {
    strTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter the number of days: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter the number of hours: ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter the number of minutes: ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter the number of seconds: ");

    return TaskDuration;
}

int TaskDurationToSeconds(strTaskDuration TaskDuration) {

    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60; 
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main(){

    cout << "Task Duration in Seconds: " << TaskDurationToSeconds(ReadTaskDuration()) << endl;





}