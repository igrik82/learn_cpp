#include <iostream>
using namespace std;

void swapping(int *a, int *b);

int main() {
  int var_a = 10;
  int var_b = 20;

  cout << "Before swapping\n";
  cout << "Variable var_a: " << var_a << "\n";
  cout << "Variable var_b: " << var_b << "\n\n";

  swapping(&var_a, &var_b);

  cout << "After swapping:\n";
  cout << "Variable var_a: " << var_a << "\n";
  cout << "Variable var_b: " << var_b << endl;
}

void swapping(int *a, int *b) {
  // create null temporary pointer
  int *temp_ptr = new int;
  // store address of a in temp_ptr
  *temp_ptr = *a;
  // because variable can't  store the address of another variable,
  // we store value
  *a = *b;
  *b = *temp_ptr;
}
