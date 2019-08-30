#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "Date.h"


Date::Date (unsigned int m, unsigned int d, unsigned int y){
  setDate(m,d,y);
}

void Date::setDate(unsigned int m, unsigned int d, unsigned int y){
  setMonth(m);
  setDay(d);
  setYear(y);
}

void Date::setMonth(unsigned int m){
  if (m >= 1 && m <= 12){
    month = m;
  }
  else{
    std::cout << "invalid month " << m << "\n";
  }
}

void Date::setDay(unsigned int d){
  if (d >= 1 && d <= 31){
    day = d;
  }
  else{
    std::cout << "invalid day " << d << "\n";
  }
}

void Date::setYear(unsigned int y){
  year = y;
}

unsigned int Date::getMonth() const{
  return month;
}

unsigned int Date::getDay() const{
  return day;
}

unsigned int Date::getYear() const{
  return year;
}

std::string Date::toString() const{
  std::ostringstream output;

  output << month << '/' << day << '/' << year;

  return output.str();
}