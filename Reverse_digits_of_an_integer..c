#include<stdio.h>
int main()
{
    int r,n,rev=0;
    scanf("%d%d",&n,&r);
    while(n!=0)
    {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
    }
    printf("%d",rev);
}