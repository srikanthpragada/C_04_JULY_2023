// Recursion

#include <stdio.h>

void reverse(int n)
{
   if (n > 0)
   {
       printf("%d",n);
       reverse(n - 1);  // recursion
   }
}

void print_reverse(int n)
{
   if (n > 0)
   {
       printf("%d", n % 10);
       print_reverse(n / 10);
   }
}

void main()
{
    //reverse(5);
    print_reverse(123);

}
