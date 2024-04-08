#pragma once

#include <iostream>
#include <string>

class Player {

private:
  static int player_counter;

  std::string name;
  int power;

  bool validate_name(std::string name_val);
  bool validate_power(int power);

public:
  std::string get_name();
  int get_power();

  // Static Method
  static int get_player_counter();

  // Constructor
  Player(std::string name_val, int power_val);
  Player(std::string name_val);
  Player(int power_val);
  Player();

  // Destructor
  ~Player();
};
