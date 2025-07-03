#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int employee_id;

public:
    Employee() = default;
    Employee(const string& name, int id) : name(name), employee_id(id) {}
    virtual void show_details() const = 0;
    virtual void update(const string& newName, int newID) {
        name = newName;
        employee_id = newID;
    }
    virtual ~Employee() = default;
};