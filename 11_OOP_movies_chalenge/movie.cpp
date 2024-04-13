#include "movie.h"
#include <stdexcept>

bool Movie::validate_watched(int watched_val) {
  if (watched_val >= 0) {
    return true;
  }
  return false;
}

void Movie::set_name(std::string name_val) { name = name_val; }
std::string Movie::get_name() { return name; }

void Movie::set_rating(std::string rating_val) { rating = rating_val; }
std::string Movie::get_rating() { return rating; }

void Movie::set_watched(int watched_val) {
  if (validate_watched(watched_val)) {
    watched = watched_val;
  } else {
    throw std::runtime_error("Invalid value - must be positive");
  }
}
int Movie::get_watched() { return watched; }

void Movie::incr_watched() { watched += 1; }
// Constructor
Movie::Movie(std::string name_val, std::string rating_val, int watched_val) {
  name = name_val;
  rating = rating_val;
  set_watched(watched_val);
}
// Destructor
Movie::~Movie(){};
