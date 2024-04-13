#include "movies.h"

int main() {
  Movies my_movies;

  my_movies.display();

  my_movies.add_movie("boom", "GT", 1);
  my_movies.add_movie("baom", "GT", 1);
  my_movies.add_movie("boam", "GT", 1);
  my_movies.add_movie("biom", "GT", 1);
  my_movies.add_movie("boim", "GT", 1);
  my_movies.add_movie("beom", "GT", 1);
  my_movies.add_movie("boem", "GT", 1);
  my_movies.add_movie("biem", "GT", 1);
  my_movies.add_movie("baem", "GT", 1);
  my_movies.add_movie("bdem", "GT", 1);
  my_movies.add_movie("koem", "GT", 1);

  my_movies.inctement_watched("biom");
  my_movies.inctement_watched("boim");
  my_movies.inctement_watched("biom");
  my_movies.inctement_watched("boim");
  my_movies.inctement_watched("boimqwe");

  my_movies.display();
  my_movies.del_movie("koem");
  my_movies.add_movie("bdem", "GT", 1);
  my_movies.display();
}
