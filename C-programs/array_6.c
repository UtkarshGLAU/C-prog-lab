#include<stdio.h>
void main(){
int n,b,m,c;
printf("Enter the Number of Elements to be inserted- ");
scanf("%d",&n);

int a[100];
for(int i=0;i<n;i++){

printf("Enter the element [%d]- ",i);
scanf("%d",&a[i]);

;}
printf("Enter the the block no. where to insert the element=");
scanf("%i",&c);
printf("Enter the element to be inserted= ");
scanf("%i",&b);

for(int j=n;j>=c;j--){
m=j-1;
a[j]=a[m];}
a[c]=b;
for(int k=0;k<=c||k<=n;k++){
printf("The element [%i] is %i\n",k,a[k]);
}



}
