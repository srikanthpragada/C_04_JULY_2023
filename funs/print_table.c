

#include <stdio.h>

// User-defined function
void print_table(int num, int len)
{
 int i;

     for(i = 1; i <= len ; i ++)
        printf("%3d * %2d = %5d\n", num, i, num * i);
}

void main()
{

   print_table(17, 10);
   print_table(25, 20);

}
