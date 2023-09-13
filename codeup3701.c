#include <stdio.h>
int main()
{
  unsigned long long n[51][51]={};
  int i=0,j=0,a=0;
  n[1][1]=1;
  scanf("%d",&a);
  if(i==1)
  {
    printf("1");
  }
  else
  {
    for(i=2;i<a+1;i++)
    {
      for(j=1;j<a+1;j++)
      {
        n[i][j]=n[i-1][j-1]+n[i-1][j];
      }
    }
    for(i=1;i<a+1;i++)
    {
      for(j=1;j<a+1;j++)
      {
        if(n[i][j]!=0)
        {
          printf("%llu ",n[i][j]);
        }
      }
      printf("\n");
    }
  }
  return 0;
}