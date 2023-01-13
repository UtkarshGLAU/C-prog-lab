#include<stdio.h>
void main(){
int n,i;
printf("Enter the size of the array- ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("Enter element [%i] - ",i);
scanf("%d",&a[i]);}
for(i=0;i<n-1;i++){
a[i]=a[i+1];
}
a[n-1]=0;
printf("The updated array is ");
for(i=0;i<n-1;i++){
printf("%d ",a[i]);
}printf("\n");

}
