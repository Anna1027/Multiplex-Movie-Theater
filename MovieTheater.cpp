#include "MovieTheater.h"
#include "Ticket.h"
#include <vector>
#include <cstddef>

MovieTheater::MovieTheater (std::string movie, int capacity){
  setMovieName(movie);
  setCapacity(capacity);
  setAvailableSeats(capacity);
}

// change values
void MovieTheater::setMovieName(std::string movie){
  this->movie = movie;
}

void MovieTheater::setCapacity(int capacity){
  if (capacity > 0){
    this->capacity = capacity;
  }

}

void MovieTheater::setAvailableSeats(int capacity){
  if (capacity > 0)
  {
    this->availableSeats = capacity;
  }
}

int MovieTheater::sellTicket(){
  int number = -1; // number will either be valid ticket number or -1
  if (availableSeats > 0){
    Ticket* newTicket = new Ticket{movie, sellDate, screenTime};
    number = newTicket->ticketNumber;
    soldTickets.push_back(newTicket);
    availableSeats--;
  }
  return number;
}

// get information
int MovieTheater::getCapacity() const{
  return capacity;
}

int MovieTheater::getAvailableSeats() const{
  return availableSeats;
}

int MovieTheater::getNumberSold() const{
  return soldTickets.size();
}

std::string MovieTheater::getCurrentMovie() const{
  return movie;
}

Ticket* MovieTheater::findTicket(int n) const{
  for (int i = 0; i < soldTickets.size(); i++){
    if (soldTickets[i]->ticketNumber == n){
      return soldTickets[i];
    }
  }
  return nullptr;
}