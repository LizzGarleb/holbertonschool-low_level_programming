#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
  unsigned int i;
  char *p;
  if (size == 0)
  {
    return (NULL);
  }

  p = malloc(sizeof(char) * size);
  
  while (i <= size)
  {
    p[i] = c;
    i++;
  }
  return(p);
}
