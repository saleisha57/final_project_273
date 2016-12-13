#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__

#include "base.h"
#include "Cook.h"
#include "Servers.h"
#include "Customers.h"

class Restaurant
{
 private:

  queue<Customers *> cust;        //queue of customers.
  double cust_pay;
  
 public:

  Restaurant() {}; //Default constructor.

  ~Restaurant() {};

  double run_sim(int clock, int arrival_rate) //Run simulation and return price.
  {
    return do_stuff(clock, arrival_rate); //Return from do_stuff()
  }
  
  
  double do_stuff(int clock, int arrival_rate) //Handles work with the queue.
  {//will run the simulation.
    
    if(((rand()) / RAND_MAX) < arrival_rate)
      cust.push(new Customers(arrival_rate)); //Push new customer into queue.
    
    if(!cust.empty())
      {
	Customers custer;
	
	cust_pay = 0; 
	for(int i = 0; i < arrival_rate; i ++) 
	  {
	    cust_pay += custer.make_order(); //Adding up the total paid by the customers.
	  }
	
	cust.pop();
	
	return cust_pay; //Return what the customer paid.
      }
    
    return 0;
  }

};




#endif
