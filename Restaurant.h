#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__

#include "Cook.h"
//#include "BusBoy.h"  (have not made these yet)
//#include "Server.h"

class Restaurant
{
 protected:
  
  int max_c, min_c, max_s, min_s, max_b, min_b; //two protected ints for min and max.

 public:

  Restaurant() {}; //Default constructor.


  void run_sim() //Init all pieces for the restaurant.
  {//Testing to make sure that initialize will construct a Cook and so on.
    
    cout<<"in init"<<endl; //Testing entrance to function
    
    cout<<"Enter min cooking time: "<<endl;
    cin>>min_c;
    cout<<"Enter max cooking time: "<<endl;
    cin>>max_c;
    
    while(min_c > max_c) // Making sure min is less than max.
      {
	cout<<"Min cannot be greater than max. Try again."<<endl;
	cout<<"Enter min cooking time: "<<endl;
	cin>>min_c;
	cout<<"Enter max cooking time: "<<endl;
	cin>>max_c;	
      }

    cout<<"Enter min serving time: "<<endl;
    cin>>min_s;
    cout<<"Enter max serving time: "<<endl;
    cin>>max_s;
    
    while(min_s > max_s) // Making sure min is less than max.
      {
	cout<<"Min cannot be greater than max. Try again."<<endl;
	cout<<"Enter min serving time: "<<endl;
	cin>>min_s;
	cout<<"Enter max serving time: "<<endl;
	cin>>max_s;	
      }

    cout<<"Enter min cleaning time: "<<endl;
    cin>>min_b;
    cout<<"Enter max cleaning time: "<<endl;
    cin>>max_b;
    
    while(min_b > max_b) // Making sure min is less than max.
      {
	cout<<"Min cannot be greater than max. Try again."<<endl;
	cout<<"Enter min cleaning time: "<<endl;
	cin>>min_b;
	cout<<"Enter max cleaning time: "<<endl;
	cin>>max_b;	
      }
    
    do_stuff();
      
  }//Will implement more later on.
  

  void do_stuff()
  {//will run the simulation.
    //   cook.do_work(); // Testing do_work()
    cout<<"in do_stuff"<<endl; //Testing entrance to function.
  };

};




#endif
