#include "util.h"
#include "Cycle.h"

int main()
{
  srand(time(0)); //Set program time.

  bool again = true;
  Cycle c;
  
  while(again) //While again, run simulation.
    {
      c.complete_a_cycle(); //Running the simulation
      again = go_again();   //Ask the user if they want to go again.
    }

  return 0;
}
