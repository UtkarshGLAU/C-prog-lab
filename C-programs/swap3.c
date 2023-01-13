#include<stdio.h>
void main(){

int a,b;
printf("Enter 1st value-");
scanf("%d",&a);
printf("Enter 2nd value-");
scanf("%d",&b);

b=a^b;
a=a^b;
b=a^b;
printf("The value of 1st is %d and 2nd is %d\n",a,b);
}
