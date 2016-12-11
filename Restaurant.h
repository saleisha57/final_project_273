#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__

#include "Cook.h"
#include "BusBoy.h"
#include "Servers.h"
#include "Customers.h"
# include "Finances.h"

class Restaurant
{
 private:
  
  unsigned short int max_c, min_c, max_s, min_s, max_b, min_b; //two protected ints for min and max.
  unsigned short int num_served, arrival_rate;
  unsigned short int num_tables, num_open, user_choice;
  //deque<Customers *> cust;
  Finances fin;
  double cust_pay;
  
 public:

  Restaurant() {}; //Default constructor.


  void run_sim() //Init all pieces for the restaurant.
  {//Testing to make sure that initialize will construct a Cook and so on.
    
    cout<<"Enter customer arrival rate: "<<endl;
    cin>>arrival_rate;
    
    cout<<"Enter min cooking time: "<<endl;
    cin>>min_c;
    cout<<"Enter max cooking time: "<<endl;
    cin>>max_c;
    
    while(min_c >= max_c) // Making sure min is less than max.
      {
	cout<<"Min cannot be greater than or equal to max. Try again."<<endl;
	cout<<"Enter min cooking time: "<<endl;
	cin>>min_c;
	cout<<"Enter max cooking time: "<<endl;
	cin>>max_c;	
      }

    cout<<"Enter min serving time: "<<endl;
    cin>>min_s;
    cout<<"Enter max serving time: "<<endl;
    cin>>max_s;
    
    while(min_s >= max_s) // Making sure min is less than max.
      {
	cout<<"Min cannot be greater than or equal to max. Try again."<<endl;
	cout<<"Enter min serving time: "<<endl;
	cin>>min_s;
	cout<<"Enter max serving time: "<<endl;
	cin>>max_s;	
      }

    cout<<"Enter min cleaning time: "<<endl;
    cin>>min_b;
    cout<<"Enter max cleaning time: "<<endl;
    cin>>max_b;
    
    while(min_b >= max_b) // Making sure min is less than max.
      {
	cout<<"Min cannot be greater than or equal to max. Try again."<<endl;
	cout<<"Enter min cleaning time: "<<endl;
	cin>>min_b;
	cout<<"Enter max cleaning time: "<<endl;
	cin>>max_b;	
      }
    
    cout<<"Please enter a number between 1 and 10 for the number of tables: "<<endl;
    cin>>num_tables;

    while( num_tables < 1 || num_tables > 10 )
      {
	cout<<"Please enter a number between 1 and 10 for the number of tables: "<<endl;
	cin>>num_tables;
      }

    do_stuff();
      
  }//Will implement more later on.
  
  
  
  void do_stuff()
  {//will run the simulation.
    Cook c(max_c, min_c);
    c.do_work();
    Servers s(max_s, min_s);
    s.do_work();
    BusBoy b(max_b, min_b);
    b.do_work(); 
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
      else
      {
	if(((rand()) / RAND_MAX) < arrival_rate)
	cust.push_front(new Customers());
      }

    */
    Customers cust;
    
    cust_pay = 0; //TESTING OUT SOEM STUFF WITH FINANCES.H
    num_served = 0;
    for(int i = 0; i < 100; i ++)
      {
	cust_pay += cust.make_order();
	num_served++;
      }
    cout<<"CUST PAY:"<<cust_pay<<endl;
    
    fin.setProfits(cust_pay);

    cout<<"PROFITS: "<<fin.getProfits()<<" number customers served: "<<num_served<<endl; //TESTING OUT SOME STUFF WITH FINANCES.H
    
  }

  //friend class Customers;

};




#endif
