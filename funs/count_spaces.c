#include <stdio.h>


int count_spaces(char st[50])
{
  int i, count = 0;

      for(i = 0; st[i] != '\0'; i ++)
      {
          if (st[i] == ' ')
               count ++;
      }

      return count;
}

void main()
{

  printf("No. of spaces : %d", count_spaces("This   is   okay"));

}
