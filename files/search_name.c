// Search for a name in names.txt

#include <stdio.h>

void main()
{
   FILE * fp;
   char search_name[30], name[30], *p;
   int found = 0;


      fp = fopen("names.txt", "rt");
      if(fp == NULL)
      {
          printf("Sorry! Could not open file!");
          exit(1);
      }

      printf("Enter search name :");
      gets(search_name);

      while(1)
      {
          p = fgets(name, 30, fp);  // read a line of 30 chars
          if(p == NULL)  // EOF
            break;

          // remove \n at the of the line
          name[strlen(name) - 1] = '\0';

          if(stricmp(search_name, name) == 0)
          {
              printf("Found!");
              found = 1;
              break;
          }
      }

      if(!found)
         printf("Sorry! Name not found!");

      fclose(fp);
}
