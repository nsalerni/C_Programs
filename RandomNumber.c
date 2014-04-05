#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
  int num, i;
  srand(time(NULL));  // Seed ONCE

  for(i=0; i<100; ++i) // Loop 100 times for random numbers
    {
      num = rand();
      num = num % 50;
      printf("%d\n", num);
    }
}
