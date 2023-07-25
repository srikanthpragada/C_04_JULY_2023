// Take a string and check whether it is valid code (has 1 or more digits)
// Date : 24-JUL-2023

#include <stdio.h>

void main()
{
  char st[20];
  int i, found = 0;

   printf("Enter code :");
   gets(st);

   for(i = 0; st[i] != '\0'; i ++)
   {
      if(isdigit(st[i]))
      {
          printf("Valid Code!");
          found = 1;
          break;
      }
   }

   if(!found)
      printf("Not a valid code!");


}

