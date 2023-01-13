#include<stdio.h>
int f(int x){
if(x==0) return 1;
else return x*f(x-1);}
void main(){
int n;
printf("Enter the Value-");scanf("%d",&n);
printf("FACTORIAL=%d\n",f(n));

}

