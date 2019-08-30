#include <string>

#ifndef DATE_H
#define DATE_H

class Date{

public:
  Date (unsigned int = 1, unsigned int = 1, unsigned int = 2000);

  void setDate(unsigned int m, unsigned int d, unsigned int y);
  void setMonth(unsigned int m);
  void setDay(unsigned int d);
  void setYear(unsigned int y);

  unsigned int getMonth() const;
  unsigned int getDay() const;
  unsigned int getYear() const;

  std::string toString() const;


private:
unsigned int month{0};
unsigned int day{0};
unsigned int year{0};

};


#endif