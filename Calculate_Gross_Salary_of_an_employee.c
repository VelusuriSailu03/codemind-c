#include<stdio.h>
int main()
{
    float bs,hra,da,pf,gs;
    scanf("%f%f%f",&bs,&hra,&da);
     pf=bs*(12/100.0);
     gs=bs+hra+da+pf;
     printf("%.2f
",pf);
     printf("%.2f",gs);
}