#include "Restaurant.h"
#include "util.h"

int main()
{
  Restaurant r;
  bool again = true;
  
  while(again)
    {
      r.run_sim(); //Running the simulation
      again = go_again();
    }

  return 0;
}
