#ifndef __SERVERS_H__
#define __SERVERS_H__

#include "Staff.h"

class Servers : public Staff
{
 protected:
  
  unsigned short int num_servers;
  unsigned short int max_time_s;
  unsigned short int min_time_s;
  
 public:

  Servers() {};
  
  Servers(unsigned short int max, unsigned short int min){
    max_time_s = max; // setting max time
    
    min_time_s = min; //setting min time
    
    cout<<"In con"<<endl; //lazy did not want to type cnstrctr
    
  };
  
  void do_work()
  {
    //possible pay rate
    
    std::cout<<"in servers"<<std::endl; //testing enter of function 
    
  } 
  
};



#endif
