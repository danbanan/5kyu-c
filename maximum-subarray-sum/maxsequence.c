#include <stdlib.h>

int maxSequence(const int *array, size_t n)
{
  int max = 0;
  int tmp = 0;

  for(int i=0; i<n; i++)
    {
      int x = *(array + i);
      tmp = (tmp + x > 0) ? tmp + x : 0;
      max = (tmp > max) ? tmp : max;
    }

  return max;
}
