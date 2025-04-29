#include "Personnel.h"
#include <iostream>

Personnel::Personnel(int id, const string& name, const string& role)
    : id(id), name(name), role(role) {}

int Personnel::getId() const { return id; }
string Personnel::getName() const { return name; }
string Personnel::getRole() const { return role; }

void Personnel::addRecord(const PersonnelRecord& record) {
    recordHistory.push_front(record);
}

void Personnel::displayRecords() const {
    if (recordHistory.empty()) {
        cout << "No records found for " << name << ".\n";
        return;
    }
    cout << "Records for " << name << ":\n";
    for (const auto& rec : recordHistory) {
        cout << "Date: " << rec.missionDate.day << "/" << rec.missionDate.month << "/" << rec.missionDate.year
            << ", Hours: " << rec.hoursWorked << ", Achievements: ";
        for (const auto& ach : rec.achievements) {
            cout << ach << ", ";
        }
        cout << "\n";
    }
}
