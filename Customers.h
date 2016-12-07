#ifndef __CUSTOMERS_H__
#define __CUSTOMERS_H__

#include "base.h"
#include "Main_Course_Menu.h"

class Customers
{
  protected:
  Main_Course_Menu m;

 public:
  //default constructor
  Customers() {};
  
  //function to allow the customer to make orders
  void make_order()
  {
    int num = rand() % 10;
    double amt;
    
    m.set_menu();
    amt = m.order();
    
    cout<<"Price amount is: "<<amt<<endl;
    
    eat();

    cout<<"Customers and num is: "<<num<<endl;
  }
  
  void eat()
  {
    cout<<"tables: "<<endl;
  }
  
  

};



#endif
