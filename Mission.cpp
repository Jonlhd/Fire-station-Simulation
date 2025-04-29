#include "Mission.h"
#include <iostream>

// Constructor
Mission::Mission(const string& type, const string& level)
    : type(type), level(level) {}

// Assign personnel ID (O(1))
void Mission::assignPersonnel(int id) {
    assignedPersonnelIds.push_back(id);
}

// Assign vehicle ID (O(1))
void Mission::assignVehicle(int id) {
    assignedVehicleIds.push_back(id);
}

// Assign item ID (O(1))
void Mission::assignItem(int id) {
    assignedItemIds.push_back(id);
}

// Display mission info (O(n))
void Mission::displayMission() const {
    cout << "Mission Type: " << type << ", Level: " << level << "\n";
    cout << "Personnel IDs: ";
    for (int id : assignedPersonnelIds) cout << id << " ";
    cout << "\nVehicles IDs: ";
    for (int id : assignedVehicleIds) cout << id << " ";
    cout << "\nItems IDs: ";
    for (int id : assignedItemIds) cout << id << " ";
    cout << "\n";
}
