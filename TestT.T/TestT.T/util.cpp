#include "util.h"
#include "base.h"

bool go_again() //Asks the user if they want to go again.
{
  char resp[100];

  cout<<"Run simulation again? yes or no? ";
  cin>>resp;

  return strcmp(resp, "y") == 0; //strcmp the user's response and "yes".
}
