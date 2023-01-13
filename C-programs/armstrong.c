#include<stdio.h>
#include<math.h>
void main(){
int n,m,c=0,rem,sum=0,o;
printf("Enter the number");
scanf("%i",&n);
m=n;
o=m;
while(n>0){c+=1;
n/=10;}
while(m>0){rem=m%10;
sum=sum+pow(rem,c);
m /=10;}

if(sum==o)printf("Armstrong Number");
else printf("Not Armstong Number");

}
