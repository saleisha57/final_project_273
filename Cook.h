#ifndef __COOK_H__
#define __COOK_H__

#include "Staff.h"

class Cook : public Staff
{
 protected:
  
  unsigned short int num_cooks;
  unsigned short int max_time_c;
  unsigned short int min_time_c;
  
 public:

  Cook() {};
  
  Cook(unsigned short int max, unsigned short int min){
    max_time_c = max; // setting max time
    
    min_time_c = min; //setting min time
    
    cout<<"In con"<<endl; //lazy did not want to type cnstrctr
    
  };
  
  void do_work()
  {
    //possible pay rate
    
    std::cout<<"in cook"<<std::endl; //testing enter of function 
    
  } 
  
};



#endif
