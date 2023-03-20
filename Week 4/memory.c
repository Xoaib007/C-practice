
#include <stdio.h>
#include <cs50.h>

int main() {
  int *x = malloc(3 * sizeof(int));
  
  if (x == null )
  {
    return 1;
  }
  
  x[0] = 1;
  x[1] = 2;
  x[2] = 3;
  
  free(x);
  
  return 0;
}


