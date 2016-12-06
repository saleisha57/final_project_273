#ifndef __CUSTOMERS_H__
#define __CUSTOMERS_H__

#include "base.h"

class Customers
{
  protected:
  

 public:
  //default constructor
  Customers() {};
  
  //function to allow the customer to make orders
  void make_order()
  {
    int num = rand() % 10;   

    cout<<"Customers and num is: "<<num<<endl;
  }
  

};



#endif
