#include "Ticket.h"
#include "Date.h"
#include "Time.h"

// static members
int Ticket::nextTicket{101};
int Ticket::startTicket{101};

int Ticket::getNextTicket(){
  return nextTicket;
}

int Ticket::getStartTicket(){
  return startTicket;
}

// constructor
Ticket::Ticket(std::string m, Date d, Time t) :
movie{m}, showdate{d}, showtime{t}
{
  ticketNumber = nextTicket;
  nextTicket += 1;
}
