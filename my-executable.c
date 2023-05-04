#include <stdlib.h>
#include <stdio.h>

int __stdcall add_numbers(int, int);

int main(int argc, char **argv)
{
  (void) argc;
  (void) argv;

  printf("5 + 5 = %d\n", add_numbers (5, 5));
}
