// Take a string on command line and count digits
// Date : 05-AUG-2023

#include <stdio.h>

void main(int argc, char * argv[])
{
  int i, count = 0;


   if(argc < 2)
   {
     printf("Sorry! Input string is missing!\n");
     printf("Please run it as follows:\n");
     printf(">count_digits  <string> \n");

     return;  // terminate main() and program
   }


   for(i = 0;  argv[1][i] != '\0'; i ++)
   {
      if(isdigit(argv[1][i]))
          count ++;
   }

   printf("Count = %d", count);
}

