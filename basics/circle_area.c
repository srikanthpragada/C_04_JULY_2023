// Program to take radius and calculate area
// Date : 08-JUL-2023

#include <stdio.h>

void main()
{
 float radius, area;

      printf("Enter radius :");
      scanf("%f", &radius);

      area = 3.14 * radius * radius;

      printf("Area of a circle with radius %8.2f is %8.2f", radius, area);
}
