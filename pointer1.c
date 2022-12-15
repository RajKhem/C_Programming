#include<stdio.h>
#include<conio.h>
int main()
{
	int a=7;
	int*p;
	p=&a;

	printf("value of a is:%d \n",a);
	printf("address of a is:%d \n",&a);
	printf("address of a using p is:%d \n",p);
	printf("value of a using pointer p is: %d \n",*p);
printf("own address of p is:%d \n",&p);
	getch();
	return 0;
}


