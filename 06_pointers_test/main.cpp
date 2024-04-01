#include <iostream>
using namespace std;

int main() {

  int val = 10;
  int *ptr = nullptr;

  // 1. Присваеваем адресу указателя ptr адрес переменной val
  ptr = &val;
  cout << "Pointer value = " << *ptr << endl;
  cout << "Pointer address = " << ptr << endl;

  // 2. Значение присваевается самому указателю
  *ptr = 20;
  cout << "Pointer value = " << *ptr << endl;
  cout << "Pointer address = " << ptr << endl;

  /* НЕЛЬЗЯ ПРИСВАИВАТЬ АДДРЕСУ УКАЗАТЕЛЯ ЗАНЧЕНИЕ
  ptr = 10;

  НЕЛЬЗЯ ПРИСВАИВАТЬ УКАЗАТЕЛЮ НА НУЛЕВОЕ ЗНАЧЕНИЕ
  ПЕРЕМЕННУЮ, Т.К. НЕТ ЯЧЕЙКИ ПАМЯТИ В КОТОРОЕ ЕЕ МОЖНО ЗАПИСАТЬ
  int *ptr2 = nullptr;
  *ptr2 = 30;
  */

  // Сначала инифиализируем указатель
  int *ptr2 = nullptr;
  // Выделяем под него память
  ptr2 = new int;
  // Атеперь можноприсваивать значение
  *ptr2 = 30;
  cout << "Pointer value = " << *ptr2 << endl;
  cout << "Pointer address = " << ptr2 << endl;
}
