// Program to take a numbers and display whether it is prime
// Date : 15-JUL-2023

#include <stdio.h>

void main()
{
  int n, i, prime = 1;

       printf("Enter number :");
       scanf("%d",&n);

       for(i = 2; i <= n/2 ; i++)
       {
            if(n % i == 0)
            {
                printf("Not a prime number!");
                prime = 0;
                break;
            }
       }

       if(prime)
         printf("Prime number!");


}

