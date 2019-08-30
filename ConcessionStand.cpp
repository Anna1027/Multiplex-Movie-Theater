#include "ConcessionStand.h"
#include <iostream>
#include <string>


ConcessionStand::ConcessionStand(std::string name) :
standName(name)
{}

std::string ConcessionStand::getStandName() const {
  return standName;
}