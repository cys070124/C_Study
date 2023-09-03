#include <stdio.h>
int main()
{
  int n=0,k=0,i=0,j=0;
  scanf("%d %d",&n,&k);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
        {
          if(i==1||i==n)
          {
            printf("*");
          }
          else
          {
            if(j==1||j==n)
            {
              printf("*");
            }
            else
            {
              if((i+j)%k==1||k==1)
              {
                printf("*");
              }
              else
              {
                printf(" ");
              }
            }
          }
        }
      printf("\n");
    }
  return 0;
}
