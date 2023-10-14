#include<stdio.h> 
int main()
{
    int s=25300;
    scanf("%d",&s);
    int hrs=s/3600;
    s=s-(hrs*3600);
    int min=s/60;
    int sec=s%60;
    printf("H:M:S-%d:%d:%d",hrs,min,sec);
    return 0;
}