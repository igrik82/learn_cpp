#include "01_separate_test_classes.h"
#include <iostream>
using namespace std;

void Bank_Account::add_name(string name) { this->name = name; }

string Bank_Account::get_name() { return this->name; }

void Bank_Account::add(double current) { this->account += current; }

void Bank_Account::withdraw(double current) {
  if (account < 0) {
    cout << "Not enouth money. You have only " << account << endl;
  }
  this->account -= current;
}

double Bank_Account::get_balance() { return this->account; }
