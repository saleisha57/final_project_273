#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__

#include "base.h"
#include "Cook.h"
#include "BusBoy.h"
#include "Servers.h"
#include "Customers.h"
//# include "Finances.h"

class Restaurant
{
 private:
  
  unsigned short int num_served;
  unsigned short int user_choice;
  queue<Customers *> cust;
  double cust_pay;
  
 public:

  Restaurant() {}; //Default constructor.


  double run_sim(int clock, int arrival_rate)
  {
    return do_stuff(clock, arrival_rate);
  }
  
  
  double do_stuff(int clock, int arrival_rate)
  {//will run the simulation.
    
    if(((rand()) / RAND_MAX) < arrival_rate)
      cust.push(new Customers());
    
    if(!cust.empty())
      {
	cust.pop();

	Customers custer;
	
	cust_pay = 0; //TESTING OUT SOEM STUFF WITH FINANCES.H
	num_served = 0;
	for(int i = 0; i < 3; i ++) // testing the ammount of money coming in from customers.
	  {
	    cust_pay += custer.make_order();
	    num_served++;
	  }
	cout<<"CUST PAY:"<<cust_pay<<endl;
	
	return cust_pay;
      }
    
    return 0;
  }
   
  
  
  //friend class Customers;

};




#endif
