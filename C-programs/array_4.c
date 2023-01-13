#include<stdio.h>
void main(){
int n,b,m;
printf("Enter the Number of Elements- ");
scanf("%d",&n);
n++;
int a[n];
for(int i=0;i<(n-1);i++){

printf("Enter the element [%d]- ",i);
scanf("%d",&a[i]);

;}
printf("Enter the element to be put in beginning= ");
scanf("%i",&b);

for(int j=n;j>=0;j--){
m=j-1;
a[j]=a[m];}
a[0]=b;
for(int k=0;k<n;k++){
printf("The element [%i] is %i\n",k,a[k]);
}



}
