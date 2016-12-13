#ifndef _CYCLE_H_
#define _CYCLE_H_

#include "base.h"
#include "Finances.h"
#include "Restaurant.h"
#include "Cook.h"
#include "Servers.h"

class Cycle
{

 private:
  
  unsigned short int max_c, min_c, max_s, min_s; //Max and min for cooks and servers.
  unsigned short int arrival_rate;               //Arrival rate.
  Finances fin;                                  //Finances.
  double prof, exp;                              //Profits and expenses.

 public:
  Cycle() {};
  
  void complete_a_cycle()  //Completes a cycle in the program.
  {  
    unsigned int total_time;        //Total time given by the user.
    cout<<"Enter total simulation time(in hours): "<<endl;
    cin>>total_time;
    Restaurant r;
    unsigned int clock;
    set_cycle(); //Gets information from the user for the max and min times.
    prof = 0;
    for(clock = 0; clock < total_time; clock++)
      {		
	Cook co(max_c, min_c);    //Create cooks
	co.do_work(clock); 
	Servers s(max_s, min_s);  //Create servers
	s.do_work(clock);
	
       	prof += r.run_sim(clock, arrival_rate);  //Run simulation and set prof to the return value.

	fin.setProfits(prof);
      }
    fin.making_a_profit(fin.getProfits());               //Set balance.
    cout<<"Current balance: "<<fin.getBalance()<<endl;   //Print balance.
    cout<<"Workers paid: "<<((9.97*total_time)*2)<<endl; //Pay workders.
    fin.paying_expenses((9.97*total_time)*2);            //Re-Set balance.
    cout<<"Current balance: "<<fin.getBalance()<<endl;   //Print balance.
    fin.setBalance(0.0);
  };



  void set_cycle() //Asks the user for input for arrival rate, and max and min times.
  {
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
    
  };


};

#endif
