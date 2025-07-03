#pragma once
#include "Employee.h"

class Pilot : public Employee {
    string license_no;
public:
    Pilot() = default;
    Pilot(const string& name, int id, const string& license_no) : Employee(name, id), license_no(license_no) {}
    void show_details() const override {
        cout << "Pilot Name: " << name << ", ID: " << employee_id << ", License: " << license_no << endl;
    }
};