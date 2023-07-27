#include <stdio.h>

// User-defined function
void draw_line(int len, char ch)
{
 int i;

     for(i = 1; i <= len ; i ++)
        putch(ch);
}

void main()
{

     draw_line(20,'-');
     printf("\nSrikanth Technologies\n");
     draw_line(30, '*');

}
