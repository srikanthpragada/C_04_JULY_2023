// Take a string and print char and code
// Date : 25-JUL-2023

#include <stdio.h>

void main()
{
  char st[20];
  int i;

   printf("Enter a string :");
   gets(st);

   for(i = 0; st[i] != '\0'; i ++)
   {
       printf("%c  %d\n", st[i], st[i]);
   }
}

