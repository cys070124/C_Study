#include <stdio.h>
int main()
{
  char a[100];
  gets(a);
  if(a[0]=='l'&&a[1]=='o'&&a[2]=='v'&&a[3]=='e'&&a[4]=='\0')
  {
    printf("I love you.");
  }
  return 0;
}