#ifndef __DESSERT_MENU_H__
#define __DESSERT_MENU_H__

#include "Menu.h"

class Dessert_Menu : public Menu  //Inheritance
{
 protected:

  map<string, double> dessert_menu_map;  //map for dessert menu.
  map<string,double>::iterator it_a;     //Iterator for map.

 public:
  Dessert_Menu() {}; //Constructor.
  

  double order()
  {
    int num = rand() % 5; // generating a random number to determine the food choice.
    
    if( num == 0 ) 
      {
	it_a = dessert_menu_map.find("Cake"); //Find cake in map.
	return it_a->second;
      }

    if( num == 1 ) 
      {
	it_a = dessert_menu_map.find("Pie"); //Find pie in map
	return it_a->second;
      }

    if( num == 2 ) 
      {
	it_a = dessert_menu_map.find("Cookie"); //Find cookie in map.
	return it_a->second;
      }	

    if( num == 3 ) 
      {
	it_a = dessert_menu_map.find("Ice Cream"); //Find ice cream in map.
	return it_a->second;
      }

    if( num == 4 ) 
      {
	it_a = dessert_menu_map.find("Creme Brulee"); //Find creme brulee in map.
	return it_a->second;
      }

    return 0;
    
  }



  void set_menu() //Sets up the menu in the map.
  {
    dessert_menu_map.insert(make_pair("Cake", 15.99));
    dessert_menu_map.insert(make_pair("Pie", 14.99));
    dessert_menu_map.insert(make_pair("Cookie", 2.55));
    dessert_menu_map.insert(make_pair("Ice Cream", 7.99));
    dessert_menu_map.insert(make_pair("Creme Brulee", 8.99)); 
  }


};


#endif
