#ifndef RECORD_H
#define RECORD_H

#include <string>
#include <vector>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

class PersonnelRecord {
public:
    Date missionDate;
    int hoursWorked;
    vector<string> achievements;

    PersonnelRecord(const Date& date, int hoursWorked, const vector<string>& achievements);
};

#endif // RECORD_H
