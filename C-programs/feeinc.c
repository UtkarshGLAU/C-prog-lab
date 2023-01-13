#include<stdio.h>
void main(){
int a,b,c,d,in,fe,e;
printf("Enter Inches 1:");
scanf("%d",&a);
printf("Enter Inches 2:");
scanf("%d",&b);
printf("Enter feet 1:");
scanf("%d",&c);
printf("Enter feet 2:");
scanf("%d",&d);
in=a+b;
fe=c+d+(in/12);
in=in%12;
printf("Inches is %d ",in);
printf("feets is %d ",fe);

}
