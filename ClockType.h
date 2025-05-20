#ifndef CLOCK_TYPE_H
#define CLOCK_TYPE_H

class ClockType {
    friend std::ostream& operator<<(std::ostream&, const ClockType&);
    friend std::istream& operator>>(std::istream&, ClockType&);

public:
        // ***Operations***
    void setTime(int, int, int);
    // Set the time to user input

    void getTime(int&, int&, int&);
    // Get the time to variable

    void printTime() const;
    // Printing time to exist data


        // ***Usable operators***
    ClockType operator++(int);
    // Increment second

    bool operator==(const ClockType& otherClock);
    // Is equal


        // ***Constructor(Short Cut)***
    ClockType(int hour=0, int minute=0, int second=0);

private:
    int hr;
    int min;
    int sec;
};

#endif