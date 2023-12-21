#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
 int ser,flag=0;
 scanf("%d",&ser);
 for(i=0;i<n;i++)
	{
		{
			if(ser==a[i])
			{
			 flag=1;
			 break;
			}
		}
	}
	if(flag==1)
	{
	    printf("True");
	}
	else
	{
	    printf("False");
	}
}