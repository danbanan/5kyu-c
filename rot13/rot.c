#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *rot13 (const char *src)
{
  size_t size = strlen(src) + 1;
  char *s = malloc(size);

  memcpy(s, src, size);

  char *tmp = s;

  for (int i=0; i<size-1; i++)
    {
      char c = *tmp;

      if (c >= 'A' && c <= 'Z')
        {
          c = 'A' + ((c + 13 - 'A') % 26);
        }
      else if (c >= 'a' && c <= 'z')
        {
          c = 'a' + ((c + 13 - 'a') % 26);
        }

      *tmp = c;
      tmp++;
    }

  return s;
}
