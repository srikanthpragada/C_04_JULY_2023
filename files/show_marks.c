// Read student rollno and display marks
#include <stdio.h>

void main()
{
   FILE * fp;
   int marks, rollno, pos, count;

      fp = fopen("marks.dat", "rb");

      if(fp == NULL)
      {
          printf("Sorry! Could not create file!");
          exit(1);
      }

      while(1)
      {

        printf("Enter rollno [0 to stop]: ");
        scanf("%d", &rollno);

        if(rollno == 0)
            break;

        pos = (rollno - 1) * sizeof(int);

        // move file pointer to that position
        fseek(fp, pos, SEEK_SET);

        // read a block
        count = fread(&marks, sizeof(marks), 1, fp);
        if (count == 0) // EOF
          printf("Sorry! Rollno not found!\n");
        else
          printf("Marks : %d\n", marks);
      }

      fclose(fp);

}
