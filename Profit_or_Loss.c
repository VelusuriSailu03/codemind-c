#include<stdio.h>
int main()
{
    int s,v;
    scanf("%d%d",&s,&v);
    if(v>s)
    {
        printf("Profit");
    }
    else if(s>v)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit and No Loss");
    }
}