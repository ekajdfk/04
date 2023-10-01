#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a;
  
  printf("input seconds : ");
  scanf("%i", &a);
  
  printf("The time for %i seconds is %i : %i : %i \n", a, a/60/60, (a-3600)/60, (a-3600)%60);
      
  system("PAUSE");	
  return 0;
}
