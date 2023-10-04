#include <stdio.h>
int f(int n,int b)
{
  if(n>b-1) f(n/b,b);
  if(n%b>=10)
  {
    printf("%c",n%b+55);
  }
  else
    printf("%d",n%b);
}
int main()
{
  int n,b;
  scanf("%d %d",&n,&b);
  f(n,b);
}