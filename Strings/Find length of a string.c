#include <stdio.h>
#include <string.h>

int main()
{
  char str[] = "Arnab Dey";
  int x = strlen(str);
  printf("The length of the string is %d (including null character)", x + 1);
  return 0;
}