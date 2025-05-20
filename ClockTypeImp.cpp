#include <iostream>
#include "ClockType.h"

using namespace std;

std::ostream& operator<<(std::ostream& os, const ClockType& theClock){
    theClock.printTime();
    return os;
}

istream& operator>>(istream& is, ClockType& theClock){
    cout << "Second: ";
    cin >> theClock.sec;

    cout << "Minute: ";
    cin >> theClock.min;

    cout << "Hour: ";
    cin >> theClock.hr;

    return is;
}

void ClockType::printTime() const{
    if (hr <= 9)
        cout << "0";
    cout << hr << ":";

    if (min <= 9)
        cout << "0";
    cout << min << ":";

    if (sec <= 9)
        cout << "0";
    cout << sec;
}

void ClockType::setTime(int hour, int minute, int second){
    if (hour >= 24)
        hr = 0;
    else
        hr = hour;

    if (minute >= 60)
        min = 0;
    else
        min = minute;

    if (second >= 60)
        sec = 0;
    else
        sec = second;
}

void ClockType::getTime(int& hour, int& minute, int& second){
    hour = hr;
    minute = min;
    second = sec;
}

ClockType ClockType::operator++(int){
    sec++;

    if (sec > 59){
        sec = 0;
        min++;

        if (min > 59){
            min = 0;
            hr++;

            if (hr > 23)
                hr = 0;
        }
    }

    return *this;
}

bool ClockType::operator==(const ClockType& otherClock){
    return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}

ClockType::ClockType(int hour, int minute, int second){
    setTime(hour, minute, second);
}