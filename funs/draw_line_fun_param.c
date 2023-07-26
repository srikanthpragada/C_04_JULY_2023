

#include <stdio.h>

// User-defined function
void draw_line(int len)
{
 int i;

     for(i = 1; i <= len ; i ++)
        putch('-');
}

void main()
{

     draw_line(30);
     printf("\nSrikanth Technologies\n");
     draw_line(20);

}
