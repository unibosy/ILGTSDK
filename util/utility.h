#pragma once
#include "../include/enum.h"

//single instance
class Utility
{
public:
  ~Utility();
  static Utility* instance();
public:
  //get box sequence
  int generateBox();
private:
  Utility() { ; }
  static Utility* m_instance;
};