#include "movies.h"
#include "movie.h"

void Movies::inctement_watched(std::string name_val) {
  bool found = false;
  // TODO: Make function for searching
  for (auto &item : base) {
    if (item.get_name() == name_val) {
      item.incr_watched();
      found = true;
      break;
    }
  }
  if (!found) {
    std::cout << "Movies not found..." << std::endl;
  }
}

void Movies::add_movie(std::string name_val, std::string rating_val,
                       int watched_val) {
  bool found = false;
  // TODO: Make function for searching
  for (auto &item : base) {
    if (item.get_name() == name_val) {
      found = true;
      std::cout << "Movies already exists..." << std::endl;
      break;
    }
  }
  if (!found) {
    base.push_back(Movie(name_val, rating_val, watched_val));
  }
}
void Movies::display() {
  int counter = 0;
  for (auto item : base) {
    std::cout << ++counter << ". " << item.get_name() << " "
              << item.get_rating() << " " << item.get_watched() << std::endl;
  }
}
void Movies::del_movie(std::string name_val) {
  bool found = false;
  int counter = 0;
  // TODO: Make function for searching
  for (auto &item : base) {
    counter++;
    if (item.get_name() == name_val) {
      base.erase(base.begin() + counter);
      found = true;
      break;
    }
  }
  if (!found) {
    std::cout << "Movies not found..." << std::endl;
  }
}
