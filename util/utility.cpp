#include "utility.h"
#include "mutex"

#include<time.h>
#include<stdlib.h>

std::mutex utilityMutex;
Utility* Utility::m_instance = nullptr;

Utility::~Utility()
{
  if (m_instance)
  {
    delete m_instance;
    m_instance = nullptr;
  }
}

Utility* Utility::instance()
{
  if (nullptr == m_instance)
  {
    std::lock_guard<std::mutex> guard(utilityMutex);
    if (nullptr == m_instance)
    {
      m_instance = new Utility;
    }
  }
  return m_instance;
}


int Utility::generateBox()
{
  srand((int)time(0));
  return (rand() % 7);
}













