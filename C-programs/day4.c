#include<stdio.h>
void main(){
float b,a,inches,feets;
;
printf("Enter the length:\n");
scanf("%f",&a);
printf("Enter Unit(feets(1) , inches(2)):\n");
scanf("%f",&b);
if (b==1){
inches=a*12;
printf("coversion is %f",inches);}
if (b==2){
feets=b/12;
printf("coversion is %f",feets);}


}
