// Take 5 names and display the largest
// Date : 25-JUL-2023

#include <stdio.h>

void main()
{
  char names[5][20]; // array of strings
  int i;

   for(i = 0; i < 5 ; i ++)
   {
     printf("Enter name :");
     gets(names[i]);
   }

   for(i = 0; i < 5 ; i ++)
   {
     puts(strupr(names[i]));
   }

}

