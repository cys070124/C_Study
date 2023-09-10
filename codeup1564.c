#include <stdio.h>

int a, b;

int gcd(int a,int b)
{
  return (b)?gcd(b,a%b):a;
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}