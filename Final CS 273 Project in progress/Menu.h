#ifndef __MENU_H__
#define __MENU_H__
#include<string>
using std::string;
class Menu
{
protected:
	double price;
	string food_options;

public:

	Menu() {};
	// virtual function to be used by children menus
	virtual void make_order() = 0;

	void SetPrice(double number)
	{
		price = number;
	};


};



#endif