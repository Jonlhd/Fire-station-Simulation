#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <string>
#include <forward_list>
#include <vector>
#include "Record.h"

using namespace std;

class Personnel {
private:
    int id;
    string name;
    string role;

public:
    forward_list<PersonnelRecord> recordHistory; // O(1) insertion at front

    Personnel(int id, const string& name, const string& role);
    Personnel() = default;

    int getId() const;
    string getName() const;
    string getRole() const;

    void addRecord(const PersonnelRecord& record); // O(1)
    void displayRecords() const; // O(n)
};

#endif // PERSONNEL_H

