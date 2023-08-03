// Structures and pointers

#include <stdio.h>

struct time
{
  int h, m, s;
};

void reset(struct time * p)
{
    p->h = p->m = p->s = 0;
}

void main()
{
  struct time t = {10, 5, 30};
  struct time * p;

  p = &t;

  printf("%d ", t.h);
  printf("%d ", (*p).h);
  printf("%d ", p->h);

  reset(&t);

  printf("%d:%d:%d", t.h, t.m, t.s);

}
