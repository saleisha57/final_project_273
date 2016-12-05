#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__

#include "Cook.h"
//#include "BusBoy.h"  (have not made these yet)
//#include "Server.h"

class Restaurant
{
 protected:
  
  int max, min; //two protected ints for min and max.


 public:

  Restaurant() {}; //Default constructor.


  void run_sim() //Init all pieces for the restaurant.
  {//Testing to make sure that initialize will construct a Cook and so on.
    
    cout<<"in init"<<endl; //Testing entrance to function
    
    cout<<"Enter min cooking time: "<<endl;
    cin>>min;
    cout<<"Enter max cooking time: "<<endl;
    cin>>max;
    
    while(min > max) // Making sure min is less than max.
      {
	cout<<"Min cannot be greater than max. Try again."<<endl;
	cout<<"Enter min cooking time: "<<endl;
	cin>>min;
	cout<<"Enter max cooking time: "<<endl;
	cin>>max;	
      }
    
    
    Cook c(max, min); //Testing creation
    
    do_stuff(c);
      
      
  }//Will implement more later on.
  

  void do_stuff(Cook cook)
  {//will run the simulation.
    cook.do_work(); // Testing do_work()
    cout<<"in run_sim"<<endl; //Testing entrance to function.
  };

};




#endif
