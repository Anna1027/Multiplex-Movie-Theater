#include "MovieTheater.h"
#include "ConcessionStand.h"
#include <vector>

#ifndef MULTIPLEX_H
#define MULTIPLEX_H

class Multiplex{

friend std::ostream& operator << (std::ostream&, const Multiplex&);

public:

Multiplex(){}
Multiplex(std::string); // take in brandname of Multiplex
std::string get_brandname() const;
std::string print_header() const;
bool find_movie(std::string) const;
Multiplex& operator+=(MovieTheater*);
Multiplex& operator+=(ConcessionStand*);

private:
std::string brandname{};
std::vector<MovieTheater*> screenings;
std::vector<ConcessionStand*> foodcourt;


};

#endif