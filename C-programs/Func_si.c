#include<stdio.h>
float si(float p,float t,float r){
float s;
s=(p*r*t)/100;
printf("%f\n",s);

}
void main(){
float np,nt,nr;
printf("Enter Priciple amount,time amd rate-\n");
scanf("%f",&np);
scanf("%f",&nt);
scanf("%f",&nr);
si(np,nt,nr);


}
