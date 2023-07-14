// Program to take a number and display sum of numbers from 1 to n
// Date : 14-JUL-2023

#include <stdio.h>

void main()
{
  int total=0,n,i;

     printf("Enter number :");
     scanf("%d",&n);

     for(i = 1; i <= n; i++)
     {
         total = total + i;
     }

     printf("Total = %d", total);
}

