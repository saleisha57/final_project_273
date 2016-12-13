#ifndef __DRINK_MENU_H__
#define __DRINK_MENU_H__

#include "Menu.h"

class Drink_Menu : public Menu //Inheritance
{
 protected:

  map<string, double> drink_menu_map; //Creates a map for drink menu.
  map<string,double>::iterator it_d;  //Iterator for the map.

 public:
  Drink_Menu() {}; //Constructor.
  

  double order()
  {
    int num = rand() % 5; // generating a random number to determine the food choice.
    
    if( num == 0 ) 
      {
	it_d = drink_menu_map.find("Soft Drink"); //Find soft drink in map.
	if( it_d != drink_menu_map.end() )
	  cout<<"Order is: "<<it_d->first<<" for: $"<<it_d->second<<endl; // print out order
	cout<<""<<endl;
	return it_d->second;
      }

    if( num == 1 ) 
      {
	it_d = drink_menu_map.find("Sweet Tea"); //Find sweet tea in map.
	if( it_d != drink_menu_map.end() )
	  cout<<"Order is: "<<it_d->first<<" for: $"<<it_d->second<<endl; // print out order
	cout<<""<<endl;
	return it_d->second;
      }

    if( num == 2 ) 
      {
	it_d = drink_menu_map.find("Chocolate Milk"); //Find chocolate milk in map.
	if( it_d != drink_menu_map.end() )
	  cout<<"Order is: "<<it_d->first<<" for: $"<<it_d->second<<endl; // print out order
	cout<<""<<endl;
	return it_d->second;
      }	

    if( num == 3 ) 
      {
	it_d = drink_menu_map.find("Water"); //Find water in map.
	if( it_d != drink_menu_map.end() )
	  cout<<"Order is: "<<it_d->first<<" for: $"<<it_d->second<<endl; // print out order
	cout<<""<<endl;
	return it_d->second;
      }

    if( num == 4 ) 
      {
	it_d = drink_menu_map.find("Fruit Juice"); //Find fruit juice in map.
	if( it_d != drink_menu_map.end() )
	  cout<<"Order is: "<<it_d->first<<" for: $"<<it_d->second<<endl; // print out order
	cout<<""<<endl;
	return it_d->second;
      }

    return 0;
    
  }



  void set_menu() //Sets up the map for drink menu.
  {
    drink_menu_map.insert(make_pair("Soft Drink", 3.99));
    drink_menu_map.insert(make_pair("Sweet Tea", 2.99));
    drink_menu_map.insert(make_pair("Chocolate Milk", 2.99));
    drink_menu_map.insert(make_pair("Water", 1.55));
    drink_menu_map.insert(make_pair("Fruit Juice", 4.99));
  }


};


#endif
