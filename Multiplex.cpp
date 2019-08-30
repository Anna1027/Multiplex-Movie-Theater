#include "Multiplex.h"
#include <sstream>

/*
================
  DEFINE THESE
================
*/

bool Multiplex::find_movie(std::string movie_search) const{
  
  // complete definition
  for (int i=0;i<screenings.size();i++){
      if (movie_search==screenings[i]->getCurrentMovie()){
        return true;
      }
      
  }
         return false;
}

Multiplex& Multiplex::operator+=(MovieTheater* mt){
  
  // complete definition
    screenings.push_back(mt);
    return *this;

}
Multiplex& Multiplex::operator+=(ConcessionStand* cs){

  // complete definition
    foodcourt.push_back(cs);
    return *this;
}

std::ostream& operator << (std::ostream& out, const Multiplex& mp){
  out << mp.print_header(); // keep to include "welcome" heading
  
  // complete definition
    for (int i=0;i<mp.screenings.size();i++){
     out<< mp.screenings[i]->getCurrentMovie()<< "\n";
    }
    for (int i=0;i<mp.foodcourt.size();i++){
     out<< mp.foodcourt[i]->getStandName()<< "\n";
}
return out;
}
/*
===============
ALREADY DEFINED
===============
*/

Multiplex::Multiplex(std::string name) :
brandname{name}
{}

std::string Multiplex::get_brandname() const{
  return brandname;
}

std::string Multiplex::print_header() const{
  
  std::ostringstream output;
  std::string message = "WELCOME TO ";
  int length = get_brandname().size() + message.size();
  
  output << "\n";

  for (int i = 0; i < length; i++){
    output << '*';
  }

  output << "\n" << message << get_brandname() << "\n";

  for (int i = 0; i < length; i++){
    output << '*';
  }
  
  output << "\n";

  return output.str();
}

