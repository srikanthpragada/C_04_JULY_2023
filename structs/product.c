#include <stdio.h>

struct product
{
  char name[30];
  int price, qoh;
};


void main()
{
  struct product p1;

     strcpy(p1.name,"Product1");
     p1.price = 1000;
     p1.qoh = 10;

}
