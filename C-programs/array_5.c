#include<stdio.h>
void main(){
int n,b,m;
printf("Enter the Number of Elements to be inserted- ");
scanf("%d",&n);

int a[100];
for(int i=0;i<n;i++){

printf("Enter the element [%d]- ",i);
scanf("%d",&a[i]);

;}
printf("Enter the element to be put in end= ");
scanf("%i",&b);
a[n]=b;


for(int k=0;k<=n;k++){
printf("The element [%i] is %i\n",k,a[k]);
}



}
