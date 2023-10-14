#include<stdio.h>
int main()
{
    int side;
    scanf("%d",&side);
    int area=6*side*side,vol=side*side*side;
    scanf("%d%d",&area,&vol);
    printf("Surface area = %d and Volume = %d",area,vol);
    return 0;
}