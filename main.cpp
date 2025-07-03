#include "Flight.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    Pilot *p1 = new Pilot("John", 1, "P123");
    AirHostess *ah1 = new AirHostess("Emily", 2, "Morning");
    AirHostess *ah2 = new AirHostess("Sophie", 3, "Evening");

    Flight flight("F001", 3000, 3.5, "Delhi", "London", p1, {ah1, ah2}, "admin123");

    while (true) {
        cout << "\nChoose an operation:\n";
        cout << "1. Book Ticket\n2. Cancel Ticket\n3. View Crew Details\n4. Edit Crew Member\n0. Exit\n>> ";
        int op; cin >> op;
        if (op == 0) break;

        if (op == 1 || op == 2) {
            string name, email, phone, gender, passport;
            cout << "Enter name: "; cin.ignore(); getline(cin, name);
            cout << "Enter email: "; getline(cin, email);
            cout << "Enter phone: "; getline(cin, phone);
            cout << "Enter gender: "; getline(cin, gender);
            cout << "Enter passport: "; getline(cin, passport);
            Passenger p(name, email, phone, gender, passport);
            if (op == 1) {
                if (flight.book(p)) flight.create_ticket(p);
            } else {
                flight.cancel(p);
            }
        } else if (op == 3) {
            flight.show_crew_details();
        } else if (op == 4) {
            string pwd;
            cout << "Enter admin password: "; cin >> pwd;
            if (!flight.checkPass(pwd)) {
                cout << "Incorrect password.\n";
                continue;
            }
            int choice;
            cout << "Edit (0: Pilot, 1: Hostess1, 2: Hostess2): ";
            cin >> choice;
            string newname; int newid;
            cout << "Enter new name: "; cin.ignore(); getline(cin, newname);
            cout << "Enter new ID: "; cin >> newid;
            if (choice == 0) flight.pilot->update(newname, newid);
            else if (choice == 1) flight.hostesses.first->update(newname, newid);
            else if (choice == 2) flight.hostesses.second->update(newname, newid);
        }
    }

    delete p1;
    delete ah1;
    delete ah2;
    return 0;
}