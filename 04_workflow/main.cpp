#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> array;
  char choice = ' ';

  for (;;) {
    cout << "\nMENU" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;

    cout << "\nEnter your choice: ";
    cin.clear();
    cin >> choice;

    if (choice == 'Q' || choice == 'q') {
      break;
    }

    switch (choice) {
    case 'P':
    case 'p': {
      if (!array.size()) {
        cout << "[] - the list is empty" << endl;
        continue;
      } else {
        cout << "[ ";

        for (auto number : array) {
          cout << number << " ";
        }

        cout << "]" << endl;
      }
    } break;

    case 'A':
    case 'a': {
      int number{};
      cout << "Enter an integer to add to the list: ";
      cin >> number;
      array.push_back(number);
      cout << array.back() << " added";
    } break;

    case 'M':
    case 'm':
      cout << "M - Display mean of the numbers" << endl;
      break;

    case 'S':
    case 's':
      cout << "S - Display the smallest number" << endl;
      break;

    case 'L':
    case 'l':
      cout << "L - Display the largest number" << endl;
      break;
    }
  }
  return 0;
}
