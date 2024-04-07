#pragma once

#include <string>

class DelegatedConstructor {
private:
  std::string name;
  double balance;

public:
  void set_name(std::string name_val);
  void set_balance(double balance_val);
  std::string get_name();
  double get_balance();
  double put_deposit(double current);
  double withdraw(double current);

  // Constructor
  DelegatedConstructor(std::string name_val, double balance_val) {
    set_name(name_val);
    set_balance(balance_val);
  }
  DelegatedConstructor(std::string name_val)
      : DelegatedConstructor{name_val, 0} {}

  DelegatedConstructor(double balance_val)
      : DelegatedConstructor{"", balance_val} {}

  DelegatedConstructor() : DelegatedConstructor{"", 0} {}

  // Destructor
  ~DelegatedConstructor() {}
};
