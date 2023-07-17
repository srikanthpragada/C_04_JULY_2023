// Take char and display whether it is upper
// Date : 17-JUL-2023

#include <stdio.h>

void main()
{
   char ch;

     printf("Enter char :");
     ch = getche();

     if(ch >= 'A'  && ch <= 'Z')
         printf("\nUppercase");
     else
         printf("\nNot uppercase");
}

