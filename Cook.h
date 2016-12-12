#ifndef __COOK_H__
#define __COOK_H__

#include "Staff.h"
#include "Menu.h"

class Cook : public Staff
{
 protected:
  
  unsigned short int num_cooks;
  unsigned short int max_time_c;
  unsigned short int min_time_c;
  queue<Menu*> c_orders;
  
  
  friend class Customers;

 public:
  
  Cook() {};
  
  Cook(unsigned short int max, unsigned short int min){
    max_time_c = max; // setting max time
    
    min_time_c = min; //setting min time

    num_cooks = 1;

  };
  
  void do_work(int clock)
  {
    if(clock - min_time_c > max_time_c)
      for(clock = min_time_c; clock <= max_time_c; clock++)
	;
  } 
  
};



#endif
