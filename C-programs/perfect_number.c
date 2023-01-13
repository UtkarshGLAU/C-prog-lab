#include<stdio.h>
void main(){
int n,i,a=0;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i=n/2;i++){
 if(n%i==0)
      a+=i;
}
if(a==n)
printf("Perfect number");
else printf("Not perfect number");





}
