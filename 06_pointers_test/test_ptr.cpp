int main() {

  int a = 10;

  int b = 20;

  int *ptr_a = nullptr;
  int *ptr_b = nullptr;

  ptr_a = &a;
  ptr_b = &b;

  int c = 30;

  c = *ptr_a;
  a = *ptr_b;

  b = c;
}
