// Read marks from marks.dat

#include <stdio.h>

void main()
{
   FILE * fp;
   int marks, count;

      fp = fopen("marks.dat", "rb");

      if(fp == NULL)
      {
          printf("Sorry! Could not create file!");
          exit(1);
      }

      while(1)
      {
         // Returns no. blocks read successfully
         count = fread(&marks, sizeof(marks), 1, fp);
         if (count == 0) // EOF
            break;

         printf("%d ", marks);
      }

      fclose(fp);

}
