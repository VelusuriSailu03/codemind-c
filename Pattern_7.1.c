#include<stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
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