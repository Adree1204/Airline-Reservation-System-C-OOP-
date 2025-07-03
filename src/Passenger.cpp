#include "Passenger.h"
int Passenger::count = 0;
Passenger::Passenger(const string& name, const string& email, const string& phone_no, const string& gender, const string& passport_no)
    : name(name), email(email), phone_no(phone_no), gender(gender), passport_no(passport_no) {
    count++;
}
int Passenger::get_total_passengers() {
    return count;
}