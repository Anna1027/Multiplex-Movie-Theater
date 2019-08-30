#include <string>
#include <vector>

#ifndef CONCESSION_STAND
#define CONCESSION_STAND


class ConcessionStand {

public:
  ConcessionStand(){};
  ConcessionStand(std::string); // name of stand 
  std::string getStandName() const;

private:
  std::string standName;
  
};

#endif