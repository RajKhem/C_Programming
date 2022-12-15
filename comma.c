/*
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 15;
 
    printf("%d", (x, y));
    getchar();
    return 0;
} */


#include <stdio.h>
int main()
{
    int x = 10;
   // int y = (x++,++x,);
     int y = (x++);
     int z =(++x,x++);
    printf(" value of y:%d\n",y);
    printf(" value of z:%d\n",z);
    printf(" value of x:%d",x);
    //getch();
    return 0;
}
