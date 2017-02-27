#pragma once
#include "../include/operationmanager.h"

class Operation_Generate_Box : public OperationManager
{
public:
  Operation_Generate_Box() { ; }
  ~Operation_Generate_Box() { ; }
  int invoke_param(void* resinfo, void* param);

};