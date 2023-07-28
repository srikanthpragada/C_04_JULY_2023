#include <stdio.h>


int smallest_factor(int n)
{
  int i;

      for(i = 2; i <= n/2; i ++)
      {
          if (n % i == 0)
              return i;
      }

      return n;
}

void main()
{

  printf("Smallest Factor : %d", smallest_factor(133));

}
