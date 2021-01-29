#include "Person.h"

std::string Person::get_name() {
    return name;
};

void Person::get_balance() {
    cout << "\nCurrent balance: " << balance << endl;
};

void Person::add_balance(double amount) {
    balance += amount;
    cout << amount << " added." << endl;
};

bool Person::isExpired() {
    return false;
};
