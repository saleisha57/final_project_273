#ifndef _CYCLE_H_
#define _CYCLE_H_

#include "base.h"
#include "Finances.h"
#include "Restaurant.h"
#include "Cook.h"
#include "Servers.h"
#include "BusBoy.h"

class Cycle
{

 private:
  int hour = 0;
  const int ONE_CYLCE = 24 * hour;
  unsigned short int max_c, min_c, max_s, min_s, max_b, min_b; //two protected ints for min and max.
  unsigned short int arrival_rate;
  unsigned short int num_tables, num_open;
  Finances fin;
  double prof;

 public:
  Cycle() {};
  
  void complete_a_cycle()
  {
    int total_time;
    cout<<"Enter total simulation time: "<<endl;
    cin>>total_time;
    Restaurant r;
    int clock;
    set_cycle();
    prof = 0;
    for(clock = 0; clock < total_time; clock++)
      {
       	prof += r.run_sim(clock, arrival_rate);
	fin.setProfits(prof);
	cout<<"PROFITS: "<<fin.getProfits()<<endl;
	cout<<""<<endl;
	Cook co(max_c, min_c);
	co.do_work();
	Servers s(max_s, min_s);
	s.do_work();
	BusBoy b(max_b, min_b);
	b.do_work(); 
	//r.run_sim(clock);
      }
    fin.making_a_profit(fin.getProfits());
    cout<<"Money in. Balance: "<<fin.getBalance()<<endl;
    fin.paying_expenses(9.97*(total_time/2));
    cout<<"Workers paid. Balance: "<<fin.getBalance()<<endl;
  };



  void set_cycle()
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
  };


};

#endif
