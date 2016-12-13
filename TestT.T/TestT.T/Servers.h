#ifndef __SERVERS_H__
#define __SERVERS_H__

#include "Staff.h"

class Servers : public Staff //Inheritance
{
 protected:
  
  unsigned short int num_servers; //Number of servers
  unsigned short int max_time_s;      //Max serve time
  unsigned short int min_time_s;      //Min serve time
  
 public:

  Servers() {};  //Default constructor
  
  Servers(unsigned short int max, unsigned short int min){  //Constructor
    max_time_s = max; // setting max time
    
    min_time_s = min; //setting min time

    num_servers = 1;
     
  };
  
  void do_work(int clock)
  {
    if(clock - min_time_s > max_time_s)
      for(clock = min_time_s; clock <= max_time_s; clock++)  //Controls the clock cycle for staff.
	;    
  } 
  
};



#endif
