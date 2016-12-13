#ifndef __COOK_H__
#define __COOK_H__

#include "Staff.h"
#include "Menu.h"

class Cook : public Staff //Inheritance
{
 protected:
  
  unsigned short int num_cooks;   //Number of cooks
  unsigned short int max_time_c;  //Max time for cooks.
  unsigned short int min_time_c;  //Min time for cooks.      

 public:
  
  Cook() {};  //Default constructor
  
  Cook(unsigned short int max, unsigned short int min){   //Constructor.
    max_time_c = max; // setting max time
    
    min_time_c = min; //setting min time

    num_cooks = 1;
  };
  
  void do_work(int clock)
  {
    if(clock - min_time_c > max_time_c)
      for(clock = min_time_c; clock <= max_time_c; clock++)  //Controls the clock cycle for staff.
	;
  } 
  
};



#endif
