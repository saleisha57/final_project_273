#ifndef __BUSBOY_H__
#define __BUSBOY_H__

#include "Staff.h"

class BusBoy : public Staff
{
 protected:
  
  unsigned short int num_cooks;
  unsigned short int max_time_b;
  unsigned short int min_time_b;
  
private:
	double pay_rate;
 public:

  BusBoy() {};
  
  BusBoy(unsigned short int max, unsigned short int min){
    max_time_b = max; // setting max time
    
    min_time_b = min; //setting min time
    
    cout<<"In con"<<endl; //lazy did not want to type cnstrctr

	//function that will take the busboy's paycheck out of expenses
	void pay_staff(double pay_rate);
    
  };
  
  void do_work()
  {
    //possible pay rate
    
    std::cout<<"in bus boy"<<std::endl; //testing enter of function 
    
  } 
  
};



#endif
