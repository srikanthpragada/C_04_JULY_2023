// Take a string and print without spaces
// Date : 24-JUL-2023

#include <stdio.h>

void main()
{
  char st[20];
  int i;

   printf("Enter string :");
   gets(st);

   for(i = 0; st[i] != '\0'; i ++)
   {
      if(st[i] != 32)
         putch(st[i]);
   }
}

