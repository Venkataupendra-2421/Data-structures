#include<stdio.h>
int main()
{
	int a[10],i;
	printf("Enter the values:");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even numbers are: \n");
	for(i=0;i<7;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	printf("Odd numbers are: \n");
	for(i=0;i<7;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d\n",a[i]);
		}
	}
	
}
