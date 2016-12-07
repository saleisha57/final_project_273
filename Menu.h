#ifndef __MENU_H__
#define __MENU_H__

#include "base.h"

class Menu
{
 protected:
  double price;
  string menu_type;
  map<string, double> menu_map;

 public:
  
  Menu() {};
  
  // virtual void make_order() {} = 0;
  
  void SetPrice(double number)
  {
    price = number;
  };

  void set_menu()
  {
    menu_type = "Main Course";

    if(menu_type == "Main Course"){
      menu_map.insert(make_pair("Tomato Soup", 1.55));
      menu_map.insert(make_pair("Hamburger", 2.55));
      menu_map.insert(make_pair("Corn Dog", 3.55));
      menu_map.insert(make_pair("Chicken Strips", 3.55));
      menu_map.insert(make_pair("Grilled Cheese", 2.55));
      cout<<"Main Course:"<<endl;
      for(map<string,double>::iterator it = menu_map.begin(); it != menu_map.end(); ++it)
	cout<<"["<<it->first<<", "<<it->second<<"]"<<endl;
    }


  }


};



#endif
