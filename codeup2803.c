#include <stdio.h>
#include <math.h>
int main()
{
    int x1, y1, d1, x2, y2, d2, re;
    double d;
    scanf("%d %d %d",&x1,&y1,&d1);
    scanf("%d %d %d",&x2,&y2,&d2);
    d = sqrt(pow((x1 - x2), 2)+pow((y1-y2),2));
    re = d1 + d2;

    if(d - re < 0)
        printf("overlapped");
    else
        printf("not overlapped");
    return 0;
}