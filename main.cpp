#include "Multiplex.h"
#include "ConcessionStand.h"
#include "MovieTheater.h"
#include <iostream>
using namespace std;

int main() {
  
  Multiplex my_multiplex{"NEW YORK BAY CINEMAS"};
  
  MovieTheater* theater1 = new MovieTheater{"Captain Marvel", 100};
  MovieTheater* theater2 = new MovieTheater{"Apollo 11", 150};
  MovieTheater* theater3 = new MovieTheater{"Starfish", 250};    
  MovieTheater* theater4 = new MovieTheater{"Five Feet Apart", 100};
  MovieTheater* theater5 = new MovieTheater{"Never Grow Old", 150};

  my_multiplex += theater1;
  my_multiplex += theater2;
  my_multiplex += theater3;
  my_multiplex += theater4;
  my_multiplex += theater5;
  
  ConcessionStand* standA = new ConcessionStand{"Pizzeria"};
  ConcessionStand* standB = new ConcessionStand{"Deli"}; 
  ConcessionStand* standC = new ConcessionStand{"Popcorn"};
  ConcessionStand* standD = new ConcessionStand{"Candy"};
  ConcessionStand* standE = new ConcessionStand{"Hot Dogs"};
  
  my_multiplex += standA;
  my_multiplex += standB;
  my_multiplex += standC;
  my_multiplex += standD;
  my_multiplex += standE;
  
  cout << my_multiplex;

  string usermovie;
  cout << "\nWhat movie would you like to see? ";
  getline(cin, usermovie);

  if (my_multiplex.find_movie(usermovie) == true){
    cout << usermovie << " is playing at " << my_multiplex.get_brandname() << "\n";
  }
  else {
    cout << "Sorry! " << usermovie << " is not playing at " << my_multiplex.get_brandname() << " right now.\n";
  }
  
}