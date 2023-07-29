// Function declaration  and definition

#include <stdio.h>

// Function declaration or Prototype declaration
float avg(int, int);

void main()
{
 float f;

    f = avg(10, 15);
    printf("%f", f);

}


// function definition
float avg(int a, int b)
{
   return (a + b) / 2.0;
}
