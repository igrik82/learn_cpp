#pragma once
#include <string>

class Movie {
private:
  std::string name;
  std::string rating;
  int watched;
  bool validate_watched(int watched_val);

public:
  void set_name(std::string name_val);
  std::string get_name();

  void set_rating(std::string rating_val);
  std::string get_rating();

  void set_watched(int watched_val);
  void incr_watched();
  int get_watched();

  // Constructor
  Movie(std::string name_val, std::string rating_val, int watched_val);
  // Destructor
  ~Movie();
};
