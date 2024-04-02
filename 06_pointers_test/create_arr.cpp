#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

int *create_array(int init_val, size_t size);
void print_array(int *ptr, size_t size);

int main() {
  // Create pointer
  int *ptr{nullptr};

  // It has no value? only address
  cout << "Creating pointer with nulprt.  address is: " << ptr << endl;

  // Create array and point to this array
  ptr = create_array(0, 10);

  // Print this array
  print_array(ptr, 10);

  vector<int> v(10);

  for (auto &i : v) {
    cout << i << endl;
  }

  return 0;
}

int *create_array(int init_val, size_t size) {

  int *array = new int[size];

  for (int i = 0; i < size; i++) {
    *(array + i) = init_val;
  }

  return array;
}

void print_array(int *ptr, size_t size) {
  for (int i = 0; i < size; i++) {
    cout << *(ptr + i) << ", ";
  }
  cout << endl;
}
