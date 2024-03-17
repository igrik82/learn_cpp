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
    case 'm': {
      if (!array.size()) {
        cout << "[] - the list is empty" << endl;
        continue;
      }
      cout << "The mean is: " << fixed << setprecision(2);
      int temp{0};
      for (auto num : array) {
        temp += num;
      };

      // Check if the division is an integer
      if (temp % array.size() == 0) {
        cout << temp / array.size() << endl;
      } else {
        cout << static_cast<double>(temp) / array.size() << endl;
      }
    } break;

    case 'S':
    case 's':
      if (array.size() != 0) {
        cout << "The smallest number is: " << *minmax.first << endl;
      } else {
        cout << "[] - the list is empty" << endl;
      }
      break;

    case 'L':
    case 'l':
      if (array.size() != 0) {
        int largest = array.at(0);
        for (auto num : array) {
          if (num > largest) {
            largest = num;
          }
        }
        cout << "The largest number is: " << largest << endl;
      } else {
        cout << "[] - the list is empty" << endl;
      }
      break;
    }
  }
  return 0;
}
