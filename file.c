#include <stdio.h>

int main(void)
{
  FILE *file;
  file = fopen("test.md", "w");
  fprintf(file, "# Hello, world\n");
  fclose(file);
  return 0;
}
