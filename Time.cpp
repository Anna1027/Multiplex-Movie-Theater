#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include "Time.h"

// constructor
Time::Time(int hour, int minute, int second){
  setTime(hour, minute, second);
}

void Time::setTime(int h, int m, int s){
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h){
  if (h >= 0 && h < 24){
    hour = h;
  }
  else{
    std::cout << "\nInvalid hour value " << h << "\n";
  }
}

void Time::setMinute(int m){
  if (m >= 0 && m < 60){
    minute = m;
  }
  else{
    std::cout << "\nInvalid minute value " << m << "\n";
  }
}

void Time::setSecond(int s){
  if (s >= 0 && s < 60){
    second = s;
  }
  else{
    std::cout << "\nInvalid second value " << s << "\n";
  }
}

unsigned int Time::getHour() const{
  return hour;
}

unsigned int Time::getMinute() const{
  return minute;
}

unsigned int Time::getSecond() const{
  return second;
}

std::string Time::to24format() const{
  std::ostringstream output;

  output << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2) << minute << ":" << std::setw(2) << second;
  
  return output.str();
}

std::string Time::toAMPMformat() const{
  std::ostringstream output;

  output << std::setfill('0') << std::setw(2) << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << std::setw(2) << minute << ":" << std::setw(2) << second << (hour < 12 ? " AM" : " PM");
  
  return output.str();

}