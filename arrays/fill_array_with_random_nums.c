// Create an array of 10 ints and fill array with random numbers
// Date : 18-JUL-2023

#include <stdio.h>

void main()
{
   int a[10];
   int i;

      srand(time(0));
      for(i = 0; i < 10; i ++)
      {
          a[i] = rand()  % 100;
      }

      for(i = 0; i < 10; i ++)
      {
         printf("%d\n", a[i]);
      }

}

