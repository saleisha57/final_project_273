#include "Staff.h"
#include "Cook.h"

int main()
{
  int min, max;

  std::cout<<"Enter min time for cooks:"<<std::endl;
  std::cin>>min;

  std::cout<<"Enter max time for cooks:"<<std::endl;
  std::cin>>max;

  Cook c(max, min);

}
