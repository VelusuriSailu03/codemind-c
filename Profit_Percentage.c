#include<stdio.h>
#include<math.h>
int main()
{
    float x=500,y=1000;
    scanf("%f%f",&x,&y);
    float profit=(y-x)*100/x;
    printf("%.2f",profit);
    return 0;
}