#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__

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
  //queue<Customers *> cust;
  // Finances fin;
  double cust_pay;
  
 public:

  Restaurant() {}; //Default constructor.


  double run_sim(int clock)
  {
   return do_stuff(clock);
  }
  
  
  double do_stuff(int clock)
  {//will run the simulation.
     /*    
   
    if(cust.empty())
      {
	Customers *customer = cust.front(); // ATTEMPTING TO USE QUEUES (not going so well for me right now) specifically deques
	cout<<"Here"<<endl;
	
	num_open = num_tables;
	while( num_open <= num_tables )
	  {
	    
	    cust.push_front(new Customers());
	    
	    cust_pay = 0; //TESTING OUT SOEM STUFF WITH FINANCES.H
	    num_served = 0;
	    for(std::deque<Customers *>::iterator it = cust.begin(); it != cust.end(); ++it)
	      {
		cout<<"I am here"<<endl;
		cust_pay += customer->make_order(); // SEG FAULT HERE
		num_served++;
		cout<<"I made it here"<<endl;
	      }
	    cout<<"CUST PAY:"<<cust_pay<<endl;
	    
	    fin.setProfits(cust_pay);
	    
	    cout<<"PROFITS: "<<fin.getProfits()<<" number customers served: "<<num_served<<endl; //TESTING OUT SOME STUFF WITH FINANCES.H
	    
	    num_open--;
	  }	
	//cust.pop();
	
	//Customers cust;
	//customer.make_order();
      }
    */
    //if(((rand()) / RAND_MAX) < arrival_rate)
    //cust.push_front(new Customers());
     
    Customers cust;
    
    cust_pay = 0; //TESTING OUT SOEM STUFF WITH FINANCES.H
    num_served = 0;
    for(int i = 0; i < 3; i ++) // testing the ammount of money coming in from customers.
      {
	cust_pay += cust.make_order();
	num_served++;
      }
    cout<<"CUST PAY:"<<cust_pay<<endl;
    
    return cust_pay;
  }

  //friend class Customers;

};




#endif
