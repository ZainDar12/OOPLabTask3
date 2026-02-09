#include <iostream>
#include <string>
using namespace std;
class WeekDays{
private:
    string day[7];
    int CurrentDay;
public:
    WeekDays(){
        day[0] = "Monday";
        day[1] = "Tuesday";
        day[2] = "Wednesday";
        day[3] = "Thursday";
        day[4] = "Friday";
        day[5] = "Saturday";
        day[6] = "Sunday";
        CurrentDay = 0;
    }
    WeekDays(int d) : WeekDays(){
        CurrentDay = d % 7;
    }
    string getCurrentDay(){
        return day[CurrentDay];
    }
    string GetNextday(){
        CurrentDay = (CurrentDay + 1) % 7;
        return day[CurrentDay];
    }
    string GetPreviousDay(){
        CurrentDay = (CurrentDay - 1 + 7) % 7;
        return day[CurrentDay];
    }
    void NthDay(int n){
        CurrentDay = (CurrentDay + n) % 7;
        cout<<"The day is: "<< day[CurrentDay]<<endl;
    }
};
