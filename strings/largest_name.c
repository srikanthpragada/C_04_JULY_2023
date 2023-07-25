// Take 5 names and display the largest
// Date : 25-JUL-2023

#include <stdio.h>

void main()
{
  char name[20], largest[20] = "";
  int i;

   largest[0] = '\0';  // empty string

   for(i = 1; i <= 5 ; i ++)
   {
     printf("Enter name :");
     gets(name);

     if(strcmp(name, largest) > 0)
          strcpy(largest, name);
   }

   puts(largest);

}

