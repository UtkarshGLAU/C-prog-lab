#include<stdio.h>
void main(){
int i,n,t1,t2,nxt;
printf("Enter the number of term to print");
scanf("%d",&n);
nxt=t1+t2;
printf("the fabonacci series %d,%d,",t1,t2);


for(i=3;i<=n;++i)
{
printf("%d ,",nxt);
t1=t2;
t2=nxt;
nxt=t1+t2;


}


}
