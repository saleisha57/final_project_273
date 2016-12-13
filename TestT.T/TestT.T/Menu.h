#ifndef __MENU_H__
#define __MENU_H__

#include "base.h"

class Menu
{
 public:
  
  Menu() {}; //Constructor
  
  virtual double order() = 0;  //Virtual method

  virtual void set_menu() = 0; //Virtual method
};



#endif
