#include <iostream>
#include <map>
#include <vector>
#include "Personnel.h"
#include "Schedule.h"
#include "Vehicle.h"
#include "Item.h"
#include "Mission.h"
#include "Record.h"

using namespace std;

// Master data
map<int, Personnel> personnelDirectory;
map<int, Vehicle> vehicleDirectory;
map<int, Item> itemDirectory;
Schedule schedule;
vector<Mission> missions;

// Function to initialize data
void initializeData() {
    // Personnels
    personnelDirectory[1] = Personnel(1, "Elie Beaino", "General Chief - Driver");
    personnelDirectory[2] = Personnel(2, "Johnny Lahoud", "Volunteer");
    personnelDirectory[3] = Personnel(3, "Anthony Karout", "Volunteer");
    personnelDirectory[4] = Personnel(4, "Anthony Khalil", "Volunteer");
    personnelDirectory[5] = Personnel(5, "Anthony Lahoud", "Team Chief");
    personnelDirectory[6] = Personnel(6, "Georges Chammai", "Volunteer");
    personnelDirectory[7] = Personnel(7, "Claudine Azar", "Volunteer");
    personnelDirectory[8] = Personnel(8, "Cyril Farah", "Volunteer");
    personnelDirectory[9] = Personnel(9, "David Mallo", "Volunteer");
    personnelDirectory[10] = Personnel(10, "Elio Kayem", "Volunteer");
    personnelDirectory[11] = Personnel(11, "Gaby Bou Rjeily", "Officer - Driver");
    personnelDirectory[12] = Personnel(12, "Ghady Daoud", "Team Chief - Driver");
    personnelDirectory[13] = Personnel(13, "Joe Khalil", "Volunteer");
    personnelDirectory[14] = Personnel(14, "John Fahed", "Volunteer");
    personnelDirectory[15] = Personnel(15, "Karen El Khoury", "Volunteer");
    personnelDirectory[16] = Personnel(16, "Khalil El Helou", "Team Chief - Driver");
    personnelDirectory[17] = Personnel(17, "Mario Khalil", "Team Chief - Driver");
    personnelDirectory[18] = Personnel(18, "Martin", "Volunteer");
    personnelDirectory[19] = Personnel(19, "Peter Baroud", "Volunteer");
    personnelDirectory[20] = Personnel(20, "Abdo El Khoury", "Officer - Driver");
    personnelDirectory[21] = Personnel(21, "Charbel Fahme", "Volunteer");
    personnelDirectory[22] = Personnel(22, "Charbel Hachem", "Volunteer");
    personnelDirectory[23] = Personnel(23, "Christian Sleiman", "Volunteer");
    personnelDirectory[24] = Personnel(24, "Joseph El Sayegh", "Team Chief - Driver");
    personnelDirectory[25] = Personnel(25, "Zakhia Ghosban", "Volunteer - Driver");
    personnelDirectory[26] = Personnel(26, "Joe Yazbeck", "Volunteer");
    personnelDirectory[27] = Personnel(27, "Joya", "Volunteer");
    personnelDirectory[28] = Personnel(28, "Elie Rahme", "Volunteer");
    personnelDirectory[29] = Personnel(29, "Beryl", "Volunteer");
    personnelDirectory[30] = Personnel(30, "Pia Khoury", "Volunteer");

    // Vehicles
    vehicleDirectory[1] = Vehicle(1, "Fire Truck", "Available");
    vehicleDirectory[2] = Vehicle(2, "Ambulance", "Maintenance");
    vehicleDirectory[3] = Vehicle(3, "Defender", "Available");
    vehicleDirectory[4] = Vehicle(4, "Cherokee", "Available");
    vehicleDirectory[5] = Vehicle(5, "Pick Up", "Maintenance");

    // Items 
    itemDirectory[1] = Item(1, "Rescue Rope", 10, "Fire Truck");
    itemDirectory[2] = Item(2, "First Aid Kit", 10, "Ambulance");
    itemDirectory[3] = Item(3, "Fire Extinguisher CO2", 5, "Cherokee");
    itemDirectory[4] = Item(4, "Oxygen Tank", 6, "Ambulance");
    itemDirectory[5] = Item(5, "Helmet", 15, "Storage Room 1");
    itemDirectory[6] = Item(6, "Protective Gloves", 20, "Storage Room 1");
    itemDirectory[7] = Item(7, "Chainsaw", 3, "Pick Up");
    itemDirectory[8] = Item(8, "Ladder (Extension)", 5, "Fire Truck");
    itemDirectory[9] = Item(9, "Crowbar", 8, "Defender");
    itemDirectory[10] = Item(10, "Jack (Manual)", 4, "Cherokee");
    itemDirectory[11] = Item(11, "Rescue Harness", 10, "Fire Truck");
    itemDirectory[12] = Item(12, "Shovel", 6, "Pick Up");
    itemDirectory[13] = Item(13, "Winch Cable", 2, "Defender");
    itemDirectory[14] = Item(14, "Flashlight", 10, "Fire Truck");
    itemDirectory[15] = Item(15, "Traffic Cones", 20, "Pick Up");
    itemDirectory[16] = Item(16, "Fire Hose", 10, "Fire Truck");
    itemDirectory[17] = Item(17, "Nozzle for Hose", 10, "Fire Truck");
    itemDirectory[18] = Item(18, "Fire Extinguisher CO2", 5, "Cherokee");
    itemDirectory[19] = Item(19, "Fire Extinguisher Foam", 5, "Ambulance");
    itemDirectory[20] = Item(20, "Fire Blanket", 8, "Storage Room 2");
    itemDirectory[21] = Item(21, "Water Pump", 2, "Pick Up");
    itemDirectory[22] = Item(22, "Axe (Firefighting)", 6, "Fire Truck");
    itemDirectory[23] = Item(23, "Thermal Imaging Camera", 2, "Fire Truck");
    itemDirectory[24] = Item(24, "Portable Generator", 3, "Pick Up");
    itemDirectory[25] = Item(25, "Spare Breathing Apparatus", 6, "Fire Truck");
    itemDirectory[26] = Item(26, "Fire Boots", 12, "Storage Room 2");
    itemDirectory[27] = Item(27, "Gas Detector", 2, "Cherokee");
    itemDirectory[28] = Item(28, "Hose Reel", 4, "Fire Truck");
    itemDirectory[29] = Item(29, "Fireman's Jacket", 12, "Storage Room 2");
    itemDirectory[30] = Item(30, "Ventilation Fan", 3, "Pick Up");
    itemDirectory[31] = Item(31, "First Aid Kit", 10, "Ambulance");
    itemDirectory[32] = Item(32, "Spine Board", 4, "Ambulance");
    itemDirectory[33] = Item(33, "Neck Immobilizer", 8, "Ambulance");
    itemDirectory[34] = Item(34, "Oxygen Tank", 6, "Ambulance");
    itemDirectory[35] = Item(35, "CPR Mask", 10, "Ambulance");
    itemDirectory[36] = Item(36, "Blood Pressure Monitor", 3, "Ambulance");
    itemDirectory[37] = Item(37, "Defibrillator (AED)", 2, "Ambulance");
    itemDirectory[38] = Item(38, "Emergency Blanket", 12, "Storage Room 1");
    itemDirectory[39] = Item(39, "Trauma Shears", 10, "Ambulance");
    itemDirectory[40] = Item(40, "Medical Gloves", 100, "Storage Room 1");
    itemDirectory[41] = Item(41, "Sterile Gauze", 200, "Storage Room 1");
    itemDirectory[42] = Item(42, "Burn Kit", 6, "Ambulance");
    itemDirectory[43] = Item(43, "Bandages (Large)", 100, "Storage Room 1");
    itemDirectory[44] = Item(44, "Splint (Foldable)", 8, "Ambulance");
    itemDirectory[45] = Item(45, "Eye Wash Kit", 4, "Ambulance");
    itemDirectory[46] = Item(46, "Pulse Oximeter", 3, "Ambulance");
    itemDirectory[47] = Item(47, "Tourniquet", 15, "Ambulance");
    itemDirectory[48] = Item(48, "IV Kit", 10, "Ambulance");
    itemDirectory[49] = Item(49, "Suction Unit", 2, "Ambulance");
    itemDirectory[50] = Item(50, "Emergency Medication Bag", 2, "Ambulance");
    itemDirectory[51] = Item(51, "Brancard (Stretcher)", 2, "Ambulance");
    itemDirectory[52] = Item(52, "Wheelchair", 2, "Ambulance");

}

