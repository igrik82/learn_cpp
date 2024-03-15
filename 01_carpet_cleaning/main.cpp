#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {

  const double price_small_room = 25;
  const double price_large_room = 35;
  const double tax = 0.06;
  const unsigned short estimate_expiry = 30;

  cout << "Franks Carpet Cleaning Service" << endl;
  cout << "------------------------------" << endl;

  cout << "Number of small rooms to clean: ";
  unsigned short small_rooms = 0;
  cin >> small_rooms;

  cout << "Number of large rooms to clean: ";
  unsigned short large_rooms = 0;
  cin >> large_rooms;

  cout << "Price per small room: $" << price_small_room << endl;
  cout << "Price per large room: $" << price_large_room << endl;
  cout << "Cost: $"
       << (small_rooms * price_small_room) + (large_rooms * price_large_room)
       << endl;
  cout << "Tax: $"
       << ((small_rooms * price_small_room) +
           (large_rooms * price_large_room)) *
              tax
       << endl;
  cout << "======================================================" << endl;
  cout << "Total estimate: $"
       << (small_rooms * price_small_room) + (large_rooms * price_large_room) +
              ((small_rooms * price_small_room) +
               (large_rooms * price_large_room)) *
                  tax
       << endl;
  cout << "This estimate is valid for " << estimate_expiry << " days." << endl;

  return 0;
}
