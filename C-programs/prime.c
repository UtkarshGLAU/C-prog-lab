#include<stdio.h>
void main(){
int n,i,a=1;
printf("Enter the number");
scanf("%d",&n);
for(i=2;i=n/2;i++){
 if(n%i==0){a=0;
 break;
 }
}




if(a) 
{printf("Prime number\n");}
else 
printf("Composite Number\n");
}
