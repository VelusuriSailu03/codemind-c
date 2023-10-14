#include<stdio.h>
#include<math.h>
int main()
{
    int m=4,n=8,x=5,y=7;
    scanf("%d%d%d%d",&m,&n,&x,&y);
    int max=(m*x)+(n*y);
    printf("%d",max);
    return 0;
}