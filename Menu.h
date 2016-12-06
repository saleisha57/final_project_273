#ifndef __MENU_H__
#define __MENU_H__

#include "base.h"

class Menu
{
 protected:
  unsigned double price;
  string food_options;

 public:
  
  Menu() {};
  
  virtual void make_order() {} = 0;
  
  void SetPrice(double number)
  {
    price = number;
  };


};



#endif
