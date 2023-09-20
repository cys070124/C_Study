#include <stdio.h>
long long int f(int n,int k)
{
  if(n==1) return n;
  else if(n==-1&&k%2==0) return 1;
  else if(n==-1&&k%2==1) return -1;
  else if(k==0) return 1;
  else return n*f(n,k-1);
}
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  printf("%lld",f(n,k));
  return 0;
}