// Testing pin
// Date : 18-JUL-2023

#include <stdio.h>

void main()
{
   char ch;
   int i, count = 0;

      printf("Enter pin :");
      for(i = 1; i <= 6; i ++)
      {
          ch = getch();
          putch('*');
          if(isdigit(ch))
             count ++;
      }

      if(count == 6)
        printf("\nValid PIN");
      else
        printf("\nNot a valid PIN");
}

