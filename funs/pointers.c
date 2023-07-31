// Understanding Pointer

#include <stdio.h>


void main()
{
   int n = 10;
   int * p;


     p = &n;

     printf("%d ", n);
     printf("%d ", *p);

}
