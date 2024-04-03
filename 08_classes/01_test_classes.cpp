#include <iostream>
using namespace std;

class Bank_Account {

public:
  string name;
  double account{0};

  void add_name(string name) { this->name = name; }

  string get_name() { return this->name; }

  void add(double current) { this->account += current; }

  void withdraw(double current) {
    if (account < 0) {
      cout << "Not enouth money. You have only " << account << endl;
    }
    this->account -= current;
  }

  double get_balance() { return this->account; }
};

int main() {
  Bank_Account *account1 = new Bank_Account;

  account1->add_name("Igor");
  cout << "Account1: name: " << account1->get_name()
       << ", balance: " << account1->get_balance() << endl;

  account1->add(100.00);
  cout << "Account1: name: " << account1->get_name()
       << ", balance: " << account1->get_balance() << endl;

  account1->withdraw(22.22);
  cout << "Account1: name: " << account1->get_name()
       << ", balance: " << account1->get_balance() << endl;
}
