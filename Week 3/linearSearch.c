#include <stdio.h>

int search(int array[], int n, int x);

int main() {
  int array[] = {2, 4, 0, 1, 9};
  int x = 2;
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}

int search(int array[], int n, int x)
{
  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}
