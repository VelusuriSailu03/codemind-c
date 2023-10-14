#include<stdio.h>
#include<math.h>
int main()
{
    int a=2,b=3,h=4;
    scanf("%d%d%d",&a,&b,&h);
    float area=0.5*(a+b)*h;
    scanf("%f",&area);
    printf("%.4f",area);
    return 0;
}