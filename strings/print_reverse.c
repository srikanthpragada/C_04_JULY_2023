// Take a string and print it in reverse
// Date : 25-JUL-2023

#include <stdio.h>

void main()
{
  char st[20];
  int i;

   printf("Enter a string :");
   gets(st);

   // Go up to null char
   for(i = 0; st[i] != '\0'; i ++);


   // move from last char to first char
   for(i--; i >= 0; i --)
       putch(st[i]);
}

