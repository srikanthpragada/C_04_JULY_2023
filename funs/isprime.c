#include <stdio.h>


int isprime(int n)
{
  int i;

      for( i = 2; i <= n/2; i ++)
      {
          if (n % i == 0)
              return 0; // not a prime
      }

      return 1;
}

void main()
{

    if(isprime(13))
        printf("Prime");
    else
        printf("Not prime");


}
