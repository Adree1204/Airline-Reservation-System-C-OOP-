#pragma once
#include "Employee.h"

class AirHostess : public Employee {
    string shift;
public:
    AirHostess() = default;
    AirHostess(const string& name, int id, const string& shift) : Employee(name, id), shift(shift) {}
    void show_details() const override {
        cout << "Air Hostess Name: " << name << ", ID: " << employee_id << ", Shift: " << shift << endl;
    }
};