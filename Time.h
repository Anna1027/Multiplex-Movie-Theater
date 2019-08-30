#include <string>

#ifndef TIME_H
#define TIME_H

class Time{

public:
  
  // constructors
  Time (int = 0, int = 0, int = 0); 

  // set functions
  void setTime(int, int, int);
  void setHour(int);
  void setMinute(int);
  void setSecond(int);

  // get functions
  unsigned int getHour() const;
  unsigned int getMinute() const;
  unsigned int getSecond() const;

  // display functions
  std::string to24format() const;
  std::string toAMPMformat() const;

private:

  unsigned int hour{0};
  unsigned int minute{0};
  unsigned int second{0};

};


#endif