#ifndef __DESSERT_MENU_H__
#define __DESSERT_MENU_H__

#include "Menu.h"

class Dessert_Menu : public Menu
{
 protected:

  map<string, double> dessert_menu_map;
  map<string,double>::iterator it_a;

 public:
  Dessert_Menu() {};
  

  double order()
  {
    int num = rand() % 5; // generating a random number to determine the food choice.
    
    if( num == 0 ) 
      {
	it_a = dessert_menu_map.find("Cake"); // finding tomato soup in map.
	
	//if( it_a != dessert_menu_map.end() )
	//cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	//cout<<""<<endl;
	return it_a->second;
      }

    if( num == 1 ) 
      {
	it_a = dessert_menu_map.find("Pie"); // finding hamburger in map.
	
	//if( it_a != dessert_menu_map.end() )
	// cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	//	cout<<""<<endl;
	return it_a->second;
      }

    if( num == 2 ) 
      {
	it_a = dessert_menu_map.find("Cookie"); // finding corn dog in map.
	
	//if( it_a != dessert_menu_map.end() )
	//cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	//cout<<""<<endl;
	return it_a->second;
      }	

    if( num == 3 ) 
      {
	it_a = dessert_menu_map.find("Ice Cream"); // finding chicken strips in map.
	
	//if( it_a != dessert_menu_map.end() )
	//cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	//cout<<""<<endl;
	return it_a->second;
      }

    if( num == 4 ) 
      {
	it_a = dessert_menu_map.find("Creme Brulee"); // finding grilled cheese in map.
	
	//if( it_a != dessert_menu_map.end() )
	//cout<<"Order is: "<<it_a->first<<" for: $"<<it_a->second<<endl; // print out order
	//cout<<""<<endl;
	return it_a->second;
      }

    return 0;
    
  }



  void set_menu()
  {
    dessert_menu_map.insert(make_pair("Cake", 1.15));
    dessert_menu_map.insert(make_pair("Pie", 0.85));
    dessert_menu_map.insert(make_pair("Cookie", 0.55));
    dessert_menu_map.insert(make_pair("Ice Cream", 1.15));
    dessert_menu_map.insert(make_pair("Creme Brulee", 1.35));
    /*    
	  cout<<"Dessert Menu:"<<endl;
	  for(map<string,double>::iterator it = dessert_menu_map.begin(); it != dessert_menu_map.end(); ++it)
	  cout<<"["<<it->first<<", "<<it->second<<"]"<<endl;
	  cout<<""<<endl;
    */  
}


};


#endif
