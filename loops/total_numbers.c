// Program to take numbers until 0 is given and display sum of numbers
// Date : 15-JUL-2023

#include <stdio.h>

void main()
{
  int total=0,n;

     while(1)
     {
         printf("Enter number [0 to stop] :");
         scanf("%d",&n);

         if(n == 0)
            break;

         if(n < 0)
            continue;

         total = total + n;
     }

     printf("Total = %d", total);
}

