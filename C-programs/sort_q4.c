#include<stdio.h>
void main(){
int n1,n2,i,j,t,s=0;
printf("Enter the row and column of array-");
scanf("%d %d",&n1,&n2);
int a[n1][n2];
for(i=0;i<n1;i++){
for(j=0;j<n2;j++){
printf("Enter the [%i][%i] element-",i,j);
scanf("%d",&a[i][j]);}}
printf("Sum of border is %d\n",a[0][0]+a[n1-1][n2-1]+a[n1-1][0]+a[0][n2-1]);




}
