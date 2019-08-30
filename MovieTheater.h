
#include "Time.h"
#include "Date.h"
#include "Ticket.h"
#include <iostream>
#include <string>
#include <vector>

#ifndef MOVIE_THEATER
#define MOVIE_THEATER

class MovieTheater {

public:
// constructor
MovieTheater (std::string, int);

// change values
void setMovieName(std::string);
void setCapacity(int);
void setAvailableSeats(int);
int sellTicket();

// get information
int getCapacity() const;
int getAvailableSeats() const;
int getNumberSold() const;
std::string getCurrentMovie() const;
Ticket* findTicket(int) const;

private:
std::string movie;
int availableSeats{0};
int capacity{0};
Date sellDate{4, 12, 2019};
Time screenTime{20};
std::vector<Ticket*> soldTickets;

};

#endif