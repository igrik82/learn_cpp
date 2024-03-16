#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> vector1;
  vector<int> vector2;
  int input_value{0};

  cout << "Enter two numbers in vector1: ";
  cin >> input_value;
  vector1.push_back(input_value);
  cin >> input_value;
  vector1.push_back(input_value);

  cout << "There are " << vector1.size()
       << " elements in vector1: " << vector1.at(0) << " " << vector1.at(1)
       << endl;

  cout << "Enter two numbers in vector2: ";
  cin >> input_value;
  vector2.push_back(input_value);
  cin >> input_value;
  vector2.push_back(input_value);

  cout << "There are " << vector2.size()
       << " elements in vector2: " << vector2.at(0) << " " << vector2.at(1)
       << endl;

  vector<vector<int>> vector_2d{0};
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout << "There are " << vector_2d.at(0).size() + vector_2d.at(1).size()
       << " elements in vector2d: " << vector_2d.at(0).at(0) << " "
       << vector_2d.at(0).at(1) << " " << vector_2d.at(1).at(0) << " "
       << vector_2d.at(1).at(1) << endl;

  cout << "Change vector1 element 0 to 1000: ";
  cin >> input_value;
  vector1.at(0) = input_value;
  cout << "There are " << vector_2d.at(0).size() + vector_2d.at(1).size()
       << " elements in vector2d: " << vector_2d.at(0).at(0) << " "
       << vector_2d.at(0).at(1) << " " << vector_2d.at(1).at(0) << " "
       << vector_2d.at(1).at(1) << endl;

  cout << "There are " << vector1.size()
       << " elements in vector1: " << vector1.at(0) << " " << vector1.at(1)
       << endl;
  return 0;
}
