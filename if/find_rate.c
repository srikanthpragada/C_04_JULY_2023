// Program to take day of week and find out rate
// Date : 13-JUL-2023

#include <stdio.h>

void main()
{
  int day, rate;

     printf("Enter day of week (1-7):");
     scanf("%d", &day);

     switch(day)
     {
        case 1 :
        case 2 :
        case 3 : rate = 100;
                 break;
        case 4 :
        case 5 : rate = 125;
                 break;
        case 6 : rate = 150;
                 break;
        default: rate = 200;
     }

     printf("Rate = %d", rate);
}

