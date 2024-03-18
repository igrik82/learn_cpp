#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

u_int8_t get_key(string key_phrase);
string encrypt(string message, u_int8_t key);
string decrypt(string message, u_int8_t key);

const string alphabet =
    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

int main() {
  cout << "Ceaser Cipher" << endl;
  cout << "====================" << endl;
  cout << "1. Encrypt a message" << endl;
  cout << "2. Decrypt a message" << endl;
  cout << "3. Exit\n" << endl;
  cout << "Enter your action: ";
  int action;
  cin >> action;

  switch (action) {
  case 1: {

  } break;

  case 2: {
  } break;

  case 3: {
  } break;

  default:
    cout << "Invalid action" << endl;
    break;
  }

  return 0;
}

u_int8_t get_key(string key_phrase) {

  // The phrase can't be empty
  if (key_phrase == "") {
    cout << "The key phrase can't be empty" << endl;
    return 0;
  }

  int temp{};
  u_int8_t key{};

  for (int i : key_phrase) {
    temp += i;
  }

  // Return value not exided 62
  // and not 0
  key = temp % 62;
  if (!key)
    key = 1;

  return key;
}
