// Structures and arrays

#include <stdio.h>

struct time
{
  int h, m, s;
};

void print(struct time t)
{
   printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

int totalseconds(struct time t)
{
   return t.h * 3600 + t.m * 60 + t.s;
}

int equal(struct time t1, struct time t2)
{
   return totalseconds(t1) == totalseconds(t2);
}


void main()
{
  struct time t1 = {10, 5, 30};
  struct time times[5];
  int i;

    srand(time(0));
    for(i = 0; i < 5; i ++)
    {
      times[i].h = rand() % 24;
      times[i].m = rand() % 60;
      times[i].s = rand() % 60;
      print(times[i]);
      printf("\n");
    }


}
