// Program to take 5 numbers and display sum of numbers
// Date : 14-JUL-2023

#include <stdio.h>

void main()
{
  int total=0,n,i;

     for(i = 1; i <= 5; i++)
     {
         printf("Enter number :");
         scanf("%d",&n);

         total = total + n;
     }

     printf("Total = %d", total);
}

