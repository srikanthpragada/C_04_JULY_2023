// Program to use nested loops
// Date : 17-JUL-2023

#include <stdio.h>

void main()
{
  int i,j;

     for(i = 1; i <= 5; i ++)
     {
        for(j = 1; j <= 5; j ++)
        {
           printf("%5d", i);
        }
        printf("\n");
     }
}

