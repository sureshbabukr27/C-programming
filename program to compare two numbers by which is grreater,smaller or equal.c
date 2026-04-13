#include<stdio.h>
int main()
{
     int a,b;
     printf("enter first number:");
     scanf("%d",&a);
     printf("enter second number:");
     scanf("%d",&b);
     if(a>b)
        printf("%d is greater than %d\n",a,b);
     else if(a<b)
        printf("%d is less than %d\n",a,b);
     else
        printf("both numbers are equal.\n");
     return 0;
}
