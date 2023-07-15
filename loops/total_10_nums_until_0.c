// Program to take 10 numbers or until 0 is given and display sum of numbers
// Date : 15-JUL-2023

#include <stdio.h>

void main()
{
  int total=0,n,i;

     for(i = 1; i <= 10; i++)
     {
         printf("Enter number [0 to stop] :");
         scanf("%d",&n);

         if(n == 0)
            break;

         total = total + n;
     }

     printf("Total = %d", total);
}

