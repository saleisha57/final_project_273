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
  queue<Menu> c_orders;
  
 public:

  Cook() {};
  
  Cook(unsigned short int max, unsigned short int min){
    max_time_c = max; // setting max time
    
    min_time_c = min; //setting min time

    num_cooks = 1;

  };
  
  void do_work(int clock)
  {
    //possible pay rate
    if(!c_orders.empty())
      cout<<"here"<<endl;
      else 
	{
	  if(clock - max_time_c > min_time_c)
	    cout<<"Here"<<endl;
	}    

  } 
  
};



#endif
