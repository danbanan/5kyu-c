#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "test.h"

char *array_to_string(const int *arr, size_t n, size_t digits)
{
  const int num_of_commas = n - 1;
  const int successive_spaces = num_of_commas;
  const int curly_brackets = 2;
  const int num_of_chars = digits + curly_brackets
                         + num_of_commas + successive_spaces;

  char *number = malloc(digits + 1);
  char *dest = malloc(num_of_chars);

  memset(dest, 0, num_of_chars + 1);
  strcat(dest, "{");

  for (int i=0; i<n; i++)
    {
      memset(number, 0, digits + 1);
      sprintf(number, "%d", *(arr + i));
      strcat(dest, number);

      if (i<n-1)
        strcat(dest, ", ");
    }

  strcat(dest, "}");
  free(number);

  return dest;
}


int compare_integer_arrays(const int *a, const int *b, size_t n)
{
  int eq = 1;
  while (n-- && eq)
    eq = (*(a + n) == *(b + n)) ? 1 : 0;

  return eq;
}

int compare_integer_2d_arrays(const int *a, const int *b, size_t n)
{
  int eq = 1;
  while (n-- && eq)
    eq = compare_integer_arrays((int *)(a + n * 2), (int *)(b + n * 2), 2);

  return eq;
}
