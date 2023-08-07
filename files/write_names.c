// Write names into file - names.txt


#include <stdio.h>

void main()
{
   FILE * fp;
   char name[30];

      fp = fopen("names.txt", "wt");

      if(fp == NULL)
      {
          printf("Sorry! Could not create file!");
          exit(1);
      }


      while(1)
      {
          printf("Enter name [end to stop] :");
          gets(name);

          if(stricmp(name, "end") == 0)
                break;

          fprintf(fp,"%s\n", name);
      }

      fclose(fp);

}
