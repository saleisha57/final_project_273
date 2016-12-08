#ifndef __APPETIZER_MENU_H__
#define __APPETIZER_MENU_H__

#include "Menu.h"

class Appetizer_Menu : public Menu
{
 protected:

  map<string, double> appetizer_menu_map;
  map<string,double>::iterator it_a;

 public:
  Appetizer_Menu() {};
  

  double order()
  {
    int num = rand() % 5; // generating a random number to determine the food choice.
    
    if( num == 0 ) 
      {
	it_a = appetizer_menu_map.find("Potato Skin"); // finding tomato soup in map.
	
	if( it_a != appetizer_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }

    if( num == 1 ) 
      {
	it_a = appetizer_menu_map.find("Cheese Fries"); // finding hamburger in map.
	
	if( it_a != appetizer_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }

    if( num == 2 ) 
      {
	it_a = appetizer_menu_map.find("Salad"); // finding corn dog in map.
	
	if( it_a != appetizer_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }	

    if( num == 3 ) 
      {
	it_a = appetizer_menu_map.find("Bread Sticks"); // finding chicken strips in map.
	
	if( it_a != appetizer_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }

    if( num == 4 ) 
      {
	it_a = appetizer_menu_map.find("Fruit Cup"); // finding grilled cheese in map.
	
	if( it_a != appetizer_menu_map.end() )
	  cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	cout<<""<<endl;
	return it_a->second;
      }

    return 0;
    
  }



  void set_menu()
  {
    appetizer_menu_map.insert(make_pair("Potato Skin", 0.85));
    appetizer_menu_map.insert(make_pair("Cheese Fries", 0.75));
    appetizer_menu_map.insert(make_pair("Salad", 1.55));
    appetizer_menu_map.insert(make_pair("Bread Sticks", 0.65));
    appetizer_menu_map.insert(make_pair("Fruit Cup", 0.75));
    cout<<"Appetizer Menu:"<<endl;
    for(map<string,double>::iterator it = appetizer_menu_map.begin(); it != appetizer_menu_map.end(); ++it)
      cout<<"["<<it->first<<", "<<it->second<<"]"<<endl;
    cout<<""<<endl;
  }


};


#endif
