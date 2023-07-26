

#include <stdio.h>

// function to print type of char
void print_char_type(char ch)
{
    if(isalpha(ch))
         printf("Alphabet");
    else
        if(isdigit(ch))
          printf("Digit");
        else
          printf("Other");
}

void main()
{

    print_char_type('a');

}
