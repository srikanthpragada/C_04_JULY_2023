#include <stdio.h>

// Function declaration
int iseven(int);

void main()
{

 int v;

    v = iseven(11);
    printf("%d ", v);

    if(iseven(10))
        printf("Even");
    else
        printf("Odd");


}

int iseven(int n)
{
   //return n % 2 == 0 ? 1 : 0;

   if(n % 2 == 0)
     return 1;
   else
     return 0;
}
