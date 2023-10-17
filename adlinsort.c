#include "stdio.h"
int main()
{
  int n;
  printf("Enter the number");
  scanf("%d", &n);

  int sum, fact, d, f;
  for (int i = 1;i<n; i++)
  {
    sum = 0;
    fact = 1;
    f = i;
    while (i > 0)
    {
      fact=1;
      d = i % 10;
      while (d > 0)
      {
        fact *= d;
        d--;
      }
      sum += fact;
      i /= 10;
    }
    if (n == sum)
    {
      printf("%d", f);
      break;
    }
  }
  return 0;
}