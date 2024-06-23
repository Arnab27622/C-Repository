#include <stdio.h>
// Telephone Bill For Mr.X
int main()
{
  int noc, rental, tb;
  printf("Enter the number of calls\n");
  scanf("%d", &noc);
  rental = 250;
  if (noc < 0)
  {
    printf("Total Bill= 0");
  }
  else if (noc >= 0 && noc <= 100)
  {
    tb = rental + noc * (0.2);
    printf("Total Bill= %d", tb);
  }
  else if (noc > 100 && noc <= 200)
  {
    tb = rental + (100 * 0.2) + (noc - 100) * 0.3;
    printf("Total Bill= %d", tb);
  }
  else if (noc > 200)
  {
    tb = rental + (100 * 0.2) + (100 * 0.3) + (noc - 200) * 0.5;
    printf("Total Bill =%d", tb);
  }
  return 0;
}
