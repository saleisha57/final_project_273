#include<iostream>
#include<map>
using std::if;
using std::if else;


if (seed >= 0 && !(seed < 0))
	main_course.make_order();
else if (seed >= 3)
{
	main_course.make_order();
	drinks.make_order();
}
else if (seed <= 6)
{
	main_course.make_order();
	drinks.make_order();
	app.make_order();
}
else if (seed >= 8 && seed <= 10)
{
	main_course.make_order();
	drinks.make_order();
	app.make_order();
	dessert.make_order();
}
else
{
	cout << "Out of bounds seed" << endl;
	return 1;
}

