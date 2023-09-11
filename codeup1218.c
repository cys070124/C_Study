#include <stdio.h>
int main()
{
  int a=0,b=0,c=0,t=0;
  scanf("%d %d %d",&a,&b,&c);
  if(a>c)
  {
    t=c;
    c=a;
    a=c;
  }
  else if(b>c)
  {
    t=c;
    c=b;
    b=c;
  }
  if(a+b>c)
  {
    if(a==b||b==c||c==a)
    {
      if(a==b&&a==c)
      {
        printf("정삼각형");
      }
      else
      {
        printf("이등변삼각형");
      }
    }
    else if(a*a+b*b==c*c)
    {
      printf("직각삼각형");
    }
    else
    {
      printf("삼각형"); 
    }
  }
  else
  {
    printf("삼각형아님");
  }
  return 0;
}