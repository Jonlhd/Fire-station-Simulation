#include "Schedule.h"

// Assign a personnel to a specific day (O(log n))
void Schedule::assignPersonnel(const string& day, int personnelId) {
    dayToPersonnel[day].insert(personnelId);
}

// Display the complete schedule (O(n))
void Schedule::displaySchedule() const {
    if (dayToPersonnel.empty()) {
        cout << "No personnel scheduled yet.\n";
        return;
    }
    for (const auto& entry : dayToPersonnel) {
        cout << "Day: " << entry.first << " -> Personnel IDs: ";
        for (int id : entry.second) {
            cout << id << " ";
        }
        cout << "\n";
    }
}
