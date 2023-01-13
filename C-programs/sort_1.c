#include<stdio.h>
void main(){
int n,i,j,t;
printf("Enter the size of array-");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("Enter the %i element-",i+1);
scanf("%d",&a[i]);}
printf("Usorted array is\n");
for(i=0;i<n;i++){
printf("%d ",a[i]);}

for(i=0;i<n;i++){
for(j=0;j<n-1-i;j++){
if(a[j]>a[j+1]){
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}}}
printf("Sorted array is\n ");
for(i=0;i<n;i++){
printf("%d ",a[i]);}
printf("\n");


}
