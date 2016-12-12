#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__

#include "base.h"
#include "Cook.h"
#include "Servers.h"
#include "Customers.h"

class Restaurant
{
 private:

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
      cust.push(new Customers(arrival_rate));
    
    if(!cust.empty())
      {
	Customers custer;
	
	cust_pay = 0; //TESTING OUT SOME STUFF WITH FINANCES.H
	for(unsigned int i = 0; i < cust.size(); i ++) // testing the ammount of money coming in from customers.
	  {
	    //checking to see how many customers are in the queue
	    cust_pay += custer.make_order();
	  }
	cout<<"CUST PAY:"<<cust_pay<<endl;
	
	cust.pop();

	return cust_pay;
      }
    
    return 0;
  }
   
  
  
  //friend class Customers;

};




#endif
