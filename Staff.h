#ifndef __STAFF_H__
#define __STAFF_H__

#include "base.h"

class Staff
{
 public:
  
  Staff() {};
  
  virtual void do_work(int clock) = 0;  
  
};

#endif
