#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(y-x)
    {
        printf("%d",y-x);
    }
    else
    {
        printf("%d",x-y);
    }
    return 0;
}