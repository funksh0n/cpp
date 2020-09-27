#include <iostream>
using namespace std;

enum dayOfWeek {
    MONDAY = 3,
    TUESDAY,
    WEDNESDAY =7,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

string getDay(dayOfWeek);
string getDay(dayOfWeek d)
{
    switch (d) {
    case MONDAY:
        return "Monday";
    case TUESDAY:
        return "Tuesday";
    case WEDNESDAY:
        return "Wednesday";
    case THURSDAY:
        return "Thursday";
    case FRIDAY:
        return "Friday";
    case SATURDAY:
        return "Saturday";
    case SUNDAY:
        return "Sunday";
    default:
        return "Whoops";
    }
}

int
main()
{
    dayOfWeek d = MONDAY;
    cout << d << endl;
    cout << dayOfWeek(TUESDAY) << endl;
    cout << dayOfWeek(WEDNESDAY) << endl;
    cout << dayOfWeek(THURSDAY) << endl;

    cout << getDay(SATURDAY) << endl;
    cout << getDay(dayOfWeek(0)) << endl;
    cout << getDay(dayOfWeek(99)) << endl;
}
