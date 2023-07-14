// Program to take a numbers and display in reverse
// Date : 14-JUL-2023

#include <stdio.h>

void main()
{
  int n, digit;

       printf("Enter number :");
       scanf("%d",&n);

       while(n > 0)
       {
         digit = n % 10;   // take rightmost digit
         printf("%d", digit);
         n = n / 10;       // remove rightmost digit
       }
}

