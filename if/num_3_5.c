// Program to print grade based on whether number is divisible by 3 and 5
// Date : 12-JUL-2023

#include <stdio.h>

void main()
{
  int num;

     printf("Enter number :");
     scanf("%d", &num);

     if(num % 3 == 0 && num % 5 == 0)
          printf("A");
     else
        if (num % 5 == 0)
            printf("B");
        else
            if(num % 3 == 0)
               printf("C");
            else
               printf("D");
}

