#include <iostream>
using namespace std;

void swap(int *a, int *b);

int main() {
  int var_a = 10;
  int var_b = 20;

  cout << "Before swapping\n";
  cout << "Variable var_a: " << var_a << "\n";
  cout << "Variable var_b: " << var_b << "\n\n";

  swap(var_a, var_b);

  cout << "After swapping:\n";
  cout << "Variable var_a: " << var_a << "\n";
  cout << "Variable var_b: " << var_b << endl;
}

void swap(int *a, int *b) {
  int *temp_ptr = new int;

  temp_ptr = a;
  a = b;
  b = temp_ptr;
}
