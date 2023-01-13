#include<stdio.h>
void main(){
 int a,b,c;
 printf("Enter the 1st no.-");
 scanf("%d",&a);
 printf("Enter the 2nd no.-");
 scanf("%d",&b);
 printf("Value of ist and 2nd no. before swapping is %d,%d\n",a,b);
 c=a;
 a=b;
 b=c;
 printf("The value of 1st no. is %d\n",a);
 printf("The value of 2nd no. is %d\n",b);
}

