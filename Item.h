#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
private:
    int id;
    string type;
    int availableQuantity;
    string location;

public:
    Item(int id, const string& type, int availableQuantity, const string& location);
    Item() = default;

    int getId() const;
    string getType() const;
    int getAvailableQuantity() const;
    string getLocation() const;

    void reduceQuantity(int amount); // O(1)
    void increaseQuantity(int amount); // O(1)
};

#endif // ITEM_H

