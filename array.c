#include<stdio.h>
int main()
{ 
    int n,i,even=0,odd=0,e[i],o[i];
    printf("enter a number for limit: ");
    scanf("%d",&n);

int a[n];
printf("enter %d array elements:\n",n);
for ( i = 0; i <n; i++)
{
  scanf("%d",&a[i]);
}
printf("you have entered:\t");
for ( i = 0; i<n; i++)
{
  printf("%d",a[i]);
}

for ( i = 0; i <n; i++)
{
  if(a[i]%2==0){
    e[i]=a[i];
    even++;
  
  }
  else{
    o[i]=a[i];
    odd++;
  
  }
  
}
printf("%d are even number.\n",e[i]);
printf("%d are odd number.\n",o[i]);
printf("total odd number:%d \n",odd);
printf("total even number:%d \n",even);
    return 0;
}
