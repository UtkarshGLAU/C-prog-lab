#include<stdio.h>
void main()
{
 int a,b;
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("Enter the second number:");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("The value of a is %d\n",a);
 printf("The value of b is %d\n",b);
}
 
