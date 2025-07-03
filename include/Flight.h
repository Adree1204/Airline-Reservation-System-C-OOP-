#pragma once
#include <vector>
#include <string>
#include <utility>
#include "Passenger.h"
#include "Pilot.h"
#include "AirHostess.h"

class Flight {
    static constexpr int MAX_SEATS = 50;
    vector<Passenger*> passengers;
    string password;

public:
    Pilot* pilot;
    pair<AirHostess*, AirHostess*> hostesses;
    string src, dest;
    float flight_duration;
    int price;
    string flight_number;

    Flight(const string& fnum, int price, float duration, const string& src, const string& dest, Pilot* pilot, pair<AirHostess*, AirHostess*> hostesses, const string& pass);
    bool book(Passenger &passenger);
    void cancel(Passenger &passenger);
    void create_ticket(const Passenger &passenger);
    void show_crew_details() const;
    bool checkPass(const string& str) const;
};
