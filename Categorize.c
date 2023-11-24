#include<stdio.h>
int main()
{
    int HEIGHT;
    scanf("%d",&HEIGHT);
    if(HEIGHT<150)
    {
        printf("The person is Dwarf.");
    }
    else if(HEIGHT>150 && HEIGHT<=165)
    {
        printf("The person is average heighted.");
    }
    else if(HEIGHT>165 && HEIGHT<=195)
    {
    printf("The person is taller.");
    }
    else
    {
        printf("Abnormal height.");
    }
}