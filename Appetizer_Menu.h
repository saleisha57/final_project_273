#ifndef __APPETIZER_MENU_H__
#define __APPETIZER_MENU_H__

#include "Menu.h"

class Appetizer_Menu : public Menu //Inheritance
{
 protected:

  map<string, double> appetizer_menu_map; //Creates map for appetizer menu.
  map<string, double>::iterator it_a;     //Create iterator for map.

 public:
  Appetizer_Menu() {};
  

  double order()
  {
    int num = rand() % 5; // generating a random number to determine the food choice.
    
    if( num == 0 ) 
      {
	it_a = appetizer_menu_map.find("Potato Skin"); // Find potato skin in map.
	return it_a->second;
      }

    if( num == 1 ) 
      {
	it_a = appetizer_menu_map.find("Cheese Fries"); // Find cheese fries in map.
	return it_a->second;
      }

    if( num == 2 ) 
      {
	it_a = appetizer_menu_map.find("Salad"); // Find salad in map.
	return it_a->second;
      }	

    if( num == 3 ) 
      {
	it_a = appetizer_menu_map.find("Bread Sticks"); // Find bread sticks in map.
	return it_a->second;
      }

    if( num == 4 ) 
      {
	it_a = appetizer_menu_map.find("Fruit Cup"); // Find fruit cup in map.
	return it_a->second;
      }

    return 0;
    
  }



  void set_menu() // Sets up the map for the menu.
  {
    appetizer_menu_map.insert(make_pair("Potato Skin", 2.55));
    appetizer_menu_map.insert(make_pair("Cheese Fries", 4.55));
    appetizer_menu_map.insert(make_pair("Salad", 5.55));
    appetizer_menu_map.insert(make_pair("Bread Sticks", 3.55));
    appetizer_menu_map.insert(make_pair("Fruit Cup", 9.99));
  }


};


#endif
