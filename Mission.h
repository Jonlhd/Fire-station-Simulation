#ifndef MISSION_H
#define MISSION_H

#include <string>
#include <vector>
using namespace std;

class Mission {
private:
    string type; // Fire, Rescue, Aid
    string level; // Low, Medium, High
    vector<int> assignedPersonnelIds;
    vector<int> assignedVehicleIds;
    vector<int> assignedItemIds;

public:
    Mission(const string& type, const string& level);

    void assignPersonnel(int id); // O(1)
    void assignVehicle(int id);   // O(1)
    void assignItem(int id);      // O(1)

    void displayMission() const;  // O(n)
};

#endif // MISSION_H

