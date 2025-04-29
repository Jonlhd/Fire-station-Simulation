#ifndef SCHEDULE_H
#define SCHEDULE_H

#include <map>
#include <set>
#include <string>
#include <iostream>
using namespace std;

class Schedule {
private:
    map<string, set<int>> dayToPersonnel; // O(log n) insert and search

public:
    void assignPersonnel(const string& day, int personnelId); // O(log n)
    void displaySchedule() const; // O(n)
};

#endif // SCHEDULE_H

