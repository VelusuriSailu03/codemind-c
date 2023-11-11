#include<stdio.h>
int main()
{
    int i=1,N;
    scanf("%d",&N);
    while(i<=N)
    {
        if(N%i==0)
        {
            printf("%d ",i);
        }
         i++;
    }
}