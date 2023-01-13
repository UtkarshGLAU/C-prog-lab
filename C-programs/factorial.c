#include<stdio.h>
void main(){
int n,i,pro=1;
printf("Enter the Number");
scanf("%i",&n);
while(n>0){
pro=pro*n;
n-=1;
}
printf("Factorial of Number  is \t%i\n",pro);
}
