#include<stdio.h>
int main()
{
    int P,C,B,M,S;
    scanf("%d%d%d%d%d",&P,&C,&B,&M,&S);
    int Z=(P+C+B+M+S)/5;
    if(Z>=90)
    {
        printf("Grade A");
    }
    else if(Z>=80)
    {
        printf("Grade B");
    }
    else if(Z>=70)
    {
        printf("Grade C");
    }
    else if(Z>=60)
    {
        printf("Grade D");
    }
    else if(Z>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}