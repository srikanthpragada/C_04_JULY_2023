// Program to print cube of a number taken from user
// Date : 07-JUL-2023

#include <stdio.h>

void main()
{
 int num, cube;  // variables

      printf("Enter a number :");
      scanf("%d", &num);

      cube = num * num * num;

      printf("Cube of %d is %d", num, cube);
}
