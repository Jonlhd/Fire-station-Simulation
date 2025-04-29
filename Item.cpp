#include "Item.h"

// Constructor
Item::Item(int id, const string& type, int availableQuantity, const string& location)
    : id(id), type(type), availableQuantity(availableQuantity), location(location) {}

// Getters
int Item::getId() const { return id; }
string Item::getType() const { return type; }
int Item::getAvailableQuantity() const { return availableQuantity; }
string Item::getLocation() const { return location; }

// Reduce quantity (O(1))
void Item::reduceQuantity(int amount) {
    if (availableQuantity >= amount)
        availableQuantity -= amount;
}

// Increase quantity (O(1))
void Item::increaseQuantity(int amount) {
    availableQuantity += amount;
}
