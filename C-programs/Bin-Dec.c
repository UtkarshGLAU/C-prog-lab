#include<stdio.h>
#include<math.h>
void main(){
int a,n,b=0,i=0;
printf("Enter the BINARY Number- ");
scanf("%d",&n);
while(n>0){
a=n%10;
n/=10;
b=b+pow(2,i)*a;
i++;}
printf("DECIMAL is %i\n",b);
}
