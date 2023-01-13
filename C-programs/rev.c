#include<stdio.h>

void main(){
long long int n,r=0,rem;
printf("Enter the Number");
scanf("%lld",&n);
while(n)
{rem=n%10;
r=r*10+rem;
n=n/10;}
printf("%lli",r);
}
