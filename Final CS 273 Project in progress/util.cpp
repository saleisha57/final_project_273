#include "util.h"
#include "base.h"

bool go_again()
{
  char resp[100];

  cout<<"Go again? yes or no? ";
  cin>>resp;

  return strcmp(resp, "yes") == 0;
}
