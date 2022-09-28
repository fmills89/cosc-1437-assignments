#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
  string title;
  string director;
  int year;
  int length;
};

void displayMovie(MovieData);

int main() {
  MovieData movie1, movie2;

  movie1.title = "The Silence of the Lambs";
  movie1.director = "Jonathan Demme";
  movie1.year = 1991;
  movie1.length = 117;

  movie2.title = "Hellraiser";
  movie2.director = "Clive Barker";
  movie2.year = 1987;
  movie2.length = 94;

  displayMovie(movie1);
  cout << endl;
  
  displayMovie(movie2);
  
  return 0;
}

void displayMovie(MovieData m ) {
  cout << "\nTitle : " << m.title;
  cout << "\nDirector : " << m.director;
  cout << "\nReleased : " << m.year;
  cout << "\nRunning Time : " << m.length
      << " minutes" << endl;
}
