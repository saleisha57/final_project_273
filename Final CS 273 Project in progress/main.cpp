#include "Restaurant.h"
#include "util.h"

int main()
{
  srand(time(0));

  Restaurant r;
  bool again = true;
  
  while(again)
    {
      r.run_sim(); //Running the simulation
      again = go_again();
    }

  return 0;
}
