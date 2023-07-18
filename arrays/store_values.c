// Create an array of 10 ints and store values
// Date : 18-JUL-2023

#include <stdio.h>

void main()
{
   int squares[10];
   int i;


      for(i = 0; i < 10; i ++)
      {
          squares[i] = i*i;
          printf("%5d", squares[i]);
      }


}

