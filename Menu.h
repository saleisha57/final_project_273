#ifndef __MENU_H__
#define __MENU_H__

class Menu
{
 protected:
  unsigned double price;
  string food_options;

 public:
  
  Menu() {};
  
  virtual void make_order() {};
  
  void SetPrice(double number)
  {
    price = number;
  };


};



#endif
