/*
  Copyright (c) 2016 by unibosy@gmail.com 
  This file is part of the unibosy library. https://github.com/unibosy

  This software is distributed under a license. The full license
  agreement can be found in the file LICENSE in this distribution.
  This software may not be copied, modified, sold or distributed
  other than expressed in the named license agreement.

  This software is distributed without any warranty.
*/
#pragma once
#include "common.h"
//operate type, such as like login, logout, pause and so on
enum OP_TYPE
{
  LOGIN = 0,
  LOGOUT = 1,
  GETNEXTBOX,
  UNKNOWN = 999
};

class OperationManager
{
public:
  OperationManager();
  ~OperationManager();
public:
  virtual int invoke(OP_TYPE optype, void* resinfo, void* param);
  virtual int invoke_param(void* resinfo, void* param);

private:

};
