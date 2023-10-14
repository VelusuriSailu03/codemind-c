#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=(a+b);
    int d=(a-b);
    int e=(a*b);
    int f=(a/b);
    int g=(a%b);
    scanf("%d%d%d%d%d",&c,&d,&e,&f,&g);
    printf("Sum:%d
",c);
    printf("Difference:%d
",d);
    printf("Product:%d
",e);
    printf("Quotient:%d
",f);
    printf("Remainder:%d
",g);
    return 0;
}