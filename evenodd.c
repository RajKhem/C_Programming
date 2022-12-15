#include<stdio.h>
#include<conio.h>

int main()
{
    int a[5],i;
    int even=0,odd=0;

    printf("enter the array elements:\n");

    for ( i = 0; i <=4; i++)
    {
        scanf("%d",&a[i]);
    }
     

    for (i = 0; i <=4; i++)
    {
    if (a[i]%2==0)
    {
   even=even+1;
    }
     else{
     odd=odd+1;
 }
    } 

  for ( i = 0; i <=4; i++)
if (a[i]%2==0) 
   printf("even are %d \n",a[i]);
    else
    printf("odd are %d \n",a[i]);
    
printf("\n");
printf("total even number %d \n",even);
printf("total odd number %d \n",odd);
      
}