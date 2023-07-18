// Print even numbers of an array
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
        printf("%5d", a[i]);
      }

      printf("\nEven Numbers : ");
      for(i = 0; i < 10; i ++)
      {
         if(a[i] % 2 == 0)
           printf("%5d", a[i]);
      }

}

