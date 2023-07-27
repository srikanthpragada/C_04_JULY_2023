#include <stdio.h>


void print_reverse(int a[10])
{
  int i;

      for(i = 9; i >= 0; i --)
      {
          printf("%5d", a[i]);
      }

}

void main()
{

 int a[] = {1,2,4,5,5,6,7,8,8,9};

      print_reverse(a);
}
