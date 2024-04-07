#include "delegated_constructor.h"
#include <string>

void DelegatedConstructor::set_name(std::string name_val) {
  if (name_val.length() > 0) {
    name = name_val;
  } else {
    name = "Default";
  }
}

void DelegatedConstructor::set_balance(double balance_val) {
  if (balance_val > 0 and balance_val < 1000) {
    balance = balance_val;
  } else {
    balance = 0;
  }
}

std::string DelegatedConstructor::get_name() { return name; }

double DelegatedConstructor::get_balance() { return balance; }
