#include<stdio.h>
#include<conio.h>
long factorial();

long factorial(int n)
{
    long fact=1;
    int i;
    for(i=1;i<=n;i++)
    fact*=i;
    return fact;
}

 int main(){
     long f1=1,f2=1,f3=1,comb;
     int n,r;
     printf("enter n and r \n");
     scanf("%d%d",&n,&r);
f1=factorial(n);
f2=factorial(n-r);
f3=factorial(r);
printf("f1= %ld\n",f1);
printf("f2= %ld\n",f2);
printf("f3= %ld\n",f3);
comb=(f1/(f2*f3));
printf("the combination is:%ld",comb);
getch();
return 0;

 }
