#ifndef __MAIN_COURSE_MENU_H__
#define __MAIN_COURSE_MENU_H__

#include "Menu.h"

class Main_Course_Menu : public Menu
{
 protected:

  map<string, double> main_menu_map;
  map<string,double>::iterator it_m;

 public:
  Main_Course_Menu() {};
  


  double order()
  {
    int num = rand() % 5; // generating a random number to determine the food choice.
    
    if( num == 0 ) 
      {
	it_m = main_menu_map.find("Tomato Soup"); // finding tomato soup in map.
	
	if( it_m != main_menu_map.end() )
	  cout<<"Order is: "<<it_m->first<<" for: $"<<it_m->second<<endl; // print out order
	return it_m->second;
      }

    if( num == 1 ) 
      {
	it_m = main_menu_map.find("Hamburger"); // finding hamburger in map.
	
	if( it_m != main_menu_map.end() )
	  cout<<"Order is: "<<it_m->first<<" for: $"<<it_m->second<<endl; // print out order
	return it_m->second;
      }

    if( num == 2 ) 
      {
	it_m = main_menu_map.find("Corn Dog"); // finding corn dog in map.
	
	if( it_m != main_menu_map.end() )
	  cout<<"Order is: "<<it_m->first<<" for: $"<<it_m->second<<endl; // print out order
	return it_m->second;
      }	

    if( num == 3 ) 
      {
	it_m = main_menu_map.find("Chicken Strips"); // finding chicken strips in map.
	
	if( it_m != main_menu_map.end() )
	  cout<<"Order is: "<<it_m->first<<" for: $"<<it_m->second<<endl; // print out order
	return it_m->second;
      }

    if( num == 4 ) 
      {
	it_m = main_menu_map.find("Grilled Cheese"); // finding grilled cheese in map.
	
	if( it_m != main_menu_map.end() )
	  cout<<"Order is: "<<it_m->first<<" for: $"<<it_m->second<<endl; // print out order
	return it_m->second;
      }

    return 0;
    
  }



  void set_menu()
  {
    main_menu_map.insert(make_pair("Tomato Soup", 1.55));
    main_menu_map.insert(make_pair("Hamburger", 2.55));
    main_menu_map.insert(make_pair("Corn Dog", 3.55));
    main_menu_map.insert(make_pair("Chicken Strips", 3.55));
    main_menu_map.insert(make_pair("Grilled Cheese", 2.55));
    cout<<"Main Course:"<<endl;
    for(map<string,double>::iterator it = main_menu_map.begin(); it != main_menu_map.end(); ++it)
      cout<<"["<<it->first<<", "<<it->second<<"]"<<endl;
  }


};


#endif
