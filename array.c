#include <stdio.h>

int main(void)
{
  int arr[] = { 1, 2, 3 };
  printf("array   : %p\n", arr);
  for (int i = 0; i < 3; i++) {
    printf("array[%d]: %p\n", i, &arr[i]);
  }
  return 0;
}
