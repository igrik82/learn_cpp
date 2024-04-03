#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int> const *array);
vector<int> *apply_array(vector<int> *array1, vector<int> *array2);

int main() {
  vector<int> array1{1, 2, 3, 4, 5};
  vector<int> array2{10, 20, 30};

  print_array(&array1);
  print_array(&array2);

  vector<int> *ptr = nullptr;
  ptr = apply_array(&array1, &array2);
  print_array(ptr);
  delete ptr;

  return 0;
}

vector<int> *apply_array(vector<int> *array1, vector<int> *array2) {
  vector<int> *combine_array = new vector<int>;

  for (auto item2 : *array2) {
    for (auto item1 : *array1) {
      combine_array->push_back(item1 * item2);
    }
  }
  return combine_array;
}

void print_array(vector<int> const *array) {
  for (auto item : *array) {
    cout << item << " ";
  }
  cout << endl;
}
