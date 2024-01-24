#include<stdio.h>
int main()
{
    int N,r,rev=0;
    scanf("%d",&N);
    while(N!=0)
    {
        r=N%10;
        rev=rev*10+r;
        N=N/10;
    }
    printf("%d",rev);
}