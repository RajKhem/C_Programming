#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i,min,max;

	printf("enter the elements:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nElements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d \n",a[i]);
	
	}
	
	min=a[0];
	for(i=0;i<5;i++)
	{ 
		if(a[i]<min)
		{
		min=a[i]; 
		}
	}
		
		max=a[0];
	for(i=0;i<5;i++)
	{ 
		if(a[i]>max)
		{
		max=a[i];
		}
	}
	
	printf("\nThe minimum value is:%d \n",min);
	printf("The maximum value is:%d",max);
}
