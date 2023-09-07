#include <stdio.h>
int main()
{
  int a=0, l=0, i=0, cnt=0, n[100]={}, c[300]={};
  scanf("%d %d",&a,&l);
  for(i=0;i<a;i++)
    {
      scanf("%d",&n[i]);
      c[n[i]]++;
    }
  for(i=0;i<300;i++)
    {
      while(c[i]>0)
      {
        printf("%d ",i);
        c[i]--;
        cnt++;
        if(cnt==l)
        {
          printf("\n");
          cnt=0;
        }
      }
    }
  return 0;
}