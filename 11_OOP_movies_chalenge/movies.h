#pragma once
#include "movie.h"
#include <iostream>
#include <vector>

class Movies {
private:
  std::vector<Movie> base;

public:
  void inctement_watched(std::string name_val);
  void add_movie(std::string name_val, std::string rating_val, int watched_val);
  void del_movie(std::string name_val);
  void display();
};
