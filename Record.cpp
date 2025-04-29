#include "Record.h"

// Constructor
PersonnelRecord::PersonnelRecord(const Date& date, int hoursWorked, const vector<string>& achievements)
    : missionDate(date), hoursWorked(hoursWorked), achievements(achievements) {}
