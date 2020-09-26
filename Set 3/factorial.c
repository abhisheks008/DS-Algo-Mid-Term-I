#include <stdio.h>
int main()
{
  int n, i, fact = 1;
  printf("Enter a number to calculate its factorial : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    fact = fact * i;
  printf("\nFactorial of %d is %d\n", n, fact);
  return 0;
}
