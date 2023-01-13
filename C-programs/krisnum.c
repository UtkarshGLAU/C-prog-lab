#include<stdio.h>
void main(){
int n,c=0,rem,sum=0,m,o,fac;
printf("Enter the Number");
scanf("%i",&n);
m=n;
while(n>0){rem=n%10;
  fac=1;
  while(rem>0){
  fac=fac*rem;
  rem-=1;}
  sum+=fac;n/=10;
}
if(n==sum){
printf("Krishnamurthy Number");}
else printf("not");

}
