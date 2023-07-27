

#include <stdio.h>


void print_factors(int num)
{
 int i;

     for(i = 2; i <= num/2; i ++)
        if(num % i == 0)
             printf("%d ", i);
}

void main()
{

   print_factors(125);

}
