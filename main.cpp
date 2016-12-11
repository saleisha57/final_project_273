#include "util.h"
#include "Cycle.h"

int main()
{
  srand(time(0));

  bool again = true;
  Cycle c;
  
  while(again)
    {
      c.complete_a_cycle(); //Running the simulation

      again = go_again();
    }

  return 0;
}
