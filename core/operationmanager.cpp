#include "../include/operationmanager.h"

#include "operation_generate_box.h"


#include "mutex"
#include "string"

std::mutex resMutex;


OperationManager::OperationManager()
{

}

OperationManager::~OperationManager()
{

}

int OperationManager::invoke(OP_TYPE optype, void* resinfo, void* param)
{
  std::lock_guard<std::mutex> guard(resMutex);
  //do things
  std::shared_ptr<OperationManager> op;
  switch (optype)
  {
  case LOGIN:
    break;
  case LOGOUT:
    break;
  case GETNEXTBOX:
    op.reset(new Operation_Generate_Box);
    break;
  case UNKNOWN:
    break;
  default:
    break;
  }
  auto ret = OP_FAIL;
  try
  {
    ret = op->invoke_param(resinfo, param);
  }
  catch (...)
  {
    //trace log
    printf("exception happen!");
    ret = OP_FATAL;
  }
  
  return ret;
}

int OperationManager::invoke_param(void* resinfo, void* param)
{
  return OP_SUCCESS;
}