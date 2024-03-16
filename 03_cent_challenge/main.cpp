#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  cout << "Enter an amount in cents: ";
  int cents{};
  cin >> cents;

  int dollars{};
  int quarters{};
  int dimes{};
  int nickels{};
  int pennies{};

  dollars = cents / 100;
  quarters = cents % 100 / 25;
  dimes = cents % 100 % 25 / 10;
  nickels = cents % 100 % 25 % 10 / 5;
  pennies = cents % 100 % 25 % 10 % 5;

  cout << "You can provide this change as follows:" << endl;
  cout << "dollars: " << dollars << endl;
  cout << "quarters: " << quarters << endl;
  cout << "dimes: " << dimes << endl;
  cout << "nickels: " << nickels << endl;
  cout << "pennies: " << pennies << endl;

  return 0;
}
