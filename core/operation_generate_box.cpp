#include "operation_generate_box.h"
#include "../util/utility.h"

int Operation_Generate_Box::invoke_param(void* resinfo, void* param)
{
  return Utility::instance()->generateBox();
}