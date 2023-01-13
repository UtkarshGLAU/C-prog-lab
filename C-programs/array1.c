#include<stdio.h>
void main(){
int n,i,in;
printf("Enter the size of the array- ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("Enter element [%d] - ",i);
scanf("%d",&a[i]);}
printf("Enter the index to be deleted: ");
scanf("%d",&in);
for(i=in;i<n-1;i++){
a[i]=a[i+1];}
a[n-1]=0;
printf("Updated array is ");
for(i=0;i<n-1;i++){
printf("%d ",a[i]);}
printf("\n");

}
