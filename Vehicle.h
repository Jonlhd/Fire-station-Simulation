#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
private:
    int id;
    string type;
    string status; // Available, Busy, Maintenance

public:
    Vehicle(int id, const string& type, const string& status);
    Vehicle() = default;

    int getId() const;
    string getType() const;
    string getStatus() const;

    void setStatus(const string& newStatus); // O(1)
};

#endif // VEHICLE_H

