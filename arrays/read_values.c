// Create an array of 10 ints and read values from keyboard
// Date : 18-JUL-2023

#include <stdio.h>

void main()
{
   int a[5];
   int i;


      for(i = 0; i < 5; i ++)
      {
         printf("Enter a number :");
         scanf("%d", &a[i]);
      }

      for(i = 0; i < 5; i ++)
      {
         printf("%5d", a[i]);
      }

}

