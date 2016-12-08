#ifndef __BUSBOY_H__
#define __BUSBOY_H__

#include "Staff.h"

class BusBoy : public Staff
{
 protected:
  
  unsigned short int num_bb;
  unsigned short int max_time_b;
  unsigned short int min_time_b;
  
 public:

  BusBoy() {};
  
  BusBoy(unsigned short int max, unsigned short int min){
    max_time_b = max; // setting max time
    
    min_time_b = min; //setting min time
    
  };
  
  void do_work()
  {
    //possible pay rate
    
  } 
  
};



#endif
