#pragma once
#include <string>
using namespace std;

class Passenger {
    static int count;
    string name, email, phone_no, gender, passport_no;
public:
    Passenger(const string& name, const string& email, const string& phone_no, const string& gender, const string& passport_no);
    static int get_total_passengers();

    // Accessor methods
    const string& getName() const { return name; }
    const string& getEmail() const { return email; }
    const string& getPhone() const { return phone_no; }
    const string& getGender() const { return gender; }
    const string& getPassport() const { return passport_no; }
};
