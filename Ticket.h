#include <string>
#include "Date.h"
#include "Time.h"

#ifndef TICKET_H
#define TICKET_H

// forward declaration
class MovieTheater;

class Ticket{

  public:
  static int getNextTicket();
  static int getStartTicket();

  // friend
  friend class MovieTheater;
  friend void kioskPrintTicket(MovieTheater, int);

  private:
  // private constructor
  Ticket(std::string, Date, Time);

  Date showdate;
  Time showtime;
  int ticketNumber;
  std::string movie;
  std::string status{"Active"};

  // static data members
  static int nextTicket;
  static int startTicket;
};


#endif