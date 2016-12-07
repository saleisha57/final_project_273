#ifndef __CUSTOMERS_H__
#define __CUSTOMERS_H__

#include "base.h"
#include "Menu.h"

class Customers
{
  protected:
  Menu m;

 public:
  //default constructor
  Customers() {};
  
  //function to allow the customer to make orders
  void make_order()
  {
    int num = rand() % 10;   
    
    m.set_menu();

    eat();

    cout<<"Customers and num is: "<<num<<endl;
  }
  
  void eat()
  {
    cout<<"tables: "<<endl;
  }
  
  

};



#endif
