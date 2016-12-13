#ifndef __CUSTOMERS_H__
#define __CUSTOMERS_H__

#include "base.h"
#include "Main_Course_Menu.h"
#include "Appetizer_Menu.h"
#include "Drink_Menu.h"
#include "Dessert_Menu.h"

class Customers   //Customers class.
{
  protected:
  Main_Course_Menu m;  //Main course menu
  Appetizer_Menu a;    //Appetizer menu.
  Drink_Menu d;        //Drink menu
  Dessert_Menu ds;     //Dessert menu

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
    int num = rand() % 10; //Random number between 0 and 9.
    double amt = 0;
    
    if(num >= 0 && num < 10)  //Customer orders from main course menu 100% of the time.
      {
	m.set_menu();
	amt += m.order();
      }
    if(num >= 3 && num < 10) //Customer orders from drink menu 70% of the time.
      {
	d.set_menu();
	amt += d.order(); 
      }
    if(num >= 6 && num < 10) //Customer orders from appetizer menu 40% of the time.
      {
	a.set_menu();
	amt += a.order();	
      }
    if(num >= 8 && num < 10) //Customer orders from dessert menu 20% of the time.
      {
	ds.set_menu();
	amt += ds.order();
      }
    
    return amt;  //Return the amount the customer pays on food.
  }
   

};



#endif
