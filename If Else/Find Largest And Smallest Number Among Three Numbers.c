#include <stdio.h>
// Find Largest And Smallest Number Among Three Numbers
int main()
{
  int a, b, c;
  printf("Enter Three Numbers\n");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c)
  {
    if (b > c)
      printf("First Number Is Largest and Third Number Is Smallest");
    else
      printf("First Number Is Largest And Second Number Is Smallest");
  }
  if (b > a && b > c)
  {
    if (a > c)
      printf("Second Number Is Largest And Third Number Is Smallest");
    else
      printf("Second Number Is Largest And First Number Is Smallest");
  }
  else if (c > a && c > b)
  {
    if (b > a)
      printf("Third Number Is Largest And First Number Is Smallest");
    else
      printf("Third Number Is Largest And Second Number Is Smallest");
  }
  return 0;
}
