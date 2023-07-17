// Program to take 5 numbers and display the largest
// Date : 17-JUL-2023

#include <stdio.h>

void main()
{
  int n, i, ln = 0;

     for(i = 1; i <= 5; i ++)
     {
         printf("Enter number :");
         scanf("%d",&n);

         if(n > ln)
           ln = n;
     }

     printf("Largest = %d", ln);
}

