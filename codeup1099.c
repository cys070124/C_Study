#include <stdio.h>
int main()
{
  int i,j,x=1,y=1,a[10][10]={};
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  if(a[x][y]==2)
  {
    a[x][y]=9;
  }
  else
  {
    while(1)
    {
      a[x][y]=9;
      if(a[x][y+1]==0)
      {
        y++;
      }
      else
      {
        if(a[x][y+1]==2)
        {
          a[x][y+1]=9;
          break;
        }
        else if(a[x+1][y]==0)
        {
          x++;
        }
        else
        {
          if(a[x+1][y]==2)
          {
            a[x+1][y]=9;
          }
          break;
        }
      }
    }
  }
  for(i=0;i<10;i++)
  {
    for(j=0;j<10;j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
