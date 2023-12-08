#include<stdio.h>
int main()
{
    int N,f=0,s=1,next,i;
    scanf("%d%d%d",&N,&f,&s);
    for(i=1;i<=N;i++)
    {
        printf("%d ",f);
        next=f+s;
        f=s;
        s=next;
    }
    
}