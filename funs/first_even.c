#include <stdio.h>


int first_even(int a[10])
{
  int i;

      for(i = 0; i < 10; i ++)
      {
          if (a[i] % 2 == 0)
               return a[i];
      }

      return -1;
}

void main()
{
 int arr[] = {1,5,90,11,13,19,99,33,57,99};
 int result;


  result = first_even(arr);

  if(result == -1)
     printf("Sorry! No even number found!");
  else
     printf("First even number : %d", result);

}
