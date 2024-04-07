#include "delegated_constructor.h"
#include <iostream>

int main() {
  DelegatedConstructor user1("Igor", 100);
  DelegatedConstructor user2(50);
  DelegatedConstructor user3("spanch bob", 10000);

  std::cout << "User1: " << user1.get_name() << " " << user1.get_balance()
            << std::endl;
  std::cout << "User2: " << user2.get_name() << " " << user2.get_balance()
            << std::endl;
  std::cout << "User3: " << user3.get_name() << " " << user3.get_balance()
            << std::endl;
}
