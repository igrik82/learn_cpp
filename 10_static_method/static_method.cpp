#include "static_method.h"

int Player::player_counter = 0;

// Constructor
Player::Player(std::string name_val, int power_val) {

  if (validate_name(name_val) and validate_power(power_val)) {
    name = name_val;
    power = power_val;

    // Use static
    ++player_counter;
  }
};
Player::Player(std::string name_val) : Player{name_val, 0} {}
Player::Player(int power_val) : Player{"", power_val} {}
Player::Player() : Player{"", 0} {}
// Destructor
Player::~Player() {
  std::cout << "Player - " << name << " deleted.\n";
  if (!name.empty()) {
    --player_counter;
  }
}

bool Player::validate_name(std::string name_val) {
  if (!name_val.empty()) {
    return true;
  }
  return false;
}

bool Player::validate_power(int power_val) {
  if (power_val >= 0 and power_val < 100) {
    return true;
  }
  return false;
}

int Player::get_player_counter() { return player_counter; };
std::string Player::get_name() { return name; }

int Player::get_power() { return power; }