// Display Menu
void displayMenu() {
    cout << "\n====== Fire Station Management System ======\n";
    cout << "1. Schedule Personnel\n";
    cout << "2. Assign Mission\n";
    cout << "3. Manage Personnel Records\n";
    cout << "4. Display Current Schedule\n";
    cout << "5. Display Missions\n";
    cout << "6. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    initializeData();

    int choice;
    do {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            // Schedule Personnel
            string day;
            int id;
            cout << "Enter the day (e.g., Monday): ";
            cin >> day;
            cout << "Enter Personnel ID to schedule: ";
            cin >> id;
            if (personnelDirectory.find(id) != personnelDirectory.end()) {
                schedule.assignPersonnel(day, id);
                cout << "Personnel scheduled successfully.\n";
            }
            else {
                cout << "Personnel ID not found.\n";
            }
        }
        else if (choice == 2) {
            // Assign Mission
            string type, level;
            cout << "Enter Mission Type (Fire/Rescue/Aid): ";
            cin >> type;
            cout << "Enter Level (Low/Medium/High): ";
            cin >> level;
            Mission mission(type, level);

            int pcount, pid;
            cout << "How many personnel to assign? ";
            cin >> pcount;
            for (int i = 0; i < pcount; ++i) {
                cout << "Enter Personnel ID: ";
                cin >> pid;
                mission.assignPersonnel(pid);
            }

            int vcount, vid;
            cout << "How many vehicles to assign? ";
            cin >> vcount;
            for (int i = 0; i < vcount; ++i) {
                cout << "Enter Vehicle ID: ";
                cin >> vid;
                if (vehicleDirectory[vid].getStatus() == "Available") {
                    mission.assignVehicle(vid);
                }
                else {
                    cout << "Vehicle not available.\n";
                }
            }

            int icount, iid;
            cout << "How many items to assign? ";
            cin >> icount;
            for (int i = 0; i < icount; ++i) {
                cout << "Enter Item ID: ";
                cin >> iid;
                if (itemDirectory.find(iid) != itemDirectory.end()) {
                    mission.assignItem(iid);
                }
                else {
                    cout << "Item not found.\n";
                }
            }

            missions.push_back(mission);
            cout << "Mission assigned successfully.\n";
        }
        else if (choice == 3) {
            // Manage Personnel Records
            int id, hours;
            cout << "Enter Personnel ID: ";
            cin >> id;
            if (personnelDirectory.find(id) != personnelDirectory.end()) {
                Date d;
                cout << "Enter date (day month year): ";
                cin >> d.day >> d.month >> d.year;
                cout << "Enter hours worked: ";
                cin >> hours;
                vector<string> achs;
                int a;
                cout << "How many achievements?: ";
                cin >> a;
                for (int i = 0; i < a; ++i) {
                    string ach;
                    cout << "Enter achievement: ";
                    cin >> ach;
                    achs.push_back(ach);
                }
                PersonnelRecord r(d, hours, achs);
                personnelDirectory[id].addRecord(r);
                cout << "Record added successfully.\n";
            }
            else {
                cout << "Personnel ID not found.\n";
            }
        }
        else if (choice == 4) {
            schedule.displaySchedule();
        }
        else if (choice == 5) {
            if (missions.empty()) {
                cout << "No missions assigned yet.\n";
            }
            else {
                for (const auto& m : missions) {
                    m.displayMission();
                }
            }
        }
        else if (choice == 6) {
            cout << "Exiting...\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
