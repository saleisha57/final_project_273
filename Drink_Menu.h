#ifndef __DRINK_MENU_H__
#define __DRINK_MENU_H__

#include "Menu.h"

class Drink_Menu : public Menu
{
 protected:

  map<string, double> drink_menu_map;
  map<string,double>::iterator it_a;

 public:
  Drink_Menu() {};
  

  double order()
  {
    int num = rand() % 5; // generating a random number to determine the food choice.
    
    if( num == 0 ) 
      {
	it_a = drink_menu_map.find("Soft Drink"); // finding tomato soup in map.
	
	if( it_a != drink_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }

    if( num == 1 ) 
      {
	it_a = drink_menu_map.find("Sweet Tea"); // finding hamburger in map.
	
	if( it_a != drink_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }

    if( num == 2 ) 
      {
	it_a = drink_menu_map.find("Chocolate Milk"); // finding corn dog in map.
	
	if( it_a != drink_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }	

    if( num == 3 ) 
      {
	it_a = drink_menu_map.find("Water"); // finding chicken strips in map.
	
	if( it_a != drink_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }

    if( num == 4 ) 
      {
	it_a = drink_menu_map.find("Fruit Juice"); // finding grilled cheese in map.
	
	if( it_a != drink_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }

    return 0;
    
  }



  void set_menu()
  {
    drink_menu_map.insert(make_pair("Soft Drink", 1.25));
    drink_menu_map.insert(make_pair("Sweet Tea", 1.15));
    drink_menu_map.insert(make_pair("Chocolate Milk", 1.35));
    drink_menu_map.insert(make_pair("Water", 0.25));
    drink_menu_map.insert(make_pair("Fruit Juice", 1.15));
    /*    
	  cout<<"Drink Menu:"<<endl;
	  for(map<string,double>::iterator it = drink_menu_map.begin(); it != drink_menu_map.end(); ++it)
	  cout<<"["<<it->first<<", "<<it->second<<"]"<<endl;
	  cout<<""<<endl;
    */
  }


};


#endif
