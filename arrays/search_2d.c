// Search in 2d array
// Date : 20-JUL-2023

#include <stdio.h>

void main()
{
   int a[5][5];
   int r, c, sn, found = 0;

      srand(time(0));
      for(r = 0; r < 5; r ++)
      {
         for(c = 0; c < 5; c ++)
         {
             a[r][c] = rand()  % 100;
             printf("%5d", a[r][c]);
         }
         printf("\n");
      }

      printf("Enter search number :");
      scanf("%d",&sn);

      for(r = 0; r < 5 && !found; r ++)
      {
         for(c = 0; c < 5; c ++)
         {
              if(a[r][c] == sn)
              {
                 printf("Found at %d, %d", r,c);
                 found = 1;
                 break;
              }
         }
      }

      if(!found)
        printf("Not found!");

}

