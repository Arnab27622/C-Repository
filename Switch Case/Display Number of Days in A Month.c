#include <stdio.h>
// Display Number Of Days In a Given Month
int main()
{
  int month;
  printf("Enter Month\n");
  scanf("%d", &month);
  switch (month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    printf("31 Days in A Month\n");
    break;
  case 2:
    printf("28 Days In a Month\n");
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    printf("30 Days In a Month\n");
    break;
  }
  return 0;
}
