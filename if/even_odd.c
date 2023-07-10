// Program to whether number is even or odd
// Date : 10-JUL-2023

#include <stdio.h>

void main()
{
 int num;

      printf("Enter number :");
      scanf("%d", &num);

      if(num % 2 == 0)
         printf("Even");
      else
         printf("Odd");
}
