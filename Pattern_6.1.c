#include<stdio.h>
int main()
{
    int n,a,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(a=1;a<=n-i;a++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}