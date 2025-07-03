#include "Flight.h"                                                             
#include <ctime>

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

Flight::Flight(const string& fnum, int price, float duration, const string& src, const string& dest, Pilot* pilot, pair<AirHostess*, AirHostess*> hostesses, const string& pass)
    : flight_number(fnum), price(price), flight_duration(duration), src(src), dest(dest), pilot(pilot), hostesses(hostesses), password(pass) {}

bool Flight::book(Passenger &passenger) {
    if (passengers.size() >= MAX_SEATS) {
        cout << "Flight full. Booking failed.\n";
        return false;
    }
    passengers.push_back(&passenger);
    cout << "Booking successful for " << passenger.getName() << "\n";
    return true;
}

// ...
void Flight::cancel(Passenger &passenger) {
    for (auto it = passengers.begin(); it != passengers.end(); ++it) {
        if ((*it)->getPassport() == passenger.getPassport()) {
            passengers.erase(it);
            cout << "Cancelled ticket for " << passenger.getName() << "\n";
            return;
        }
    }
    cout << "No booking found for passport: " << passenger.getPassport() << "\n";
}


void Flight::create_ticket(const Passenger &passenger) {
    ofstream ticket("ticket.txt");
    ticket << "\n\n\t|----------------- Ticket ----------------|\n";
    ticket << "\t| Passenger Name: " << setw(20) << passenger.getName() << "    |\n";
    ticket << "\t| Passport No   : " << setw(20) << passenger.getPassport() << "    |\n";
    ticket << "\t| Flight Number : " << setw(20) << flight_number << "    |\n";
    ticket << "\t| From          : " << setw(20) << src << "    |\n";
    ticket << "\t| To            : " << setw(20) << dest << "    |\n";
    ticket << "\t| Price         : " << setw(20) << price << "    |\n";
    ticket << "\t|-----------------------------------------|\n";
    ticket.close();
    cout << "Ticket generated for " << passenger.getName() << "\n";
}

void Flight::show_crew_details() const {
    cout << "--- Crew Details for Flight: " << flight_number << " ---\n";
    if (pilot) pilot->show_details();
    if (hostesses.first) hostesses.first->show_details();
    if (hostesses.second) hostesses.second->show_details();
    cout << "--------------------------------------------\n";
}

bool Flight::checkPass(const string& str) const {
    return str == password;
}
