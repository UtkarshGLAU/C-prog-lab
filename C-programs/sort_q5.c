#include<stdio.h>
void main(){
int n1,n2,i,j,t,s=0;
printf("Enter the row and column of array-");
scanf("%d %d",&n1,&n2);
int a[n1][n2];
for(i=0;i<n1;i++){
for(j=0;j<n2;j++){
printf("Enter the [%i][%i] element-",i,j);
scanf("%d",&a[i][j]);
if(i==j){s=s+a[i][j];}}
}
printf("Array created is \n");
for(i=0;i<n1;i++){
for(j=0;j<n2;j++){printf("%d ",a[i][j]);}printf("\n");
}

printf("\nSum of diagonal is %d\n",s);




}
