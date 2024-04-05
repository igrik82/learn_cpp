#include "01_separate_test_classes.h"
#include <iostream>
using namespace std;

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

  account1->withdraw(22.22);
  cout << "Account1: name: " << account1->get_name()
       << ", balance: " << account1->get_balance() << endl;
}
