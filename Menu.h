#ifndef __MENU_H__
#define __MENU_H__

#include "base.h"

class Menu
{
 protected:
  //  double price;
  // string menu_type;
 

 public:
  
  Menu() {};
  
  virtual double order() = 0;
  /*
  void SetPrice(double number)
  {
    price = number;        TESTING SOME STUFF OUT
  };
  */

  virtual void set_menu() = 0;


};



#endif
