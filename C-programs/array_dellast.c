#include<stdio.h>
void main(){
int n,i;
printf("Enter the size of the array- ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
printf("Enter element [%i] - ",i);
scanf("%d",&a[i]);}
a[n-1]=0;
printf("The updated array is ");
for(i=0;i<n-1;i++){
printf("%i ",a[i]);
}
printf("\n");

}
