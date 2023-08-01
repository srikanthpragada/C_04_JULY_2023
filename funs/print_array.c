#include <stdio.h>


void print_array(int a[], int len)
{
  int i;

      for(i = 0; i < len; i ++)
      {
          printf("%5d", a[i]);
      }
}

void fill_array(int a[], int len)
{
  int i;

      srand(time(0));
      for(i = 0; i < len; i ++)
      {
          a[i] = rand() % 100;
      }
}


void main()
{

 int a[] = {1,2,4,5,5,6,7,8,8,9};
 int b[5];

      print_array(a, 10);
      printf("\n");
      fill_array(b, 5);
      print_array(b, 5);

}
