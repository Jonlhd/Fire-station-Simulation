#include "Vehicle.h"

// Constructor
Vehicle::Vehicle(int id, const string& type, const string& status)
    : id(id), type(type), status(status) {}

// Getters
int Vehicle::getId() const { return id; }
string Vehicle::getType() const { return type; }
string Vehicle::getStatus() const { return status; }

// Set new status (O(1))
void Vehicle::setStatus(const string& newStatus) {
    status = newStatus;
}
