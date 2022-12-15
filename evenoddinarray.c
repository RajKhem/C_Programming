#include<stdio.h>
int main()
{
   int n,i,a[20],even=0,odd=0;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter array elements: \n");
   for(i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }

   printf("\nEven numbers in the array are: \n");
   for(i=0; i<n; i++)
   {
     if(a[i]%2==0)
     {
     	even++;
     printf("%d ", a[i]);
	 }
     
   }

   printf("\nOdd numbers in the array are: \n");
   for(i=0; i<n; i++)
   {
     if(a[i]%2!=0)
     {
     	odd++;
     	printf("%d ", a[i]);
	 }
     
   }
   
   printf("\nEven count:%d and \nOdd count:%d",even,odd);

   return 0;
}
