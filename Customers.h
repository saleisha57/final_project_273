#ifndef __CUSTOMERS_H__
#define __CUSTOMERS_H__

#include "base.h"
#include "Main_Course_Menu.h"
#include "Appetizer_Menu.h"
#include "Drink_Menu.h"
#include "Dessert_Menu.h"

class Customers
{
  protected:
  Main_Course_Menu m;
  Appetizer_Menu a;
  Drink_Menu d;
  Dessert_Menu ds;

 public:
  //default constructor
  Customers() {};

  Customers(int arrival_rate)
    {
      make_order();
    }
  
  //function to allow the customer to make orders
  double make_order()
  {
    int num = rand() % 10;
    double amt = 0;
    
    if(num >= 0 && num < 10)
      {
	m.set_menu();
	amt += m.order();
      }
    if(num >= 3 && num < 10)
      {
	d.set_menu();
	amt += d.order();
      }
    if(num >= 6 && num < 10)
      {
	a.set_menu();
	amt += a.order();	
      }
    if(num >= 8 && num < 10)
      {
	ds.set_menu();
	amt += ds.order();
      }

    // cout<<"Price amount is: "<<amt<<endl;
    
    eat();

    //  cout<<"Customers and num is: "<<num<<endl;

    return amt;
  }
  
  void eat()
  {
    //cout<<"tables: "<<endl; //leaving in cout to test entrance to function. (WILL IMPLEMENT WHEN TIME SET UP PROPERLY)
  }
  
  

};



#endif
