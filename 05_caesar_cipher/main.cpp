#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int get_key(string key_phrase);
string encrypt(string message, u_int8_t key);
string decrypt(string message, u_int8_t key);
void buffer_clear();

const string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int action{0};

int main() {
  while (action != 3) {
    // Clear cin buffer
    if (action != 0)
      buffer_clear();
    system("clear");

    cout << "\nCeaser Cipher" << endl;
    cout << "====================" << endl;
    cout << "1. Encrypt a message" << endl;
    cout << "2. Decrypt a message" << endl;
    cout << "3. Exit\n" << endl;
    cout << "Enter your action: ";
    cin >> action;

    switch (action) {
    case 1: {
      // Clear cin buffer
      buffer_clear();
      cout << "Enter your message: ";
      string message{};
      std::getline(cin, message);
      if (message.empty()) {
        cout << "The message can't be empty" << endl;
        continue;
      }

      cout << "Enter your key phrase: ";
      string key_phrase{};
      std::getline(cin, key_phrase);
      u_int8_t key = get_key(key_phrase);

      cout << "==========================" << endl;
      string enc_message{};
      enc_message = encrypt(message, key);
      cout << "Encrypted message - " << enc_message << endl;
      string dec_message{};
      cout << "Decrypted message - " << decrypt(enc_message, key) << endl;
      cout << "==========================" << endl;
    } break;

    case 2: {
      // Clear cin buffer
      buffer_clear();
      cout << "Enter your encrypted message: ";
      string message{};
      std::getline(cin, message);
      if (message.empty()) {
        cout << "The message can't be empty" << endl;
        continue;
      }

      cout << "Enter your key phrase: ";
      string key_phrase{};
      std::getline(cin, key_phrase);
      u_int8_t key = get_key(key_phrase);
      string dec_message{};
      cout << "==========================" << endl;
      cout << "Decripted message - " << decrypt(message, key) << endl;
      cout << "==========================" << endl;
    } break;

    case 3: {
    }
      continue;

    default:
      cout << "Invalid action" << endl;
      buffer_clear();
      continue;
    }
  }
}

int get_key(string key_phrase) {

  // The phrase can't be empty
  if (key_phrase == "") {
    cout << "The key phrase can't be empty" << endl;
    return 0;
  }

  int temp{};
  int key{};

  for (int i : key_phrase) {
    temp += i;
  }

  // Return value not exided alphabet
  // and not 0
  key = temp % (alphabet.length() - 1);
  if (!key)
    key = 1;

  return key;
}

void buffer_clear() {
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

string encrypt(string message, u_int8_t key) {
  string encripted{};
  for (char index : message) {
    encripted += alphabet.at((alphabet.find(index) + key) % alphabet.length());
  }
  return encripted;
}
string decrypt(string message, u_int8_t key) {
  string decrypted{};
  for (char index : message) {
    decrypted += alphabet.at((alphabet.find(index) - key) % alphabet.length());
  }
  return decrypted;
}
