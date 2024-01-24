#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        a=2*i;
        if(a%2==0)
        {
            printf("%d ",a);
        }
    }
}