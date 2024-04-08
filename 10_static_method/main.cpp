#include "static_method.h"

void get_status(Player *player, std::string var);

int main() {
  Player player1("Igor", 99);
  get_status(&player1, "Player1");

  Player player2("Spanch", 2);
  get_status(&player2, "Player2");

  Player player3(2);
  get_status(&player3, "Player3");

  Player player4("Crabs");
  get_status(&player4, "Player4");

  Player player5("Patric", 10);
  get_status(&player5, "Player5");

  Player player6;
  get_status(&player6, "Player6");

  Player *player7 = new Player("troo lya lya", 10);
  get_status(player7, "Player7");

  delete player7;

  std::cout << "Now active players: " << Player::get_player_counter()
            << std::endl;
  return 0;
}

void get_status(Player *player, std::string var) {
  if (player->get_name().empty()) {
    std::cout << var << " was not created\n" << std::endl;
  } else {
    std::cout << var << ": Name: " << player->get_name()
              << " Power: " << player->get_power() << "\n";
    std::cout << "Now active players: " << Player::get_player_counter() << "\n"
              << std::endl;
  }
}
