#pragma once
#include <string>
using std::string;

class Bank_Account {

  string name;
  double account{0};

public:
  void add_name(string name);
  string get_name();
  void add(double current);
  void withdraw(double current);
  double get_balance();
};
