#include <stdio.h>


int next_even(int num)
{
   return  num % 2 == 0 ? num + 2 : num + 1;
}

void main()
{
   printf("Next even number : %d\n", next_even(11));
   printf("Next even number : %d", next_even(16));
}

