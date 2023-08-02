// Structures and functions

#include <stdio.h>


struct circle
{
  int x, y, radius;
};

void print(struct circle c)
{
    printf("Circle at %d,%d coordinates with %d radius", c.x, c.y, c.radius);
}

float area(struct circle c)
{
    return 3.14 * c.radius * c.radius;
}

struct circle max(struct circle c1, struct circle c2)
{
    return c1.radius > c2.radius ? c1 : c2;
}

int equal(struct circle c1, struct circle c2)
{
    return c1.x == c2.x && c1.y == c2.y && c1.radius == c2.radius;
}

void main()
{
  struct circle c1 = {10,10,15};  // initializing struct
  struct circle c2 = {20,20,10};
  struct circle big;

    //printf("Enter x,y and radius :");
    //scanf("%d%d%d", &c.x, &c.y, &c.radius);

    print(c1);

    printf("\nArea = %f\n", area(c1));

    big = max(c1,c2);

    print(big);

    printf("\n%d", equal(c1,c2));
    printf("\n%d", equal(c1,big));

}
